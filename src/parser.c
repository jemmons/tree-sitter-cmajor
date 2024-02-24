#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_const = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_int = 15,
  anon_sym_int32 = 16,
  anon_sym_int64 = 17,
  anon_sym_float = 18,
  anon_sym_float32 = 19,
  anon_sym_float64 = 20,
  anon_sym_complex = 21,
  anon_sym_complex32 = 22,
  anon_sym_complex64 = 23,
  anon_sym_bool = 24,
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
  sym__endpoint_type = 47,
  sym_endpoint_type_list = 48,
  sym_primitive_type = 49,
  sym_limited_type = 50,
  sym__array_declaration = 51,
  sym_qualified_identifier = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_namespace_declaration_repeat1 = 54,
  aux_sym_processor_declaration_repeat1 = 55,
  aux_sym_io_block_repeat1 = 56,
  aux_sym_io_type_block_repeat1 = 57,
  aux_sym__base_type_repeat1 = 58,
  aux_sym_endpoint_type_list_repeat1 = 59,
  aux_sym__array_declaration_repeat1 = 60,
  aux_sym_qualified_identifier_repeat1 = 61,
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
  [anon_sym_const] = "const",
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
  [sym__endpoint_type] = "_endpoint_type",
  [sym_endpoint_type_list] = "endpoint_type_list",
  [sym_primitive_type] = "primitive_type",
  [sym_limited_type] = "limited_type",
  [sym__array_declaration] = "_array_declaration",
  [sym_qualified_identifier] = "qualified_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_namespace_declaration_repeat1] = "namespace_declaration_repeat1",
  [aux_sym_processor_declaration_repeat1] = "processor_declaration_repeat1",
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
  [anon_sym_const] = anon_sym_const,
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
  [sym__endpoint_type] = sym__endpoint_type,
  [sym_endpoint_type_list] = sym_endpoint_type_list,
  [sym_primitive_type] = sym_primitive_type,
  [sym_limited_type] = sym_limited_type,
  [sym__array_declaration] = sym__array_declaration,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_namespace_declaration_repeat1] = aux_sym_namespace_declaration_repeat1,
  [aux_sym_processor_declaration_repeat1] = aux_sym_processor_declaration_repeat1,
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
  [anon_sym_const] = {
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
  [sym__endpoint_type] = {
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
  [29] = 9,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 55,
  [69] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(54);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead == '{') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(110);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(113);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(149);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_processor);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '3') ADVANCE(117);
      if (lookahead == '6') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(118);
      if (lookahead == '6') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '3') ADVANCE(119);
      if (lookahead == '6') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_complex32);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_complex32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_wrap_LT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_limited_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_clamp_LT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(145);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(128);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(141);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(140);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(74);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
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
    [anon_sym_const] = ACTIONS(1),
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
    [sym_source_file] = STATE(57),
    [sym__top_level_item] = STATE(22),
    [sym_namespace_declaration] = STATE(22),
    [sym_processor_declaration] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_processor] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 1,
      sym_identifier,
    STATE(10), 1,
      sym__base_io_statement,
    ACTIONS(19), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(2), 2,
      sym_io_type_block_statement,
      aux_sym_io_type_block_repeat1,
    STATE(26), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    STATE(69), 3,
      sym__base_type,
      sym__endpoint_type,
      sym_endpoint_type_list,
    ACTIONS(16), 10,
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
  [46] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(10), 1,
      sym__base_io_statement,
    ACTIONS(31), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(2), 2,
      sym_io_type_block_statement,
      aux_sym_io_type_block_repeat1,
    STATE(26), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    STATE(69), 3,
      sym__base_type,
      sym__endpoint_type,
      sym_endpoint_type_list,
    ACTIONS(29), 10,
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
  [92] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(10), 1,
      sym__base_io_statement,
    ACTIONS(31), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(3), 2,
      sym_io_type_block_statement,
      aux_sym_io_type_block_repeat1,
    STATE(26), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    STATE(69), 3,
      sym__base_type,
      sym__endpoint_type,
      sym_endpoint_type_list,
    ACTIONS(29), 10,
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
  [135] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym__base_io_statement,
    ACTIONS(31), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(26), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    STATE(66), 3,
      sym__base_type,
      sym__endpoint_type,
      sym_endpoint_type_list,
    ACTIONS(29), 10,
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
  [177] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(39), 1,
      sym__base_io_statement,
    ACTIONS(31), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(26), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    STATE(66), 3,
      sym__base_type,
      sym__endpoint_type,
      sym_endpoint_type_list,
    ACTIONS(29), 10,
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
  [216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(43), 2,
      sym__base_type,
      sym__endpoint_type,
    STATE(26), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(29), 10,
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
  [248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(53), 2,
      sym__base_type,
      sym__endpoint_type,
    STATE(26), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(29), 10,
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
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(39), 11,
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
      sym_identifier,
  [303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(43), 11,
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
      sym_identifier,
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    ACTIONS(47), 11,
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
      sym_identifier,
  [349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(28), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(49), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [371] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_io_direction,
    ACTIONS(57), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(15), 4,
      sym_io_statement,
      sym_io_block,
      sym_io_type_block,
      aux_sym_processor_declaration_repeat1,
  [391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_io_direction,
    ACTIONS(61), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(14), 4,
      sym_io_statement,
      sym_io_block,
      sym_io_type_block,
      aux_sym_processor_declaration_repeat1,
  [411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_io_direction,
    ACTIONS(57), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(14), 4,
      sym_io_statement,
      sym_io_block,
      sym_io_type_block,
      aux_sym_processor_declaration_repeat1,
  [431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_io_type,
    STATE(16), 2,
      sym_io_block_statement,
      aux_sym_io_block_repeat1,
    ACTIONS(68), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_namespace,
    ACTIONS(76), 1,
      anon_sym_processor,
    STATE(17), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_source_file_repeat1,
  [469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(20), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(81), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(24), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(85), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(17), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_source_file_repeat1,
  [560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_io_type,
    STATE(16), 2,
      sym_io_block_statement,
      aux_sym_io_block_repeat1,
    ACTIONS(94), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_namespace,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_processor,
    STATE(24), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      sym_identifier,
  [610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(28), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(49), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(27), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(27), 2,
      sym__array_declaration,
      aux_sym__base_type_repeat1,
    ACTIONS(109), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 6,
      anon_sym_RBRACE,
      anon_sym_input,
      anon_sym_output,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_io_type,
    STATE(23), 2,
      sym_io_block_statement,
      aux_sym_io_block_repeat1,
    ACTIONS(94), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_io_type,
    ACTIONS(94), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      anon_sym_LBRACE,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_RBRACE,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
  [801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__array_declaration_repeat1,
  [814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_endpoint_type_list_repeat1,
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_endpoint_type_list_repeat1,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      anon_sym_input,
      anon_sym_output,
  [849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      anon_sym_RBRACE,
      anon_sym_input,
      anon_sym_output,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_RBRACE,
      anon_sym_input,
      anon_sym_output,
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      aux_sym_qualified_identifier_repeat1,
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_endpoint_type_list_repeat1,
  [893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym__array_declaration_repeat1,
  [906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__array_declaration_repeat1,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(63), 1,
      sym_qualified_identifier,
  [945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SEMI,
  [952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_limited_type_token1,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_limited_type_token1,
  [987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_limited_type_token1,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_GT,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_identifier,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_identifier,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_identifier,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 248,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 349,
  [SMALL_STATE(13)] = 371,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 450,
  [SMALL_STATE(18)] = 469,
  [SMALL_STATE(19)] = 488,
  [SMALL_STATE(20)] = 505,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 541,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 579,
  [SMALL_STATE(25)] = 598,
  [SMALL_STATE(26)] = 610,
  [SMALL_STATE(27)] = 626,
  [SMALL_STATE(28)] = 642,
  [SMALL_STATE(29)] = 658,
  [SMALL_STATE(30)] = 670,
  [SMALL_STATE(31)] = 686,
  [SMALL_STATE(32)] = 701,
  [SMALL_STATE(33)] = 711,
  [SMALL_STATE(34)] = 721,
  [SMALL_STATE(35)] = 731,
  [SMALL_STATE(36)] = 741,
  [SMALL_STATE(37)] = 751,
  [SMALL_STATE(38)] = 761,
  [SMALL_STATE(39)] = 771,
  [SMALL_STATE(40)] = 781,
  [SMALL_STATE(41)] = 791,
  [SMALL_STATE(42)] = 801,
  [SMALL_STATE(43)] = 814,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 840,
  [SMALL_STATE(46)] = 849,
  [SMALL_STATE(47)] = 858,
  [SMALL_STATE(48)] = 867,
  [SMALL_STATE(49)] = 880,
  [SMALL_STATE(50)] = 893,
  [SMALL_STATE(51)] = 906,
  [SMALL_STATE(52)] = 919,
  [SMALL_STATE(53)] = 927,
  [SMALL_STATE(54)] = 935,
  [SMALL_STATE(55)] = 945,
  [SMALL_STATE(56)] = 952,
  [SMALL_STATE(57)] = 959,
  [SMALL_STATE(58)] = 966,
  [SMALL_STATE(59)] = 973,
  [SMALL_STATE(60)] = 980,
  [SMALL_STATE(61)] = 987,
  [SMALL_STATE(62)] = 994,
  [SMALL_STATE(63)] = 1001,
  [SMALL_STATE(64)] = 1008,
  [SMALL_STATE(65)] = 1015,
  [SMALL_STATE(66)] = 1022,
  [SMALL_STATE(67)] = 1029,
  [SMALL_STATE(68)] = 1036,
  [SMALL_STATE(69)] = 1043,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_io_type_block_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(7),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(32),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(58),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_io_type_block_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_io_statement, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_io_statement, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_type_block_statement, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_type_block_statement, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_type, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_type, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_type, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_processor_declaration_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_processor_declaration_repeat1, 2), SHIFT_REPEAT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_io_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_io_block_repeat1, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(65),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(54),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(67),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__base_type_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__base_type_repeat1, 2), SHIFT_REPEAT(60),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_type, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_declaration, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processor_declaration, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_direction, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limited_type, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_declaration, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_block_statement, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processor_declaration, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_endpoint_type_list_repeat1, 2), SHIFT_REPEAT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_endpoint_type_list_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_block, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_statement, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_type_block, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_declaration_repeat1, 2), SHIFT_REPEAT(61),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_declaration_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_type_list, 3),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_type_list, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
