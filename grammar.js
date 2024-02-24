module.exports = grammar({
  name: 'Cmajor',


  extras: $ => [
    /\s/,
    $.comment,
  ],


  rules: {
    source_file: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.namespace_declaration,
      $.processor_declaration,
      $.graph_declaration,
    ),

    namespace_declaration: $ => seq(
      "namespace",
      choice(
        $.identifier,
        $.qualified_identifier,
      ),
      "{",
      repeat(
        choice(
          $._top_level_item,
          // function def
          // Global constant variables
          // struct and using type declarations
        ),
      ),
      "}"
    ),

    processor_declaration: $ => seq(
      "processor",
      $.identifier,
      "{",
      repeat(
        choice(
          $.io_declaration,
          //$.io_block,
        ),
      ),
      "}",
    ),

    graph_declaration: $ => 'graph',

    io_declaration: $ => seq(
      choice("input", "output"),
      choice("stream", "event", "value"),
      choice($._type, /*todo: $.type_list*/),
      choice($.identifier, /*todo: $.array_identifier*/),
      //todo: annotations
      ";",
    ),

    _type: $ => seq(
      choice(
        $.primitive_type,
        $.limited_type,
        $.identifier,
        $.qualified_identifier,
      ),
      repeat($._array_declaration)
    ),

    primitive_type: _ => choice(
      "int",
      "int32",
      "int64",
      "float",
      "float32",
      "float64",
      "complex",
      "complex32",
      "complex64",
      "bool",
    ),

    limited_type: _ => choice(
      seq("wrap<", /\d+/, ">"),
      seq("clamp<", /\d+/, ">"),
    ),

    _array_declaration: $ => seq(
      "[",
      /\d+/,
      repeat(seq(",", /\d+/)),
      "]",
    ),

    qualified_identifier: $ => seq(
      $.identifier,
      repeat1(
        seq(
          "::",
          $.identifier
        )
      )
    ),

    identifier: _ => /[a-zA-Z]{1}[a-zA-Z1-9_]*/,

    comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  }
});
