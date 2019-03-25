/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
    SEMI = 259,
    ARROW = 260,
    PAR = 261,
    PREF = 262,
    COMMA = 263,
    LSQ = 264,
    RSQ = 265,
    LPAR = 266,
    RPAR = 267,
    INNER = 268,
    OUTER = 269,
    DPAR = 270,
    UNLINKED = 271,
    RULE = 272,
    ACTIVE = 273,
    PASSIVE = 274,
    COLON = 275,
    HOLE = 276,
    IDENT = 277,
    NUM = 278,
    CONTROL = 279,
    NAMES = 280,
    PROPERTY = 281,
    LAND = 282,
    LOR = 283,
    LNOT = 284,
    FORALL = 285,
    EXISTS = 286,
    NIL = 287,
    LEQ = 288,
    GEQ = 289,
    LT = 290,
    GT = 291,
    EQ = 292,
    NEQ = 293,
    DOLLAR = 294,
    VARIABLE = 295,
    BTRUE = 296,
    BFALSE = 297,
    IF = 298,
    THEN = 299,
    ELSE = 300,
    ASSIGNMENT = 301
  };
#endif
/* Tokens.  */
#define UNKNOWN 258
#define SEMI 259
#define ARROW 260
#define PAR 261
#define PREF 262
#define COMMA 263
#define LSQ 264
#define RSQ 265
#define LPAR 266
#define RPAR 267
#define INNER 268
#define OUTER 269
#define DPAR 270
#define UNLINKED 271
#define RULE 272
#define ACTIVE 273
#define PASSIVE 274
#define COLON 275
#define HOLE 276
#define IDENT 277
#define NUM 278
#define CONTROL 279
#define NAMES 280
#define PROPERTY 281
#define LAND 282
#define LOR 283
#define LNOT 284
#define FORALL 285
#define EXISTS 286
#define NIL 287
#define LEQ 288
#define GEQ 289
#define LT 290
#define GT 291
#define EQ 292
#define NEQ 293
#define DOLLAR 294
#define VARIABLE 295
#define BTRUE 296
#define BFALSE 297
#define IF 298
#define THEN 299
#define ELSE 300
#define ASSIGNMENT 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "bgparser.ypp" /* yacc.c:1909  */

  parsenode *node;  /* For the expressions. Since it is a pointer, no problem. */
  int       value;  /* For the lexical analyser. NUMBER tokens */
  char      *ident;  /* For the lexical analyser. IDENT tokens */

#line 152 "bgparser.hpp" /* yacc.c:1909  */
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
