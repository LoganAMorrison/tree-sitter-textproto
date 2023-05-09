#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_COMMA = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  anon_sym_SLASH = 11,
  anon_sym_DOT = 12,
  anon_sym_DASH = 13,
  anon_sym_SQUOTE = 14,
  aux_sym__single_string_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym__double_string_token1 = 17,
  sym__escape = 18,
  sym__dec = 19,
  sym__oct = 20,
  sym__hex = 21,
  sym__float = 22,
  sym_comment = 23,
  sym_message = 24,
  sym_field = 25,
  sym_message_field = 26,
  sym_scalar_field = 27,
  sym_message_list = 28,
  sym_scalar_list = 29,
  sym_message_value = 30,
  sym__scalar_value = 31,
  sym__field_name = 32,
  sym_extension_name = 33,
  sym_any_name = 34,
  sym_type_name = 35,
  sym__string_value = 36,
  sym_multi_string = 37,
  sym_float = 38,
  sym_integer = 39,
  sym_string = 40,
  sym__single_string = 41,
  sym__double_string = 42,
  sym__integer = 43,
  aux_sym_message_repeat1 = 44,
  aux_sym_message_list_repeat1 = 45,
  aux_sym_scalar_list_repeat1 = 46,
  aux_sym_type_name_repeat1 = 47,
  aux_sym_multi_string_repeat1 = 48,
  aux_sym__single_string_repeat1 = 49,
  aux_sym__double_string_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_string_token1] = "_single_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_string_token1] = "_double_string_token1",
  [sym__escape] = "_escape",
  [sym__dec] = "_dec",
  [sym__oct] = "_oct",
  [sym__hex] = "_hex",
  [sym__float] = "_float",
  [sym_comment] = "comment",
  [sym_message] = "message",
  [sym_field] = "field",
  [sym_message_field] = "message_field",
  [sym_scalar_field] = "scalar_field",
  [sym_message_list] = "message_list",
  [sym_scalar_list] = "scalar_list",
  [sym_message_value] = "message_value",
  [sym__scalar_value] = "_scalar_value",
  [sym__field_name] = "_field_name",
  [sym_extension_name] = "extension_name",
  [sym_any_name] = "any_name",
  [sym_type_name] = "type_name",
  [sym__string_value] = "_string_value",
  [sym_multi_string] = "multi_string",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym__single_string] = "_single_string",
  [sym__double_string] = "_double_string",
  [sym__integer] = "_integer",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_message_list_repeat1] = "message_list_repeat1",
  [aux_sym_scalar_list_repeat1] = "scalar_list_repeat1",
  [aux_sym_type_name_repeat1] = "type_name_repeat1",
  [aux_sym_multi_string_repeat1] = "multi_string_repeat1",
  [aux_sym__single_string_repeat1] = "_single_string_repeat1",
  [aux_sym__double_string_repeat1] = "_double_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_string_token1] = aux_sym__single_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_string_token1] = aux_sym__double_string_token1,
  [sym__escape] = sym__escape,
  [sym__dec] = sym__dec,
  [sym__oct] = sym__oct,
  [sym__hex] = sym__hex,
  [sym__float] = sym__float,
  [sym_comment] = sym_comment,
  [sym_message] = sym_message,
  [sym_field] = sym_field,
  [sym_message_field] = sym_message_field,
  [sym_scalar_field] = sym_scalar_field,
  [sym_message_list] = sym_message_list,
  [sym_scalar_list] = sym_scalar_list,
  [sym_message_value] = sym_message_value,
  [sym__scalar_value] = sym__scalar_value,
  [sym__field_name] = sym__field_name,
  [sym_extension_name] = sym_extension_name,
  [sym_any_name] = sym_any_name,
  [sym_type_name] = sym_type_name,
  [sym__string_value] = sym__string_value,
  [sym_multi_string] = sym_multi_string,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [sym__single_string] = sym__single_string,
  [sym__double_string] = sym__double_string,
  [sym__integer] = sym__integer,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_message_list_repeat1] = aux_sym_message_list_repeat1,
  [aux_sym_scalar_list_repeat1] = aux_sym_scalar_list_repeat1,
  [aux_sym_type_name_repeat1] = aux_sym_type_name_repeat1,
  [aux_sym_multi_string_repeat1] = aux_sym_multi_string_repeat1,
  [aux_sym__single_string_repeat1] = aux_sym__single_string_repeat1,
  [aux_sym__double_string_repeat1] = aux_sym__double_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym__dec] = {
    .visible = false,
    .named = true,
  },
  [sym__oct] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_message_field] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_field] = {
    .visible = true,
    .named = true,
  },
  [sym_message_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_list] = {
    .visible = true,
    .named = true,
  },
  [sym_message_value] = {
    .visible = true,
    .named = true,
  },
  [sym__scalar_value] = {
    .visible = false,
    .named = true,
  },
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [sym_extension_name] = {
    .visible = true,
    .named = true,
  },
  [sym_any_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym__string_value] = {
    .visible = false,
    .named = true,
  },
  [sym_multi_string] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__single_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_string] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scalar_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_extension = 1,
  field_message = 2,
  field_name = 3,
  field_url = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_extension] = "extension",
  [field_message] = "message",
  [field_name] = "name",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 1},
  [2] =
    {field_extension, 1},
  [3] =
    {field_message, 3},
    {field_url, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
};

