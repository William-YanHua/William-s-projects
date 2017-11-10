%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2017��10��9��
****************************************************************************/

#include "mylexer.h"
#include "myparser.h"
#include <string>
#include <cstdio>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <map>
#include <cmath>
using namespace std;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition

{

	// place any extra class members here
	
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}
// attribute type
%union {
    double dval;
    int ival;
}
%token <dval> FLOAT
%token <ival> INTEGER
%include {
	// place any extra class members here
}

// place any declarations here

%token INT  CHAR 
%token STRING  DOUBLE  FLOAT  VOID  IF 
%token ELSE  WHILE  FOR  DO  BOOL 
%token PLUS  MINUS  MUL  DIV  POW 
%token EXP  EQU  SADD  SSUB  OR  
%token AND  NOT  ASSIGN  LBRACE  RBRACE 
%token LBRACKET  RBRACKET  COLON  POINTER 
%token REF  QUOTE  COMMA  SEMICOLON  LESS 
%token MORE  OUTPUT  INPUT  DOT  LSQBRACKET 
%token RSQBRACKET  LITERAL  ID  INTEGER 
%token ENDFLAG
%left PLUS MINUS
%left MUL DIV
%nonassoc UMINUS
%type 
%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)
start: start expr ENDFLAG {printf("end!%f\n",$2);}
     | start ENDFLAG 
     |
     ;
expr: expr1 PLUS expr1  { $$.dval = $1.dval + $3.dval; }      //�ӷ�����
	| expr1 MINUS expr1 { $$.dval = $1.dval - $3.dval; }      //��������
	| expr1
	;
expr1: expr1 MUL expr1  { $$.dval = $1.dval* $3.dval; }      //�˷�����
	 | expr1 DIV expr1  { $$.dval = $1.dval / $3.dval; }      //��������
 	 | LBRACKET expr RBRACKET { $$.dval = $2.dval; }     //�������ŵ�����
 	 | MINUS expr1 %prec UMINUS { $$.ival = -$2.ival; }  //����
 	 | SSUB expr1 { $$.dval = $2.dval - 1; }             //�Լ�����  ��û�ж� ++a �� a++������
 	 | SADD expr1 { $$.dval = $2.dval + 1; }             //��������  ͬ��
 	 | expr1 POW expr1 { $$.dval = pow($1.dval,$3.dval); }    //�˷�����
 	 | INTEGER  { $$.ival = $1; }               //�����ֵ
 	 | FLOAT { $$.dval = $1; }
	 ;
%%

/////////////////////////////////////////////////////////////////////////////
// programs section
int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)){
			n = parser.yyparse();
		}
	}
	return n;
}
