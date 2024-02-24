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
      //todo: $.graph_declaration,
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
          //todo: function def
          //todo: Global constant variables
          //todo: struct and using type declarations
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
          $.io_statement,
          $.io_block,
          $.io_type_block,
        ),
      ),
      "}",
    ),

    _base_io_statement: $ => seq(
      choice($._endpoint_type, $.endpoint_type_list),
      $.identifier, //todo: input/output arrays not yet implemented in language.
      //todo: annotations
      ";",
    ),

    io_statement: $ => seq(
      $.io_direction,
      $.io_type,
      $._base_io_statement,
    ),

    io_block_statement: $ => seq(
      $.io_type,
      $._base_io_statement,
    ),

    io_type_block_statement: $ => seq(
      $._base_io_statement,
    ),

    io_block: $ => seq(
      $.io_direction,
      "{",
      repeat1($.io_block_statement),
      "}",
    ),

    io_type_block: $ => seq(
      $.io_direction,
      $.io_type,
      "{",
      repeat1($.io_type_block_statement),
      "}",
    ),

    io_direction: _ => choice("input", "output"),
    io_type: _ => choice("stream", "event", "value"),
    // io_type_statement: $ => seq(
    //   $._io_type,
    //   choice($._type, /*todo: $.type_list*/),
    //   $.identifier,
    //   ";",
    // )
    // )

    _base_type: $ => seq(
      choice(
        $.primitive_type,
        $.limited_type,
        $.identifier,
        $.qualified_identifier,
      ),
      repeat($._array_declaration)
    ),

    _declaration_type: $ => seq(
      optional("const"),
      $._base_type,
    ),

    _endpoint_type: $ => seq($._base_type),
    endpoint_type_list: $ => seq(
      "(",
      $._endpoint_type,
      repeat(seq(",", $._endpoint_type)),
      ")",
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
