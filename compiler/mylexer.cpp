/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 43 of your 30 day trial period.
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
* Date: 11/10/17
* Time: 16:18:17
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
 addToken("BOOL",yytext); return BOOL;
#line 178 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 62 ".\\mylexer.l"
 addToken("INT",yytext); return INTEGER;
#line 185 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 63 ".\\mylexer.l"
 addToken("CHAR",yytext); return CHAR;
#line 192 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 64 ".\\mylexer.l"
 addToken("STRING",yytext); return STRING;
#line 199 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 66 ".\\mylexer.l"
addToken("FLOAT",yytext);return FLOAT;
#line 206 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 67 ".\\mylexer.l"
addToken("VOID",yytext); return VOID;
#line 213 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 68 ".\\mylexer.l"
 addToken("IF",yytext); return IF;
#line 220 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 69 ".\\mylexer.l"
 addToken("ELSE",yytext); return ELSE;
#line 227 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 70 ".\\mylexer.l"
 addToken("WHILE",yytext); return WHILE;
#line 234 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 71 ".\\mylexer.l"
 addToken("FOR",yytext); return FOR;
#line 241 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 72 ".\\mylexer.l"
 addToken("DO",yytext); return DO;
#line 248 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 74 ".\\mylexer.l"
 addToken("PLUS",yytext); return PLUS;
#line 255 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 75 ".\\mylexer.l"
 addToken("MINUS",yytext); return MINUS;
#line 262 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 76 ".\\mylexer.l"
 addToken("MUL",yytext); return MUL;
#line 269 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 77 ".\\mylexer.l"
 addToken("DIV",yytext); return DIV;
#line 276 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 78 ".\\mylexer.l"
 addToken("POW",yytext); return POW;
#line 283 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 79 ".\\mylexer.l"
 addToken("EXP",yytext); 
#line 290 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 80 ".\\mylexer.l"
 addToken("EQU",yytext); return EQU;
#line 297 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 81 ".\\mylexer.l"
 addToken("SADD",yytext); return SADD;
#line 304 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 82 ".\\mylexer.l"
 addToken("SSUB",yytext); return SSUB;
#line 311 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 83 ".\\mylexer.l"
 addToken("OR",yytext); return OR;
#line 318 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 84 ".\\mylexer.l"
 addToken("AND",yytext); return AND;
#line 325 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 85 ".\\mylexer.l"
 addToken("NOT",yytext); return NOT;
#line 332 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 86 ".\\mylexer.l"
 addToken("ASSIGN",yytext); return ASSIGN;
#line 339 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 87 ".\\mylexer.l"
 addToken("LBRACE",yytext);return LBRACE;
#line 346 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 88 ".\\mylexer.l"
 addToken("RBRACE",yytext); return RBRACE;
#line 353 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 89 ".\\mylexer.l"
 addToken("LBRACKET",yytext); return LBRACKET;
#line 360 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 90 ".\\mylexer.l"
 addToken("RBRACKET",yytext); return RBRACKET;
#line 367 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 91 ".\\mylexer.l"
 addToken("COLON",yytext); return COLON;
#line 374 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 92 ".\\mylexer.l"
 addToken("POINTER",yytext); return POINTER;
#line 381 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 93 ".\\mylexer.l"
 addToken("REF",yytext); return REF;
#line 388 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 94 ".\\mylexer.l"
 addToken("QUOTE",yytext); return QUOTE;
#line 395 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 95 ".\\mylexer.l"
 addToken("COMMA",yytext); return COMMA;
#line 402 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 96 ".\\mylexer.l"
 addToken("SEMICOLON",yytext); return SEMICOLON;
#line 409 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 97 ".\\mylexer.l"
;
#line 416 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 99 ".\\mylexer.l"
 addToken("LITERAL",yytext); 
#line 423 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 100 ".\\mylexer.l"

               addToken("INTEGER",yytext);
               stringstream ss;
               ss<<yytext;
               int sum;
               ss>>sum;
               yylval.ival = sum;
               return INTEGER;
           
#line 438 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 109 ".\\mylexer.l"
addToken("FLOAT",yytext); yylval.dval = atof(yytext); return FLOAT;
#line 445 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 110 ".\\mylexer.l"
 addToken("DIGIT",yytext); yylval.dval = atoi(yytext); return FLOAT;
#line 452 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 111 ".\\mylexer.l"
 addToken("ID",yytext); return ID;
