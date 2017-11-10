#pragma once
#include<iostream>
#include<vector>
struct TokenAndLexme {
	char * token;
	char * lexme;
	int index;
	TokenAndLexme();
};
class Token{
	vector<TokenAndLexme> symbolTable;
public:
	int getTokenIndex(char*lexme);
	int getSize();
	void addToken(char*token, char*lexme, int index);
}token;