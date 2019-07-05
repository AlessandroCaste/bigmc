/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_BGPARSER_HPP_INCLUDED
# define YY_YY_BGPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNKNOWN = 258,
    CONTROLS = 259,
    NAMES = 260,
    MARKER = 261,
    MODEL = 262,
    RULE = 263,
    SEMI = 264,
    ARROW = 265,
    PAR = 266,
    PREF = 267,
    COMMA = 268,
    LSQ = 269,
    RSQ = 270,
    LPAR = 271,
    RPAR = 272,
    INNER = 273,
    OUTER = 274,
    DPAR = 275,
    UNLINKED = 276,
    ACTIVE = 277,
    PASSIVE = 278,
    COLON = 279,
    HOLE = 280,
    IDENT = 281,
    NUM = 282,
    LAND = 283,
    LOR = 284,
    LNOT = 285,
    FORALL = 286,
    EXISTS = 287,
    NIL = 288,
    LEQ = 289,
    GEQ = 290,
    LT = 291,
    GT = 292,
    EQ = 293,
    NEQ = 294,
    DOLLAR = 295,
    VARIABLE = 296,
    BTRUE = 297,
    BFALSE = 298,
    IF = 299,
    THEN = 300,
    ELSE = 301,
    ASSIGNMENT = 302
  };
#endif
/* Tokens.  */
#define UNKNOWN 258
#define CONTROLS 259
#define NAMES 260
#define MARKER 261
#define MODEL 262
#define RULE 263
#define SEMI 264
#define ARROW 265
#define PAR 266
#define PREF 267
#define COMMA 268
#define LSQ 269
#define RSQ 270
#define LPAR 271
#define RPAR 272
#define INNER 273
#define OUTER 274
#define DPAR 275
#define UNLINKED 276
#define ACTIVE 277
#define PASSIVE 278
#define COLON 279
#define HOLE 280
#define IDENT 281
#define NUM 282
#define LAND 283
#define LOR 284
#define LNOT 285
#define FORALL 286
#define EXISTS 287
#define NIL 288
#define LEQ 289
#define GEQ 290
#define LT 291
#define GT 292
#define EQ 293
#define NEQ 294
#define DOLLAR 295
#define VARIABLE 296
#define BTRUE 297
#define BFALSE 298
#define IF 299
#define THEN 300
#define ELSE 301
#define ASSIGNMENT 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "bgparser.ypp" /* yacc.c:1921  */

  parsenode *node;  /* For the expressions. Since it is a pointer, no problem. */
  int       value;  /* For the lexical analyser. NUMBER tokens */
  char      *ident;  /* For the lexical analyser. IDENT tokens */

#line 158 "bgparser.hpp" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_BGPARSER_HPP_INCLUDED  */