#line 459 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 113 ".\\mylexer.l"
return ENDFLAG;
#line 466 "mylexer.cpp"
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

	yytransitionmax = 205;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 40, 14 },
		{ 42, 16 },
		{ 3, 3 },
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
		{ 49, 26 },
		{ 36, 7 },
		{ 53, 28 },
		{ 50, 26 },
		{ 41, 14 },
		{ 51, 27 },
		{ 54, 29 },
		{ 55, 30 },
		{ 3, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 43, 16 },
		{ 3, 3 },
		{ 52, 27 },
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
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 17, 1 },
		{ 18, 1 },
		{ 58, 43 },
		{ 19, 1 },
		{ 58, 43 },
		{ 0, 43 },
		{ 58, 57 },
		{ 56, 32 },
		{ 58, 57 },
		{ 43, 16 },
		{ 71, 70 },
		{ 20, 1 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 35, 34 },
		{ 35, 37 },
		{ 38, 11 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 44, 19 },
		{ 21, 1 },
		{ 60, 45 },
		{ 61, 46 },
		{ 62, 47 },
		{ 22, 1 },
		{ 23, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 63, 48 },
		{ 57, 42 },
		{ 27, 1 },
		{ 64, 49 },
		{ 65, 50 },
		{ 66, 52 },
		{ 67, 53 },
		{ 68, 54 },
		{ 69, 55 },
		{ 45, 22 },
		{ 0, 58 },
		{ 46, 23 },
		{ 28, 1 },
		{ 73, 61 },
		{ 72, 60 },
		{ 29, 1 },
		{ 30, 1 },
		{ 74, 62 },
		{ 75, 63 },
		{ 76, 64 },
		{ 31, 1 },
		{ 32, 1 },
		{ 33, 1 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 57, 42 },
		{ 77, 67 },
		{ 78, 68 },
		{ 79, 69 },
		{ 47, 24 },
		{ 48, 25 },
		{ 80, 74 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 80, 76 },
		{ 81, 77 },
		{ 82, 79 },
		{ 83, 81 },
		{ 20, 83 },
		{ 39, 12 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 20, 83 },
		{ 71, 59 },
		{ 0, 0 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 16, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -4, 35 },
		{ 0, 0, 41 },
		{ 0, 0, 23 },
		{ 34, 0, 32 },
		{ 0, -21, 31 },
		{ 37, 0, 32 },
		{ 0, 0, 27 },
		{ 0, 0, 28 },
		{ 0, 32, 14 },
		{ 0, 123, 12 },
		{ 0, 0, 33 },
		{ 0, -42, 13 },
		{ 0, 0, 15 },
		{ 83, -42, 37 },
		{ 0, 0, 29 },
		{ 0, 0, 34 },
		{ 0, 24, 24 },
		{ 83, 0, 40 },
		{ 0, 0, 16 },
		{ 83, -7, 40 },
		{ 83, 2, 40 },
		{ 83, 21, 40 },
		{ 83, 25, 40 },
		{ 83, -92, 40 },
		{ 83, -81, 40 },
		{ 83, -98, 40 },
		{ 83, -89, 40 },
		{ 83, -81, 40 },
		{ 0, 0, 25 },
		{ 0, -67, 0 },
		{ 0, 0, 26 },
		{ -34, 38, 0 },
		{ 0, 0, 36 },
		{ 0, 0, 22 },
		{ -37, 34, 0 },
		{ 0, 0, 17 },
		{ 0, 0, 19 },
		{ 0, 0, 20 },
		{ 0, 0, 30 },
		{ 0, 27, 38 },
		{ 59, 9, 40 },
		{ 0, 0, 18 },
		{ 83, -24, 40 },
		{ 83, -9, 40 },
		{ 83, -28, 11 },
		{ 83, -20, 40 },
		{ 83, -13, 40 },
		{ 83, -15, 40 },
		{ 83, 0, 7 },
		{ 83, -16, 40 },
		{ 83, -13, 40 },
		{ 83, -3, 40 },
		{ 83, -2, 40 },
		{ 0, 0, 21 },
		{ 58, 13, 0 },
		{ 70, 59, 0 },
		{ 83, 147, 39 },
		{ 83, 1, 40 },
		{ 83, -6, 40 },
		{ 83, 4, 40 },
		{ 83, 12, 40 },
		{ 83, 17, 40 },
		{ 83, 0, 10 },
		{ 83, 0, 2 },
		{ 83, 24, 40 },
		{ 83, 30, 40 },
		{ 83, 23, 40 },
		{ 0, 14, 39 },
		{ 0, -8, 39 },
		{ 83, 0, 1 },
		{ 83, 0, 3 },
		{ 83, 33, 40 },
		{ 83, 0, 8 },
		{ 83, 45, 40 },
		{ 83, 52, 40 },
		{ 83, 0, 6 },
		{ 83, 62, 40 },
		{ 83, 0, 5 },
		{ 83, 61, 40 },
		{ 83, 0, 9 },
		{ 0, 70, 4 }
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
		0
	};
	yybackup = backup;
}
#line 115 ".\\mylexer.l"


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
    printf("%-10s\t%-20s\t",temp_token->token,temp_token->lexme);
    if(index != -1){
        printf("%-10d\n",index);
    }
    else{
	    printf("\n");
    }
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
