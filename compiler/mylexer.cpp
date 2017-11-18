/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 51 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 11/18/17
* Time: 22:12:21
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2017年10月9日
****************************************************************************/
#include "myparser.h"
#include <cstring>
#include <string>
#include <iostream>
#include <stdio.h>
#include<sstream>
using namespace std;

#line 54 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

#line 23 ".\\mylexer.l"

struct TokenAndLexme;
void addToken(char*token,char*lexme);
int getIndex(char*lexme);
void printToken();
int id_state = -1;
struct TokenAndLexme{
    char * token;
    char * lexme;
    int index;
    TokenAndLexme*next;
};

#line 82 "mylexer.cpp"
/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 42 ".\\mylexer.l"

	// place any extra cleanup code here

#line 93 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 56 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 171 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 61 ".\\mylexer.l"
 addToken("BOOL",yytext);  yylval.sval = yytext; return BOOL;
#line 178 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 62 ".\\mylexer.l"
 addToken("INT",yytext); yylval.sval = yytext;  return INT;
#line 185 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 63 ".\\mylexer.l"
 addToken("CHAR",yytext); yylval.sval = yytext; return CHAR;
#line 192 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 64 ".\\mylexer.l"
 addToken("STRING",yytext); yylval.sval = yytext; return STRING;
#line 199 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 66 ".\\mylexer.l"
addToken("FLOAT",yytext);yylval.sval = yytext; return FLOAT;
#line 206 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 67 ".\\mylexer.l"
addToken("VOID",yytext); yylval.sval = yytext; return VOID;
#line 213 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 68 ".\\mylexer.l"
 addToken("IF",yytext);  yylval.sval = yytext; return IF;
#line 220 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 69 ".\\mylexer.l"
 addToken("ELSE",yytext);  yylval.sval = yytext; return ELSE;
#line 227 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 70 ".\\mylexer.l"
 addToken("WHILE",yytext);  yylval.sval = yytext; return WHILE;
#line 234 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 71 ".\\mylexer.l"
 addToken("FOR",yytext);  yylval.sval = yytext; return FOR;
#line 241 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 72 ".\\mylexer.l"
 addToken("DO",yytext);  yylval.sval = yytext; return DO;
#line 248 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 73 ".\\mylexer.l"
 addToken("RETURN",yytext);  yylval.sval = yytext; return RETURN; 
#line 255 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 75 ".\\mylexer.l"
 addToken("CHAR_VAL",yytext); yylval.sval = yytext; return CHAR_VAL; 
#line 262 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 76 ".\\mylexer.l"
 addToken("PLUS",yytext);  yylval.sval = yytext; return PLUS;
#line 269 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 77 ".\\mylexer.l"
 addToken("MINUS",yytext);  yylval.sval = yytext; return MINUS;
#line 276 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 78 ".\\mylexer.l"
 addToken("MUL",yytext);  yylval.sval = yytext; return MUL;
#line 283 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 79 ".\\mylexer.l"
 addToken("DIV",yytext);  yylval.sval = yytext; return DIV;
#line 290 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 80 ".\\mylexer.l"
 addToken("POW",yytext);  yylval.sval = yytext; return POW;
#line 297 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 81 ".\\mylexer.l"
 addToken("MORE",yytext); yylval.sval = yytext; return MORE; 
#line 304 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 82 ".\\mylexer.l"
 addToken("LESS",yytext); yylval.sval = yytext;  return LESS; 
#line 311 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 83 ".\\mylexer.l"
 addToken("MORE_EQU",yytext); yylval.sval = yytext; return MORE_EQU; 
#line 318 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 84 ".\\mylexer.l"
 addToken("LESS_EQO",yytext); yylval.sval = yytext; return LESS_EQU; 
#line 325 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 85 ".\\mylexer.l"
 addToken("EXP",yytext); yylval.sval = yytext; return EXP;
#line 332 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 86 ".\\mylexer.l"
 addToken("EQU",yytext); yylval.sval = yytext; return EQU;
#line 339 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 87 ".\\mylexer.l"
 addToken("SADD",yytext); yylval.sval = yytext;  return SADD;
#line 346 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 88 ".\\mylexer.l"
 addToken("SSUB",yytext); yylval.sval = yytext; return SSUB;
#line 353 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 89 ".\\mylexer.l"
 addToken("PLUS_AND",yytext); yylval.sval = yytext; return PLUS_AND; 
#line 360 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 90 ".\\mylexer.l"
 addToken("MINUS_AND",yytext); yylval.sval = yytext; return MINUS_AND; 
#line 367 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 91 ".\\mylexer.l"
 addToken("OR",yytext); yylval.sval = yytext; return OR;
