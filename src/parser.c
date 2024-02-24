#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_namespace = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_processor = 4,
  sym_graph_declaration = 5,
  anon_sym_input = 6,
  anon_sym_output = 7,
  anon_sym_stream = 8,
  anon_sym_event = 9,
  anon_sym_value = 10,
  anon_sym_SEMI = 11,
  anon_sym_int = 12,
  anon_sym_int32 = 13,
  anon_sym_int64 = 14,
  anon_sym_float = 15,
  anon_sym_float32 = 16,
  anon_sym_float64 = 17,
  anon_sym_complex = 18,
  anon_sym_complex32 = 19,
  anon_sym_complex64 = 20,
  anon_sym_bool = 21,
  anon_sym_wrap_LT = 22,
  aux_sym_limited_type_token1 = 23,
  anon_sym_GT = 24,
  anon_sym_clamp_LT = 25,
  anon_sym_LBRACK = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACK = 28,
  anon_sym_COLON_COLON = 29,
  sym_identifier = 30,
  sym_comment = 31,
  sym_source_file = 32,
  sym__top_level_item = 33,
  sym_namespace_declaration = 34,
  sym_processor_declaration = 35,
  sym_io_declaration = 36,
  sym__type = 37,
  sym_primitive_type = 38,
  sym_limited_type = 39,
  sym__array_declaration = 40,
  sym_qualified_identifier = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_namespace_declaration_repeat1 = 43,
  aux_sym_processor_declaration_repeat1 = 44,
  aux_sym__type_repeat1 = 45,
  aux_sym__array_declaration_repeat1 = 46,
  aux_sym_qualified_identifier_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_processor] = "processor",
  [sym_graph_declaration] = "graph_declaration",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_stream] = "stream",
  [anon_sym_event] = "event",
  [anon_sym_value] = "value",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__top_level_item] = "_top_level_item",
  [sym_namespace_declaration] = "namespace_declaration",
  [sym_processor_declaration] = "processor_declaration",
  [sym_io_declaration] = "io_declaration",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_limited_type] = "limited_type",
  [sym__array_declaration] = "_array_declaration",
  [sym_qualified_identifier] = "qualified_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_namespace_declaration_repeat1] = "namespace_declaration_repeat1",
  [aux_sym_processor_declaration_repeat1] = "processor_declaration_repeat1",
  [aux_sym__type_repeat1] = "_type_repeat1",
  [aux_sym__array_declaration_repeat1] = "_array_declaration_repeat1",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_processor] = anon_sym_processor,
  [sym_graph_declaration] = sym_graph_declaration,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_item] = sym__top_level_item,
  [sym_namespace_declaration] = sym_namespace_declaration,
  [sym_processor_declaration] = sym_processor_declaration,
  [sym_io_declaration] = sym_io_declaration,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_limited_type] = sym_limited_type,
  [sym__array_declaration] = sym__array_declaration,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_namespace_declaration_repeat1] = aux_sym_namespace_declaration_repeat1,
  [aux_sym_processor_declaration_repeat1] = aux_sym_processor_declaration_repeat1,
  [aux_sym__type_repeat1] = aux_sym__type_repeat1,
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
  [sym_graph_declaration] = {
    .visible = true,
    .named = true,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_COMMA] = {
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
  [sym_io_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
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
  [aux_sym__type_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(60);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == '{') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(109);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(112);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 75:
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(149);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_processor);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_graph_declaration);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '3') ADVANCE(117);
      if (lookahead == '6') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(118);
      if (lookahead == '6') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_complex);
      if (lookahead == '3') ADVANCE(119);
      if (lookahead == '6') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_complex32);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_complex32);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_wrap_LT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_limited_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_clamp_LT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(94);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(106);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(112);
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
      if (lookahead == 'l') ADVANCE(108);
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
      if (lookahead == 't') ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(102);
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
      if (lookahead == '\\') ADVANCE(76);
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
      if (lookahead == '\\') ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_processor] = ACTIONS(1),
    [sym_graph_declaration] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__top_level_item] = STATE(3),
    [sym_namespace_declaration] = STATE(3),
    [sym_processor_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_processor] = ACTIONS(9),
    [sym_graph_declaration] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(42), 1,
      sym__type,
    ACTIONS(15), 2,
      anon_sym_wrap_LT,
      anon_sym_clamp_LT,
    STATE(19), 3,
      sym_primitive_type,
      sym_limited_type,
      sym_qualified_identifier,
    ACTIONS(13), 10,
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
  [31] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_graph_declaration,
    STATE(5), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_source_file_repeat1,
  [53] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_namespace,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_processor,
    ACTIONS(31), 1,
      sym_graph_declaration,
    STATE(4), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [75] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_namespace,
    ACTIONS(39), 1,
      anon_sym_processor,
    ACTIONS(42), 1,
      sym_graph_declaration,
    STATE(5), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_source_file_repeat1,
  [97] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_graph_declaration,
    STATE(7), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [119] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_processor,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_graph_declaration,
    STATE(4), 4,
      sym__top_level_item,
      sym_namespace_declaration,
      sym_processor_declaration,
      aux_sym_namespace_declaration_repeat1,
  [141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(18), 2,
      sym__array_declaration,
      aux_sym__type_repeat1,
  [161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
      sym_graph_declaration,
  [172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(10), 2,
      sym_io_declaration,
      aux_sym_processor_declaration_repeat1,
  [187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
      sym_graph_declaration,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
      sym_graph_declaration,
  [209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    STATE(17), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(70), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(16), 2,
      sym_io_declaration,
      aux_sym_processor_declaration_repeat1,
  [239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_processor,
      sym_graph_declaration,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(10), 2,
      sym_io_declaration,
      aux_sym_processor_declaration_repeat1,
  [265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_COLON_COLON,
    STATE(17), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(80), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(20), 2,
      sym__array_declaration,
      aux_sym__type_repeat1,
  [294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(18), 2,
      sym__array_declaration,
      aux_sym__type_repeat1,
  [308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(20), 2,
      sym__array_declaration,
      aux_sym__type_repeat1,
  [322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 4,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      sym_identifier,
  [332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym_qualified_identifier_repeat1,
  [345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym__array_declaration_repeat1,
  [358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_stream,
      anon_sym_event,
      anon_sym_value,
  [367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym__array_declaration_repeat1,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      anon_sym_input,
      anon_sym_output,
  [389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym__array_declaration_repeat1,
  [402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(36), 1,
      sym_qualified_identifier,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SEMI,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
  [473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
  [480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_identifier,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_limited_type_token1,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_limited_type_token1,
  [501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_GT,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_identifier,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_limited_type_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 209,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 239,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 265,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 332,
  [SMALL_STATE(23)] = 345,
  [SMALL_STATE(24)] = 358,
  [SMALL_STATE(25)] = 367,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 418,
  [SMALL_STATE(31)] = 426,
  [SMALL_STATE(32)] = 434,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 452,
  [SMALL_STATE(35)] = 459,
  [SMALL_STATE(36)] = 466,
  [SMALL_STATE(37)] = 473,
  [SMALL_STATE(38)] = 480,
  [SMALL_STATE(39)] = 487,
  [SMALL_STATE(40)] = 494,
  [SMALL_STATE(41)] = 501,
  [SMALL_STATE(42)] = 508,
  [SMALL_STATE(43)] = 515,
  [SMALL_STATE(44)] = 522,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(32),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(38),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processor_declaration, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_processor_declaration_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_processor_declaration_repeat1, 2), SHIFT_REPEAT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processor_declaration, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_repeat1, 2), SHIFT_REPEAT(40),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_declaration_repeat1, 2), SHIFT_REPEAT(39),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_declaration_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_declaration, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limited_type, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_declaration, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_declaration, 3),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