static inline bool sym__escape_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '?'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '?' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (sym__escape_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (sym__escape_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(8)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (sym__escape_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '1') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__single_string_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__single_string_token1);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__single_string_token1);
      if (lookahead == '0') ADVANCE(13);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__single_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__single_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__single_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__double_string_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__double_string_token1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__double_string_token1);
      if (lookahead == '0') ADVANCE(13);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__double_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__double_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__double_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__escape);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__escape);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__oct);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__float);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'F' ||
          lookahead == 'f' ||
          lookahead == '|') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '1') ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape] = ACTIONS(1),
    [sym__dec] = ACTIONS(1),
    [sym__oct] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__float] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_message] = STATE(62),
    [sym_field] = STATE(8),
    [sym__field_name] = STATE(17),
    [sym_extension_name] = STATE(17),
    [sym_any_name] = STATE(17),
    [aux_sym_message_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__oct,
    ACTIONS(27), 1,
      sym__float,
    STATE(5), 1,
      sym_string,
    STATE(22), 1,
      sym__integer,
    ACTIONS(23), 2,
      sym__dec,
      sym__hex,
    STATE(14), 2,
      sym__single_string,
      sym__double_string,
    STATE(26), 2,
      sym_message_list,
      sym_message_value,
    STATE(25), 6,
      sym_scalar_list,
      sym__scalar_value,
      sym__string_value,
      sym_multi_string,
      sym_float,
      sym_integer,
  [57] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__oct,
    ACTIONS(27), 1,
      sym__float,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(5), 1,
      sym_string,
    STATE(22), 1,
      sym__integer,
    STATE(50), 1,
      sym_message_value,
    ACTIONS(23), 2,
      sym__dec,
      sym__hex,
    STATE(14), 2,
      sym__single_string,
      sym__double_string,
    STATE(47), 5,
      sym__scalar_value,
      sym__string_value,
      sym_multi_string,
      sym_float,
      sym_integer,
  [109] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__oct,
    ACTIONS(27), 1,
      sym__float,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_string,
    STATE(22), 1,
      sym__integer,
    ACTIONS(23), 2,
      sym__dec,
      sym__hex,
    STATE(14), 2,
      sym__single_string,
      sym__double_string,
    STATE(58), 5,
      sym__scalar_value,
      sym__string_value,
      sym_multi_string,
      sym_float,
      sym_integer,
  [152] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(7), 2,
      sym_string,
      aux_sym_multi_string_repeat1,
    STATE(14), 2,
      sym__single_string,
      sym__double_string,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    STATE(6), 2,
      sym_string,
      aux_sym_multi_string_repeat1,
    STATE(14), 2,
      sym__single_string,
      sym__double_string,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [208] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(6), 2,
      sym_string,
      aux_sym_multi_string_repeat1,
    STATE(14), 2,
      sym__single_string,
      sym__double_string,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_field,
      aux_sym_message_repeat1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_GT,
    STATE(17), 3,
      sym__field_name,
      sym_extension_name,
      sym_any_name,
  [260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [292] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_field,
      aux_sym_message_repeat1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_GT,
    STATE(17), 3,
      sym__field_name,
      sym_extension_name,
      sym_any_name,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_message,
    STATE(8), 2,
      sym_field,
      aux_sym_message_repeat1,
    STATE(17), 3,
      sym__field_name,
      sym_extension_name,
      sym_any_name,
  [389] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_message,
    STATE(8), 2,
      sym_field,
      aux_sym_message_repeat1,
    STATE(17), 3,
      sym__field_name,
      sym_extension_name,
      sym_any_name,
  [411] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(24), 2,
      sym_message_field,
      sym_scalar_field,
    STATE(27), 2,
      sym_message_list,
      sym_message_value,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__oct,
    ACTIONS(105), 1,
      sym__float,
    STATE(19), 1,
      sym__integer,
    ACTIONS(101), 2,
      sym__dec,
      sym__hex,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_type_name_repeat1,
    ACTIONS(111), 2,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [677] = 4,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym__single_string_repeat1,
    ACTIONS(117), 2,
      aux_sym__single_string_token1,
      sym__escape,
  [691] = 4,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym__double_string_repeat1,
    ACTIONS(123), 2,
      aux_sym__double_string_token1,
      sym__escape,
  [705] = 4,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym__double_string_repeat1,
    ACTIONS(128), 2,
      aux_sym__double_string_token1,
      sym__escape,
  [719] = 4,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym__double_string_repeat1,
    ACTIONS(132), 2,
      aux_sym__double_string_token1,
      sym__escape,
  [733] = 4,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      aux_sym__single_string_repeat1,
    ACTIONS(136), 2,
      aux_sym__single_string_token1,
      sym__escape,
  [747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_type_name_repeat1,
    ACTIONS(138), 2,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_type_name_repeat1,
    ACTIONS(145), 2,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [785] = 4,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      aux_sym__single_string_repeat1,
    ACTIONS(149), 2,
      aux_sym__single_string_token1,
      sym__escape,
  [799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(50), 1,
      sym_message_value,
  [812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_scalar_list_repeat1,
  [825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_scalar_list_repeat1,
  [838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_message_list_repeat1,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_DOT,
  [860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_message_list_repeat1,
  [873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym_message_value,
  [886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_message_list_repeat1,
  [899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_scalar_list_repeat1,
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(60), 1,
      sym_type_name,
  [922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(178), 1,
      anon_sym_SLASH,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(55), 1,
      sym_type_name,
  [950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 109,
  [SMALL_STATE(5)] = 152,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 208,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 276,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 332,
  [SMALL_STATE(14)] = 348,
  [SMALL_STATE(15)] = 364,
  [SMALL_STATE(16)] = 389,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 435,
  [SMALL_STATE(19)] = 449,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 477,
  [SMALL_STATE(22)] = 491,
  [SMALL_STATE(23)] = 505,
  [SMALL_STATE(24)] = 519,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 547,
  [SMALL_STATE(27)] = 560,
  [SMALL_STATE(28)] = 573,
  [SMALL_STATE(29)] = 586,
  [SMALL_STATE(30)] = 599,
  [SMALL_STATE(31)] = 612,
  [SMALL_STATE(32)] = 625,
  [SMALL_STATE(33)] = 642,
  [SMALL_STATE(34)] = 653,
  [SMALL_STATE(35)] = 663,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 691,
  [SMALL_STATE(38)] = 705,
  [SMALL_STATE(39)] = 719,
  [SMALL_STATE(40)] = 733,
  [SMALL_STATE(41)] = 747,
  [SMALL_STATE(42)] = 761,
  [SMALL_STATE(43)] = 771,
  [SMALL_STATE(44)] = 785,
  [SMALL_STATE(45)] = 799,
  [SMALL_STATE(46)] = 812,
  [SMALL_STATE(47)] = 825,
  [SMALL_STATE(48)] = 838,
  [SMALL_STATE(49)] = 851,
  [SMALL_STATE(50)] = 860,
  [SMALL_STATE(51)] = 873,
  [SMALL_STATE(52)] = 886,
  [SMALL_STATE(53)] = 899,
  [SMALL_STATE(54)] = 912,
  [SMALL_STATE(55)] = 922,
  [SMALL_STATE(56)] = 932,
  [SMALL_STATE(57)] = 940,
  [SMALL_STATE(58)] = 950,
  [SMALL_STATE(59)] = 958,
  [SMALL_STATE(60)] = 965,
  [SMALL_STATE(61)] = 972,
  [SMALL_STATE(62)] = 979,
  [SMALL_STATE(63)] = 986,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_value, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_string_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_string_repeat1, 2), SHIFT_REPEAT(40),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_string_repeat1, 2), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_string, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_string, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_string, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(17),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(57),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_string, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_string, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_field, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_list, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_list, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_list, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_list, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_name, 5, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_string_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_string_repeat1, 2), SHIFT_REPEAT(37),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2), SHIFT_REPEAT(59),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_name, 3, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_string_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_string_repeat1, 2), SHIFT_REPEAT(44),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_list_repeat1, 2), SHIFT_REPEAT(4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_list_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_list_repeat1, 2), SHIFT_REPEAT(51),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_list_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_textproto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
