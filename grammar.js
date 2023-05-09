/*global grammar, token, seq, choice, field, prec, repeat, repeat1, optional, alias */

module.exports = grammar({
  name: "textproto",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  word: ($) => $.identifier,

  conflicts: () => [],

  rules: {

    message: ($) => repeat1($.field),


    // =======================================================================
    // ---- Fields -----------------------------------------------------------
    // =======================================================================

    // field: $ => choice($._scalar_field, $._message_field, $._empty_list_field),

    field: $ => seq(
      field("name", $._field_name),
      field("value", choice(
        $.message_field,
        $.scalar_field,
      )),
      optional(choice(";", ","))
    ),

    message_field: $ => seq(
      optional(":"),
      choice(
        $.message_value,
        $.message_list
      ),
    ),

    scalar_field: $ => seq(
      ":",
      choice($._scalar_value, $.scalar_list),
    ),


    message_list: $ => seq(
      "[",
      seq(
        $.message_value,
        repeat(seq(",", $.message_value))
      ),
      "]"
    ),

    scalar_list: $ => seq(
      "[",
      seq(
        $._scalar_value,
        repeat(seq(",", $._scalar_value))
      ),
      "]"
    ),

    message_value: $ => choice(
      seq("{", optional($.message), "}"),
      seq("<", $.message, ">")
    ),

    _scalar_value: $ => choice(
      $._string_value,
      $.float,
      $.identifier,
      $.integer,
    ),

    _field_name: $ => choice(
      $.any_name,
      $.identifier,
      $.extension_name,
    ),

    extension_name: $ => seq(
      "[",
      field("extension", $.type_name),
      "]"
    ),

    any_name: $ => seq(
      "[",
      field("url", $.type_name),
      "/",
      field("message", $.type_name),
      "]"
    ),

    type_name: $ => seq(
      $.identifier,
      repeat(seq(
        ".",
        $.identifier
      ))
    ),

    // =======================================================================
    // ---- Fields -----------------------------------------------------------
    // =======================================================================

    // field: $ => choice($._scalar_field, $._message_field, $._empty_list_field),

    // _message_field: $ => seq(
    //   field("name", $._field_name),
    //   optional(":"),
    //   field("message", choice($._message_value, $._message_list)),
    //   optional(choice(";", ","))
    // ),

    // _scalar_field: $ => seq(
    //   field("name", $._field_name),
    //   ":",
    //   field("scalar", choice($._scalar_value, $._scalar_list)),
    //   optional(choice(";", ","))
    // ),

    // _empty_list_field: $ => seq(
    //   field("name", $._field_name),
    //   ":",
    //   field("value", $._empty_list),
    //   optional(choice(";", ","))
    // ),

    // _empty_list: ($) => alias(seq("[", "]"), $.list),

    // _message_list: $ => alias(seq(
    //   "[",
    //   seq(
    //     $._message_value,
    //     repeat(seq(",", $._message_value))
    //   ),
    //   "]"
    // ), $.list),

    // _scalar_list: $ => alias(seq(
    //   "[",
    //   seq(
    //     $._scalar_value,
    //     repeat(seq(",", $._scalar_value))
    //   ),
    //   "]"
    // ), $.list),


    // _message_value: $ => choice(
    //   seq("{", $.message, "}"),
    //   seq("<", $.message, ">")
    // ),

    // _scalar_value: $ => choice(
    //   $.string,
    //   $.float,
    //   $.identifier,
    //   $.integer,
    // ),

    // _field_name: $ => choice(
    //   $.extension_name,
    //   $.any_name,
    //   $.identifier
    // ),

    // extension_name: $ => seq(
    //   "[",
    //   $.type_name,
    //   "]"
    // ),

    // any_name: $ => seq(
    //   "[",
    //   $.type_name,
    //   "/",
    //   $.type_name,
    //   "]"
    // ),

    // type_name: $ => seq(
    //   $.identifier,
    //   repeat(seq(
    //     ".",
    //     $.identifier
    //   ))
    // ),

    // =======================================================================
    // ---- Literals ---------------------------------------------------------
    // =======================================================================


    _string_value: ($) => choice(
      $.string,
      $.multi_string,
    ),

    multi_string: ($) => seq($.string, repeat1($.string)),

    float: ($) => choice($._float, seq("-", $._float)),
    integer: $ => choice($._integer, seq("-", $._integer)),
    // For example, "-inf"
    signed_identifier: $ => seq("-", $.identifier),

    // =======================================================================
    // ---- Strings ----------------------------------------------------------
    // =======================================================================


    // _escape: ($) => choice(
    //   "\\a", // ASCII #7  (bell)
    //   "\\b", // ASCII #8  (backspace)
    //   "\\f", // ASCII #12 (form feed)
    //   "\\n", // ASCII #10 (line feed)
    //   "\\r", // ASCII #13 (carriage return)
    //   "\\t", // ASCII #9  (horizontal tab)
    //   "\\v", // ASCII #11 (vertical tab)
    //   "\\?", // ASCII #63 (question mark)
    //   "\\",  // ASCII #92 (backslash)
    //   "\\'", // ASCII #39 (apostrophe)
    //   '\\"', // ASCII #34 (quote)
    //   seq("\\", $._oct, optional(seq($._oct, optional($._oct)))),  // UTF-8 byte in octal
    //   seq("\\x", $._hex, optional($._hex)),                   // UTF-8 byte in hexadecimal
    //   seq("\\u", $._hex, $._hex, $._hex, $._hex),             // Unicode code point up to 0xffff
    //   seq("\u{000}", $._hex, $._hex, $._hex, $._hex, $._hex), // Unicode code point up to 0xfffff
    //   seq("\u{0010}", $._hex, $._hex, $._hex, $._hex),        // Unicode code point between 0x100000 and 0x10ffff
    // ),

    string: ($) => choice($._single_string, $._double_string),
    _single_string: ($) => seq("'", repeat(choice($._escape, /[^'\\\n]/)), "'"),
    _double_string: ($) => seq("\"", repeat(choice($._escape, /[^"\\\n]/)), "\""),

    _escape: () => /\\([abfnrtv?\\'"]|([0-7]{1,3}))|(x[0-9a-fA-F]{1,2})|(u[0-9a-fA-F]{4})|(U000[0-9a-fA-F]{4})|(U0010[0-9a-fA-F]{4})/,

    // =======================================================================
    // ---- Numbers ----------------------------------------------------------
    // =======================================================================

    _integer: ($) => choice(
      $._dec,
      $._oct,
      $._hex,
    ),

    // dec: [0-9]    
    // dec_lit = "0" | ( dec - "0" ), { dec } ;
    _dec: () => /0|([1-9]\d*)/,

    // oct: [0-7]    
    // "0", oct, { oct } ;
    _oct: () => /0[0-7]+/,

    // hex: [a-fA-F0-9]    
    // "0", ( "X" | "x" ), hex, { hex } ;
    _hex: () => /0[x|X][0-9a-fA-F]+/,

    // dec: [0-9]
    //
    // dec_lit   = "0" | ( dec - "0" ), { dec } ;
    //           => 0|([1-9]\d*)
    //
    // exp       = ( "E" | "e" ), [ "+" | "-" ], dec, { dec } ;
    //           => [e|E][+-]?[0-9]+
    //
    // float_lit = ".", dec, { dec }, [ exp ] 
    //           | dec_lit, ".", { dec }, [ exp ] 
    //           | dec_lit, exp ;
    //           
    // ".", dec, { dec }, [ exp ] => \.[0-9]+([e|E][+-]?[0-9]+)?
    // dec_lit, ".", {dev}, [ exp ] => (0|([1-9]\d*))\.[0-9]*([e|E][+-]?[0-9]+)?
    // dec_lit, exp => (0|([1-9]\d*))[e|E][+-]?[0-9]+
    // 
    //               \.[0-9]+([e|E][+-]?[0-9]+)?
    // (0|([1-9]\d*))\.[0-9]*([e|E][+-]?[0-9]+)?
    // (0|([1-9]\d*))[e|E][+-]?[0-9]+
    //
    // float = float_lit, [ "F" | "f" ] | dec_lit,   ( "F" | "f" ) ;
    _float: () => token(choice(
      /\.[0-9]+(?:[e|E][+-]?[0-9]+)?[f|F]?/,
      /(?:0|(?:[1-9]\d*))\.[0-9]*(?:[e|E][+-]?[0-9]+)?[f|F]?/,
      /(?:0|(?:[1-9]\d*))[e|E][+-]?[0-9]+[f|F]?/,
      /(?:0|(?:[1-9]\d*))[f|F]/,
    )),

    // letter: [a-zA-Z_]    
    // dec: [0-9]    
    // ident = letter, { letter | dec }
    identifier: () => token(/_?[a-zA-Z][a-zA-Z0-9_]*/),

    comment: () => token(seq("#", /.*/)),
  }
})
