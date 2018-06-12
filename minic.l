%{
/* lex source for Mini C */
#include "minic.tab.h"

char* toString(char* temp);
void yyerror(char *);

%}

letter	[a-zA-Z_]
digit	[0-9]

%%

"const"		return TCONST;
"else"		return TELSE;
"if"		return TIF;
"int"		return TINT;
"return"	return TRETURN;
"void"		return TVOID;
"while"		return TWHILE;
"=="		return TEQ;
"!="		return TNEQ;
"<="		return TLE;
">="		return TGE;
"&&"		return TAND;
"||"		return TOR;
"++"		return TINC;
"--"		return TDEC;
"+="		return TADDASSIGN;
"-="		return TSUBASSIGN;
"*="		return TMULASSIGN;
"/="		return TDIVASSIGN;
"%="		return TMODASSIGN;
"for"		return TFOR;
"switch"	return TSWITCH;
"default"	return TDEFAULT;
"case"		return TCASE;
"continue"	return TCONTINUE;
"break"		return TBREAK;

{letter}({letter}|{digit})*		{
		yylval.string = toString(yytext);		/* 일치 패턴의 택스트가 이변수에 저장*/
		return TIDENT;			/* token <sIndex> VARIABLE*/
}

[1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]*)? {
	yylval.string = toString(yytext); /* 변수를 저장*/
	return TNUMBER;
}

"/*"([^*]|\*+[^*/])*\**"*/"	;
"//".*				;
[ \t\n]				;
[\r\n]				;
.				return (yytext[0]);
%%

int yywrap()
{
	return 1;
}
