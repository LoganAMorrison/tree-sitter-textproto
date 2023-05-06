;@comment
;@debug
;@error for error `ERROR` nodes.
;@none to disable completely the highlight
;@preproc
;@punctuation.delimiter for `;` `.` `,`
;@punctuation.bracket for `()` or `{}`
;@punctuation.special for symbols with special meaning like `{}` in string interpolation.

;@constant
;@constant.builtin
;@constant.macro
;@string
;@string.regex
;@string.escape
;@string.special
;@character
;@character.special
;@number
;@boolean
;@float

;@function
;@function.builtin
;@function.call
;@function.macro
;@parameter
;@method
;@method.call
;@field
;@property
;@constructor

;@conditional (e.g. `if`, `else`)
;@repeat (e.g. `for`, `while`)
;@label for C/Lua-like labels
;@keyword
;@keyword.function (keyword to define a function, e.g. `func` in Go, `def` in Python)
;@keyword.operator (for operators that are English words, e.g. `and`, `or`)
;@keyword.return
;@operator (for symbolic operators, e.g. `+`, `*`)
;@exception (e.g. `throw`, `catch`)
;@include keywords for including modules (e.g. import/from in Python)
;@storageclass
;@type
;@type.builtin
;@type.definition
;@type.qualifier
;@namespace for identifiers referring to namespaces
;@symbol for identifiers referring to symbols
;@attribute for e.g. Python decorators

;@variable
;@variable.builtin

; Includes
;;;; "@include" @include

(field
  name: (_) @field)

(field
  name: (identifier) @type
  value: (message))

(extension_name (type_name . (identifier) @variable))
(extension_name 
  (type_name 
    (_) 
    (identifier) @property))


(any_name 
  url: (type_name) @label
  message: (type_name) @type)


; Variables
(identifier) @variable

;; (binding_statement
;;   target: (identifier) @parameter)

; (scoped_identifier name: (identifier) @property)

(identifier @boolean
  (@match? @boolean "(\"True\")|(\"true\")|(\"t\")|(\"False\")|(\"false\")|(\"f\")"))

[
  (string)
] @string

[
  (integer)
] @number

[
  (float)
] @float


; (parameter_type (identifier) @type)

(integer) @number
(float) @float
(string) @string
(comment) @comment

; Punctuation
[
  "[" 
  "]" 
  "{" 
  "}"
] @punctuation.bracket

[
  "," 
  "." 
  ";"
] @punctuation.delimiter
