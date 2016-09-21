/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_MDT_FILE_LIB_OPT_LEX_N_YACC_MDT_FILE_TAB_HPP_INCLUDED
# define YY_MDT_FILE_LIB_OPT_LEX_N_YACC_MDT_FILE_TAB_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int mdt_filedebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MODEL = 258,
     MODEL_SOURCE = 259,
     INPUT = 260,
     OUTPUT = 261,
     INOUT = 262,
     INTERN = 263,
     PRIMITIVE = 264,
     INSTANCE = 265,
     NAME = 266
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 31 "src/mdt_file.y"

    char                 ychar[IntfNs::NAME_LEN];
    IntfNs::MdtPortType  yportType;
    IntfNs::MdtNames     *ynames;
    IntfNs::MdtPortToNet *yportToNet;


/* Line 2058 of yacc.c  */
#line 76 "lib/opt/lex_n_yacc/mdt_file.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE mdt_filelval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int mdt_fileparse (void *YYPARSE_PARAM);
#else
int mdt_fileparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int mdt_fileparse (void);
#else
int mdt_fileparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_MDT_FILE_LIB_OPT_LEX_N_YACC_MDT_FILE_TAB_HPP_INCLUDED  */
