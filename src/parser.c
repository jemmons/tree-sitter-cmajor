#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_namespace = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_processor = 4,
  anon_sym_SEMI = 5,
  anon_sym_input = 6,
  anon_sym_output = 7,
  anon_sym_stream = 8,
  anon_sym_event = 9,
  anon_sym_value = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_int = 14,
  anon_sym_int32 = 15,
  anon_sym_int64 = 16,
  anon_sym_float = 17,
  anon_sym_float32 = 18,
  anon_sym_float64 = 19,
  anon_sym_complex = 20,
  anon_sym_complex32 = 21,
  anon_sym_complex64 = 22,
  anon_sym_bool = 23,
  anon_sym_void = 24,
  anon_sym_wrap_LT = 25,
  aux_sym_limited_type_token1 = 26,
  anon_sym_GT = 27,
  anon_sym_clamp_LT = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_COLON_COLON = 31,
  sym_identifier = 32,
  sym_comment = 33,
  sym_source_file = 34,
  sym__top_level_item = 35,
  sym_namespace_declaration = 36,
  sym_processor_declaration = 37,
  sym__base_io_statement = 38,
  sym_io_statement = 39,
  sym_io_block_statement = 40,
  sym_io_type_block_statement = 41,
  sym_io_block = 42,
  sym_io_type_block = 43,
  sym_io_direction = 44,
  sym_io_type = 45,
  sym__base_type = 46,
  sym_endpoint_type_list = 47,
  sym_primitive_type = 48,
  sym_limited_type = 49,
  sym__array_declaration = 50,
  sym_qualified_identifier = 51,
  sym_function_declaration = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_namespace_declaration_repeat1 = 54,
  aux_sym_processor_declaration_repeat1 = 55,
  aux_sym_processor_declaration_repeat2 = 56,
  aux_sym_io_block_repeat1 = 57,
  aux_sym_io_type_block_repeat1 = 58,
  aux_sym__base_type_repeat1 = 59,
  aux_sym_endpoint_type_list_repeat1 = 60,
  aux_sym__array_declaration_repeat1 = 61,
  aux_sym_qualified_identifier_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_processor] = "processor",
  [anon_sym_SEMI] = ";",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_stream] = "stream",
  [anon_sym_event] = "event",
  [anon_sym_value] = "value",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_int] = "int",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float] = "float",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_complex] = "complex",
  [anon_sym_complex32] = "complex32",
  [anon_sym_complex64] = "complex64",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_wrap_LT] = "wrap<",
  [aux_sym_limited_type_token1] = "limited_type_token1",
  [anon_sym_GT] = ">",
  [anon_sym_clamp_LT] = "clamp<",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__top_level_item] = "_top_level_item",
  [sym_namespace_declaration] = "namespace_declaration",
  [sym_processor_declaration] = "processor_declaration",
  [sym__base_io_statement] = "_base_io_statement",
  [sym_io_statement] = "io_statement",
  [sym_io_block_statement] = "io_block_statement",
  [sym_io_type_block_statement] = "io_type_block_statement",
  [sym_io_block] = "io_block",
  [sym_io_type_block] = "io_type_block",
  [sym_io_direction] = "io_direction",
  [sym_io_type] = "io_type",
  [sym__base_type] = "_base_type",
  [sym_endpoint_type_list] = "endpoint_type_list",
  [sym_primitive_type] = "primitive_type",
  [sym_limited_type] = "limited_type",
  [sym__array_declaration] = "_array_declaration",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_function_declaration] = "function_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_namespace_declaration_repeat1] = "namespace_declaration_repeat1",
  [aux_sym_processor_declaration_repeat1] = "processor_declaration_repeat1",
  [aux_sym_processor_declaration_repeat2] = "processor_declaration_repeat2",
  [aux_sym_io_block_repeat1] = "io_block_repeat1",
  [aux_sym_io_type_block_repeat1] = "io_type_block_repeat1",
  [aux_sym__base_type_repeat1] = "_base_type_repeat1",
  [aux_sym_endpoint_type_list_repeat1] = "endpoint_type_list_repeat1",
  [aux_sym__array_declaration_repeat1] = "_array_declaration_repeat1",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_processor] = anon_sym_processor,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_complex] = anon_sym_complex,
  [anon_sym_complex32] = anon_sym_complex32,
  [anon_sym_complex64] = anon_sym_complex64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_wrap_LT] = anon_sym_wrap_LT,
  [aux_sym_limited_type_token1] = aux_sym_limited_type_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_clamp_LT] = anon_sym_clamp_LT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_item] = sym__top_level_item,
  [sym_namespace_declaration] = sym_namespace_declaration,
  [sym_processor_declaration] = sym_processor_declaration,
  [sym__base_io_statement] = sym__base_io_statement,
  [sym_io_statement] = sym_io_statement,
  [sym_io_block_statement] = sym_io_block_statement,
  [sym_io_type_block_statement] = sym_io_type_block_statement,
  [sym_io_block] = sym_io_block,
  [sym_io_type_block] = sym_io_type_block,
  [sym_io_direction] = sym_io_direction,
  [sym_io_type] = sym_io_type,
  [sym__base_type] = sym__base_type,
  [sym_endpoint_type_list] = sym_endpoint_type_list,
  [sym_primitive_type] = sym_primitive_type,
  [sym_limited_type] = sym_limited_type,
  [sym__array_declaration] = sym__array_declaration,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_function_declaration] = sym_function_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_namespace_declaration_repeat1] = aux_sym_namespace_declaration_repeat1,
  [aux_sym_processor_declaration_repeat1] = aux_sym_processor_declaration_repeat1,
  [aux_sym_processor_declaration_repeat2] = aux_sym_processor_declaration_repeat2,
  [aux_sym_io_block_repeat1] = aux_sym_io_block_repeat1,
  [aux_sym_io_type_block_repeat1] = aux_sym_io_type_block_repeat1,
  [aux_sym__base_type_repeat1] = aux_sym__base_type_repeat1,
  [aux_sym_endpoint_type_list_repeat1] = aux_sym_endpoint_type_list_repeat1,
  [aux_sym__array_declaration_repeat1] = aux_sym__array_declaration_repeat1,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_namespace] = {
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
  [anon_sym_processor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wrap_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limited_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clamp_LT] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_processor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__base_io_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_io_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_io_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_io_type_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_io_block] = {
    .visible = true,
    .named = true,
  },
  [sym_io_type_block] = {
    .visible = true,
    .named = true,
  },
  [sym_io_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_io_type] = {
    .visible = true,
    .named = true,
  },
  [sym__base_type] = {
    .visible = false,
    .named = true,
  },
  [sym_endpoint_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_limited_type] = {
    .visible = true,
    .named = true,
  },
  [sym__array_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_processor_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_processor_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_io_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_io_type_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__base_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_endpoint_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__array_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [19] = 16,
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
  [43] = 16,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 61,
  [81] = 61,
  [82] = 71,
  [83] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(152);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '{') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(164);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'v') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(152);
      if (lookahead == '}') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(106);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(117);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(164);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(165);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_processor);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_input);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_output);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '3') ADVANCE(121);
      if (lookahead == '6') ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(122);
      if (lookahead == '6') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '3') ADVANCE(123);
      if (lookahead == '6') ADVANCE(126);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_complex32);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_complex32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_void);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_wrap_LT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_limited_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_clamp_LT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(97);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(132);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(149);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(148);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(150);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(153);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(144);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(127);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(128);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 't') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(160);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(157);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(164);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_processor] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_complex] = ACTIONS(1),
    [anon_sym_complex32] = ACTIONS(1),
    [anon_sym_complex64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_wrap_LT] = ACTIONS(1),
    [aux_sym_limited_type_token1] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_clamp_LT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__top_level_item] = STATE(25),
    [sym_namespace_declaration] = STATE(25),
    [sym_processor_declaration] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_processor] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(38), 1,
      sym_io_direction,
    STATE(74), 1,
      sym__base_type,
    ACTIONS(13), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(10), 2,
      sym_function_declaration,
      aux_sym_processor_declaration_repeat2,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    STATE(8), 4,
      sym_io_statement,
      sym_io_block,
      sym_io_type_block,
      aux_sym_processor_declaration_repeat1,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [52] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_io_direction,
    STATE(74), 1,
      sym__base_type,
    ACTIONS(13), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(9), 2,
      sym_function_declaration,
      aux_sym_processor_declaration_repeat2,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    STATE(2), 4,
      sym_io_statement,
      sym_io_block,
      sym_io_type_block,
      aux_sym_processor_declaration_repeat1,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [104] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__base_io_statement,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(5), 2,
      sym_io_type_block_statement,
      aux_sym_io_type_block_repeat1,
    STATE(83), 2,
      sym__base_type,
      sym_endpoint_type_list,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [150] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(20), 1,
      sym__base_io_statement,
    ACTIONS(35), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(5), 2,
      sym_io_type_block_statement,
      aux_sym_io_type_block_repeat1,
    STATE(83), 2,
      sym__base_type,
      sym_endpoint_type_list,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(32), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [196] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__base_io_statement,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(4), 2,
      sym_io_type_block_statement,
      aux_sym_io_type_block_repeat1,
    STATE(83), 2,
      sym__base_type,
      sym_endpoint_type_list,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [239] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym__base_io_statement,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(71), 2,
      sym__base_type,
      sym_endpoint_type_list,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym_io_direction,
    ACTIONS(45), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(43), 3,
      anon_sym_RBRACE,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(8), 4,
      sym_io_statement,
      sym_io_block,
      sym_io_type_block,
      aux_sym_processor_declaration_repeat1,
    ACTIONS(48), 12,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [317] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(74), 1,
      sym__base_type,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(11), 2,
      sym_function_declaration,
      aux_sym_processor_declaration_repeat2,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym__base_type,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(11), 2,
      sym_function_declaration,
      aux_sym_processor_declaration_repeat2,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [395] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(74), 1,
      sym__base_type,
    ACTIONS(57), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(11), 2,
      sym_function_declaration,
      aux_sym_processor_declaration_repeat2,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(54), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [434] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym__base_io_statement,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(82), 2,
      sym__base_type,
      sym_endpoint_type_list,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [473] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym__base_type,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(59), 1,
      sym__base_type,
    ACTIONS(17), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(33), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(15), 11,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(67), 14,
      anon_sym_input,
      anon_sym_output,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_RBRACE,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(71), 14,
      anon_sym_input,
      anon_sym_output,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      anon_sym_RBRACE,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(75), 14,
      anon_sym_input,
      anon_sym_output,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_RBRACE,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(79), 14,
      anon_sym_input,
      anon_sym_output,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(71), 12,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(83), 12,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(87), 12,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(91), 12,
      anon_sym_int,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex,
      anon_sym_complex32,
      anon_sym_complex64,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [735] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    STATE(31), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(35), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_namespace,
    ACTIONS(104), 1,
      anon_sym_processor,
    STATE(24), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_source_file_repeat1,
  [776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(24), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_source_file_repeat1,
  [795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_io_type,
    STATE(28), 2,
      sym_io_block_statement,
      aux_sym_io_block_repeat1,
    ACTIONS(111), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_namespace,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      anon_sym_processor,
    STATE(27), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_io_type,
    STATE(28), 2,
      sym_io_block_statement,
      aux_sym_io_block_repeat1,
    ACTIONS(123), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COLON_COLON,
    STATE(29), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(126), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(27), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    STATE(29), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(133), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(30), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(35), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(34), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(137), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(34), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_io_type,
    STATE(26), 2,
      sym_io_block_statement,
      aux_sym_io_block_repeat1,
    ACTIONS(111), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      sym_identifier,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_io_type,
    ACTIONS(111), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [1025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_RBRACE,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [1035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [1045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_RBRACE,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [1075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_LBRACE,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [1105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [1135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__array_declaration_repeat1,
  [1148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_endpoint_type_list_repeat1,
  [1161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__array_declaration_repeat1,
  [1174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_endpoint_type_list_repeat1,
  [1187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      aux_sym_qualified_identifier_repeat1,
  [1200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_endpoint_type_list_repeat1,
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__array_declaration_repeat1,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(69), 1,
      sym_qualified_identifier,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SEMI,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_limited_type_token1,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_limited_type_token1,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_identifier,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_identifier,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
  [1350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_identifier,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_GT,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym_limited_type_token1,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_identifier,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SEMI,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_identifier,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 239,
  [SMALL_STATE(8)] = 281,
  [SMALL_STATE(9)] = 317,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 395,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 473,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 565,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 615,
  [SMALL_STATE(19)] = 640,
  [SMALL_STATE(20)] = 664,
  [SMALL_STATE(21)] = 688,
  [SMALL_STATE(22)] = 712,
  [SMALL_STATE(23)] = 735,
  [SMALL_STATE(24)] = 757,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 795,
  [SMALL_STATE(27)] = 814,
  [SMALL_STATE(28)] = 833,
  [SMALL_STATE(29)] = 852,
  [SMALL_STATE(30)] = 869,
  [SMALL_STATE(31)] = 888,
  [SMALL_STATE(32)] = 905,
  [SMALL_STATE(33)] = 924,
  [SMALL_STATE(34)] = 940,
  [SMALL_STATE(35)] = 956,
  [SMALL_STATE(36)] = 972,
  [SMALL_STATE(37)] = 988,
  [SMALL_STATE(38)] = 1000,
  [SMALL_STATE(39)] = 1015,
  [SMALL_STATE(40)] = 1025,
  [SMALL_STATE(41)] = 1035,
  [SMALL_STATE(42)] = 1045,
  [SMALL_STATE(43)] = 1055,
  [SMALL_STATE(44)] = 1065,
  [SMALL_STATE(45)] = 1075,
  [SMALL_STATE(46)] = 1085,
  [SMALL_STATE(47)] = 1095,
  [SMALL_STATE(48)] = 1105,
  [SMALL_STATE(49)] = 1115,
  [SMALL_STATE(50)] = 1125,
  [SMALL_STATE(51)] = 1135,
  [SMALL_STATE(52)] = 1148,
  [SMALL_STATE(53)] = 1161,
  [SMALL_STATE(54)] = 1174,
  [SMALL_STATE(55)] = 1187,
  [SMALL_STATE(56)] = 1200,
  [SMALL_STATE(57)] = 1213,
  [SMALL_STATE(58)] = 1226,
  [SMALL_STATE(59)] = 1234,
  [SMALL_STATE(60)] = 1242,
  [SMALL_STATE(61)] = 1252,
  [SMALL_STATE(62)] = 1259,
  [SMALL_STATE(63)] = 1266,
  [SMALL_STATE(64)] = 1273,
  [SMALL_STATE(65)] = 1280,
  [SMALL_STATE(66)] = 1287,
  [SMALL_STATE(67)] = 1294,
  [SMALL_STATE(68)] = 1301,
  [SMALL_STATE(69)] = 1308,
  [SMALL_STATE(70)] = 1315,
  [SMALL_STATE(71)] = 1322,
  [SMALL_STATE(72)] = 1329,
  [SMALL_STATE(73)] = 1336,
  [SMALL_STATE(74)] = 1343,
  [SMALL_STATE(75)] = 1350,
  [SMALL_STATE(76)] = 1357,
  [SMALL_STATE(77)] = 1364,
  [SMALL_STATE(78)] = 1371,
  [SMALL_STATE(79)] = 1378,
  [SMALL_STATE(80)] = 1385,
  [SMALL_STATE(81)] = 1392,
  [SMALL_STATE(82)] = 1399,
  [SMALL_STATE(83)] = 1406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_io_type_block_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(47),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(62),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_processor_declaration_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_processor_declaration_repeat1, 2), SHIFT_REPEAT(45),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_processor_declaration_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_processor_declaration_repeat2, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_processor_declaration_repeat2, 2), SHIFT_REPEAT(47),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_processor_declaration_repeat2, 2), SHIFT_REPEAT(62),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_processor_declaration_repeat2, 2), SHIFT_REPEAT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_type_block, 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_type_block, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_io_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_io_statement, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_block, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_block, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_statement, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_statement, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_type_block_statement, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_type_block_statement, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_type, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_type, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_type, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(60),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(79),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_io_block_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_io_block_repeat1, 2), SHIFT_REPEAT(21),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(67),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__base_type_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__base_type_repeat1, 2), SHIFT_REPEAT(78),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_type, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limited_type, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_block_statement, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processor_declaration, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processor_declaration, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_direction, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_declaration, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processor_declaration, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_declaration, 4),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_declaration_repeat1, 2), SHIFT_REPEAT(65),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_declaration_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_endpoint_type_list_repeat1, 2), SHIFT_REPEAT(14),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_endpoint_type_list_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_type_list, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_type_list, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_type_list, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Cmajor(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
