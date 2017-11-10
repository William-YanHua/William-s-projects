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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 11/10/17
* Time: 16:23:45
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 29 ".\\myparser.y"


	// place any extra class members here
	

#line 71 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#ifndef YYSTYPE
union tagYYSTYPE {
#line 45 ".\\myparser.y"

    double dval;
    int ival;

#line 85 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

#define FLOAT 257
#define INTEGER 258
#line 51 ".\\myparser.y"

	// place any extra class members here

#line 97 "myparser.h"
#define INT 259
#define CHAR 260
#define STRING 261
#define DOUBLE 262
#define VOID 263
#define IF 264
#define ELSE 265
#define WHILE 266
#define FOR 267
#define DO 268
#define BOOL 269
#define PLUS 270
#define MINUS 271
#define MUL 272
#define DIV 273
#define POW 274
#define EXP 275
#define EQU 276
#define SADD 277
#define SSUB 278
#define OR 279
#define AND 280
#define NOT 281
#define ASSIGN 282
#define LBRACE 283
#define RBRACE 284
#define LBRACKET 285
#define RBRACKET 286
#define COLON 287
#define POINTER 288
#define REF 289
#define QUOTE 290
#define COMMA 291
#define SEMICOLON 292
#define LESS 293
#define MORE 294
#define OUTPUT 295
#define INPUT 296
#define DOT 297
#define LSQBRACKET 298
#define RSQBRACKET 299
#define LITERAL 300
#define ID 301
#define ENDFLAG 302
#define UMINUS 303
#endif
