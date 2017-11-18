%{
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
%}
/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer
// class definition

%{
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
%}
// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here

integer [1-9]?[0-9]+
number  [1-9]?[0-9]+\.?[0-9]*
identifier (_|[a-zA-Z])?[A-Za-z_0-9]+
literal \"[^\"]*?\"|'[^']*?'
%%

/////////////////////////////////////////////////////////////////////////////
// rules section
%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}
//关键字
"bool"  { addToken("BOOL",yytext);  yylval.sval = yytext; return BOOL;}
"int"  { addToken("INT",yytext); yylval.sval = yytext;  return INT;}
"char"  { addToken("CHAR",yytext); yylval.sval = yytext; return CHAR;}
"string"  { addToken("STRING",yytext); yylval.sval = yytext; return STRING;}
"double"
|"float"  {addToken("FLOAT",yytext);yylval.sval = yytext; return FLOAT;}
"void"  {addToken("VOID",yytext); yylval.sval = yytext; return VOID;}
"if"  { addToken("IF",yytext);  yylval.sval = yytext; return IF;}
"else"  { addToken("ELSE",yytext);  yylval.sval = yytext; return ELSE;}
"while"  { addToken("WHILE",yytext);  yylval.sval = yytext; return WHILE;}
for  { addToken("FOR",yytext);  yylval.sval = yytext; return FOR;}
"do"  { addToken("DO",yytext);  yylval.sval = yytext; return DO;}
"return" { addToken("RETURN",yytext);  yylval.sval = yytext; return RETURN; }
//符号
'[a-zA-Z\r\n\t]' { addToken("CHAR_VAL",yytext); yylval.sval = yytext; return CHAR_VAL; }
"+"  { addToken("PLUS",yytext);  yylval.sval = yytext; return PLUS;}
"-"  { addToken("MINUS",yytext);  yylval.sval = yytext; return MINUS;}
"*"  { addToken("MUL",yytext);  yylval.sval = yytext; return MUL;}
"/"  { addToken("DIV",yytext);  yylval.sval = yytext; return DIV;}
"^"  { addToken("POW",yytext);  yylval.sval = yytext; return POW;}
">"  { addToken("MORE",yytext); yylval.sval = yytext; return MORE; }
"<"  { addToken("LESS",yytext); yylval.sval = yytext;  return LESS; }
">=" { addToken("MORE_EQU",yytext); yylval.sval = yytext; return MORE_EQU; }
"<=" { addToken("LESS_EQO",yytext); yylval.sval = yytext; return LESS_EQU; }
"**" { addToken("EXP",yytext); yylval.sval = yytext; return EXP;}
"==" { addToken("EQU",yytext); yylval.sval = yytext; return EQU;}
"++" { addToken("SADD",yytext); yylval.sval = yytext;  return SADD;}
"--" { addToken("SSUB",yytext); yylval.sval = yytext; return SSUB;}
"+=" { addToken("PLUS_AND",yytext); yylval.sval = yytext; return PLUS_AND; }
"-=" { addToken("MINUS_AND",yytext); yylval.sval = yytext; return MINUS_AND; }
"||" { addToken("OR",yytext); yylval.sval = yytext; return OR;}
"&&" { addToken("AND",yytext); yylval.sval = yytext; return AND;}
"!"  { addToken("NOT",yytext); yylval.sval = yytext; return NOT;}
"="  { addToken("ASSIGN",yytext); yylval.sval = yytext; return ASSIGN;}
"{"  { addToken("LBRACE",yytext);  yylval.sval = yytext; return LBRACE;}
"}"  { addToken("RBRACE",yytext);  yylval.sval = yytext;  return RBRACE;}
"("  { addToken("LBRACKET",yytext);  yylval.sval = yytext;   return LBRACKET;}
")"  { addToken("RBRACKET",yytext);  yylval.sval = yytext;   return RBRACKET;}
":"  { addToken("COLON",yytext);  yylval.sval = yytext; return COLON;}
"->"  { addToken("POINTER",yytext);  yylval.sval = yytext; return POINTER;}
"&"  { addToken("REF",yytext);  yylval.sval = yytext; return REF;}
\'|\"  { addToken("QUOTE",yytext);  yylval.sval = yytext; return QUOTE;}
","  { addToken("COMMA",yytext); yylval.sval = ","; return COMMA;}
";"  { addToken("SEMICOLON",yytext);  yylval.sval = yytext; return SEMICOLON;}
[\t ]+  ;

//字符串、数字、其余标识符
{literal}  { addToken("LITERAL",yytext); }
{integer}  {
               addToken("INTEGER",yytext);
               yylval.ival = atoi(yytext);
               return INTEGER;
           }
{number}  { 
               addToken("FLOAT_VAL",yytext); 
               yylval.dval = atof(yytext); 
               return FLOAT_VAL;
          }
          
//{number}((E|e)[+-]?{number})?  { addToken("DIGIT",yytext); yylval.dval = atoi(yytext); return FLOAT;}

{identifier}  { addToken("ID",yytext); yylval.sval = new char();  yylval.sval = yytext; return ID;}
//结尾
\n  {return ENDFLAG;}
// place your Lex rules here
%%

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