#line 374 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 92 ".\\mylexer.l"
 addToken("AND",yytext); yylval.sval = yytext; return AND;
#line 381 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 93 ".\\mylexer.l"
 addToken("NOT",yytext); yylval.sval = yytext; return NOT;
#line 388 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 94 ".\\mylexer.l"
 addToken("ASSIGN",yytext); yylval.sval = yytext; return ASSIGN;
#line 395 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 95 ".\\mylexer.l"
 addToken("LBRACE",yytext);  yylval.sval = yytext; return LBRACE;
#line 402 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 96 ".\\mylexer.l"
 addToken("RBRACE",yytext);  yylval.sval = yytext;  return RBRACE;
#line 409 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 97 ".\\mylexer.l"
 addToken("LBRACKET",yytext);  yylval.sval = yytext;   return LBRACKET;
#line 416 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 98 ".\\mylexer.l"
 addToken("RBRACKET",yytext);  yylval.sval = yytext;   return RBRACKET;
#line 423 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 99 ".\\mylexer.l"
 addToken("COLON",yytext);  yylval.sval = yytext; return COLON;
#line 430 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 100 ".\\mylexer.l"
 addToken("POINTER",yytext);  yylval.sval = yytext; return POINTER;
#line 437 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 101 ".\\mylexer.l"
 addToken("REF",yytext);  yylval.sval = yytext; return REF;
#line 444 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 102 ".\\mylexer.l"
 addToken("QUOTE",yytext);  yylval.sval = yytext; return QUOTE;
#line 451 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 103 ".\\mylexer.l"
 addToken("COMMA",yytext); yylval.sval = ","; return COMMA;
#line 458 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 104 ".\\mylexer.l"
 addToken("SEMICOLON",yytext);  yylval.sval = yytext; return SEMICOLON;
#line 465 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 105 ".\\mylexer.l"
;
#line 472 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 108 ".\\mylexer.l"
 addToken("LITERAL",yytext); 
#line 479 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 109 ".\\mylexer.l"

               addToken("INTEGER",yytext);
               yylval.ival = atoi(yytext);
               return INTEGER;
           
#line 490 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 114 ".\\mylexer.l"
 
               addToken("FLOAT_VAL",yytext); 
               yylval.dval = atof(yytext); 
               return FLOAT_VAL;
          
#line 501 "mylexer.cpp"
		}
		break;
#line 119 ".\\mylexer.l"
          
#line 506 "mylexer.cpp"
	case 47:
		{
#line 122 ".\\mylexer.l"
 addToken("ID",yytext); yylval.sval = new char();  yylval.sval = yytext; return ID;
#line 511 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 124 ".\\mylexer.l"
return ENDFLAG;
#line 518 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 251;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 43, 12 },
		{ 3, 3 },
		{ 48, 16 },
		{ 45, 14 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 51, 21 },
		{ 52, 24 },
		{ 53, 25 },
		{ 58, 29 },
		{ 44, 12 },
		{ 46, 14 },
		{ 47, 14 },
		{ 3, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 3, 3 },
		{ 59, 29 },
		{ 54, 26 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 0, 1 },
		{ 15, 1 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 56, 28 },
		{ 55, 27 },
		{ 42, 11 },
		{ 57, 28 },
		{ 39, 7 },
		{ 60, 30 },
		{ 61, 31 },
		{ 41, 8 },
		{ 41, 8 },
		{ 62, 32 },
		{ 63, 33 },
		{ 41, 8 },
		{ 64, 35 },
		{ 38, 37 },
		{ 38, 40 },
		{ 65, 41 },
		{ 49, 19 },
		{ 66, 52 },
		{ 67, 53 },
		{ 68, 54 },
		{ 69, 55 },
		{ 70, 56 },
		{ 71, 57 },
		{ 72, 59 },
		{ 73, 60 },
		{ 74, 61 },
		{ 75, 62 },
		{ 76, 63 },
		{ 77, 66 },
		{ 78, 67 },
		{ 79, 68 },
		{ 23, 1 },
		{ 80, 69 },
		{ 81, 70 },
		{ 82, 73 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 83, 74 },
		{ 84, 75 },
		{ 29, 1 },
		{ 85, 76 },
		{ 86, 79 },
		{ 87, 81 },
		{ 88, 82 },
		{ 89, 83 },
		{ 90, 85 },
		{ 87, 86 },
		{ 91, 88 },
		{ 30, 1 },
		{ 31, 1 },
		{ 92, 89 },
		{ 50, 20 },
		{ 32, 1 },
		{ 33, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 34, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 41, 8 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 22, 92 },
		{ 0, 0 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 },
		{ 22, 92 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 16, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -5, 43 },
		{ 0, 0, 48 },
		{ 0, 0, 31 },
		{ 37, 0, 40 },
		{ 0, 21, 39 },
		{ 40, 53, 40 },
		{ 0, 0, 35 },
		{ 0, 0, 36 },
		{ 0, 15, 16 },
		{ 0, -40, 14 },
		{ 0, 0, 41 },
		{ 0, -39, 15 },
		{ 0, 0, 17 },
		{ 92, -41, 45 },
		{ 0, 0, 37 },
		{ 0, 0, 42 },
		{ 0, 10, 20 },
		{ 0, 48, 32 },
		{ 0, -44, 19 },
		{ 92, 0, 47 },
		{ 0, 0, 18 },
		{ 92, -93, 47 },
		{ 92, -85, 47 },
		{ 92, -82, 47 },
		{ 92, -52, 47 },
		{ 92, -53, 47 },
		{ 92, -82, 47 },
		{ 92, -41, 47 },
		{ 92, -55, 47 },
		{ 92, -47, 47 },
		{ 92, -39, 47 },
		{ 0, 0, 33 },
		{ 0, -57, 0 },
		{ 0, 0, 34 },
		{ -37, 34, 0 },
		{ 0, 0, 44 },
		{ 0, 0, 30 },
		{ -40, 30, 0 },
		{ -40, 31, 0 },
		{ 0, 0, 23 },
		{ 0, 0, 25 },
		{ 0, 0, 27 },
		{ 0, 0, 26 },
		{ 0, 0, 28 },
		{ 0, 0, 38 },
		{ 0, -8, 46 },
		{ 0, 0, 22 },
		{ 0, 0, 24 },
		{ 0, 0, 21 },
		{ 92, -39, 47 },
		{ 92, -24, 47 },
		{ 92, -43, 11 },
		{ 92, -40, 47 },
		{ 92, -35, 47 },
		{ 92, -37, 47 },
		{ 92, 0, 7 },
		{ 92, -38, 47 },
		{ 92, -37, 47 },
		{ 92, -34, 47 },
		{ 92, -24, 47 },
		{ 92, -23, 47 },
		{ 0, 0, 29 },
		{ 0, 0, 13 },
		{ 92, -25, 47 },
		{ 92, -30, 47 },
		{ 92, -13, 47 },
		{ 92, -14, 47 },
		{ 92, -9, 47 },
		{ 92, 0, 10 },
		{ 92, 0, 2 },
		{ 92, -28, 47 },
		{ 92, -10, 47 },
		{ 92, -4, 47 },
		{ 92, -10, 47 },
		{ 92, 0, 1 },
		{ 92, 0, 3 },
		{ 92, -9, 47 },
		{ 92, 0, 8 },
		{ 92, -16, 47 },
		{ 92, -13, 47 },
		{ 92, -8, 47 },
		{ 92, 0, 6 },
		{ 92, 2, 47 },
		{ 92, 3, 47 },
		{ 92, 0, 5 },
		{ 92, -5, 47 },
		{ 92, 5, 47 },
		{ 92, 0, 9 },
		{ 92, 0, 12 },
		{ 0, 128, 4 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 126 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section
//定义符号表的结构

TokenAndLexme * token_head = new TokenAndLexme();
//往符号表中添加符号
void addToken(char* token, char* lexme){
    int index = getIndex(lexme);
    if(index == -1 && token == "ID"){
        index = ++id_state;
    }
    TokenAndLexme*temp_token = new TokenAndLexme();
    temp_token->token = new char[200];
    temp_token->lexme = new char[200];
    strcpy_s(temp_token->token,200,token);
    strcpy_s(temp_token->lexme,200,lexme);
    temp_token->index = index;
    temp_token->next = token_head;
    token_head = temp_token;
    //printf("%-10s\t%-20s\t",temp_token->token,temp_token->lexme);
    //if(index != -1){
    //    printf("%-10d\n",index);
    //}
    //else{
	//    printf("\n");
    //}
}
//获取该词素在符号表中的index
int getIndex(char*lexme){
    TokenAndLexme*current_token = token_head;
    while(current_token->next!=NULL){
        if( strcmp(current_token->lexme,lexme) == 0 ){
            return current_token->index;
        }
        current_token = current_token->next;
      }
    return -1;
}
//打印符号表的内容
void printToken(){
    TokenAndLexme* current_token = token_head;
    while(current_token->next!= NULL){
        printf("%-10s\t%-20s\t",current_token->token,current_token->lexme);
        if(current_token->index != -1){
            printf("%-10d\n",current_token->index);
        }
        else{
            printf("\n");
        }
        current_token = current_token->next;
    }
}
