%{
	#include "y.tab.h"
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	void yyerror(const char *);
	FILE* fp;
	int scopeno=0;
	int value=0;
	char new=65;
	
	
%} 
%option yylineno

%%


"main"		{ fprintf(fp,"%s \n",yytext); return MAIN;   }
"int"		{ fprintf(fp,"%s \n",yytext); return INT;   }
"char"  	{ fprintf(fp,"%s \n",yytext); return CHAR;   }
"void"		{ fprintf(fp,"%s \n",yytext); return VOID;   }
"#"		{ fprintf(fp,"%s \n",yytext); return HASH;   }
"include"	{ fprintf(fp,"%s \n",yytext); return INCLUDE;   }
"<stdio.h>"	{ fprintf(fp,"%s \n",yytext); return LIBRARY;   }
"while"		{ fprintf(fp,"%s \n",yytext); return WHILE;   }
"do"		{ fprintf(fp,"%s \n",yytext); return DO;   }
"for"		{ fprintf(fp,"%s \n",yytext); return FOR;   }
"if"		{ fprintf(fp,"%s \n",yytext); return IF;   }
"else"		{ fprintf(fp,"%s \n",yytext); return ELSE;   }
"continue"	{ fprintf(fp,"%s \n",yytext); return CONT;   }
"break"		{ fprintf(fp,"%s \n",yytext); return BRK;   }
"return"	{ fprintf(fp,"%s \n",yytext); return RTRN;   }
[0-9]+	{fprintf(fp,"%s \n",yytext); value=atoi(yytext);return NUM;}
[a-zA-Z][a-zA-Z0-9]* {fprintf(fp,"%s \n",yytext); yylval.str=strdup(yytext);return ID;}   
"="		{ fprintf(fp,"%s \n",yytext); return EQUAL;   }
";"		{ fprintf(fp,"%s \n",yytext); return SEMICOLON;   }
":"		{ fprintf(fp,"%s \n",yytext); return COLON;   }
"{"  		{ fprintf(fp,"%s \n",yytext);  if(scopeno==0){ new++ ;} scopeno++;return SO;   }
"}"  		{ fprintf(fp,"%s \n",yytext); scopeno--; return SC;   }
"(" 		{ fprintf(fp,"%s \n",yytext); return OB;   }
")"		{ fprintf(fp,"%s \n",yytext); return CB;   }
","		{ fprintf(fp,"%s \n",yytext); return COMMA;   }
"+="		{ fprintf(fp,"%s \n",yytext); return ADDRIGHT;   }
"++"		{ fprintf(fp,"%s \n",yytext); return ADDPREFIX;   }
"+"		{ fprintf(fp,"%s \n",yytext); return ADD;   }
"-="		{ fprintf(fp,"%s \n",yytext); return SUBRIGHT;   }
"--"		{ fprintf(fp,"%s \n",yytext); return SUBPREFIX;   }
"-"		{ fprintf(fp,"%s \n",yytext); return SUB;   }
"*="		{ fprintf(fp,"%s \n",yytext); return MULRIGHT;   }
"*"		{ fprintf(fp,"%s \n",yytext); return MUL;   }
"/="		{ fprintf(fp,"%s \n",yytext); return DIVRIGHT;   }
"/"		{ fprintf(fp,"%s \n",yytext); return DIV;   }
"<"		{ fprintf(fp,"%s \n",yytext); return LT;   }
">"		{ fprintf(fp,"%s \n",yytext); return GT;   }
">="		{ fprintf(fp,"%s \n",yytext); return GTE;   }
"<="		{ fprintf(fp,"%s \n",yytext); return LTE;   }
"!="		{ fprintf(fp,"%s \n",yytext); return NE;   }
"=="		{ fprintf(fp,"%s \n",yytext); return EQ;   }
"&&" 		{ fprintf(fp,"%s \n",yytext); return BINARYAND;   }
"||"        	{ fprintf(fp,"%s \n",yytext); return BINARYOR;   }
" "		;
\t 		;
\n		;
"["		{ fprintf(fp,"%s \n",yytext); return '[';   }
"]" 		{ fprintf(fp,"%s \n",yytext); return ']';   }

. 		{ fprintf(fp,"%s \n",yytext); return *yytext;   }


%%

int yywrap(void)
{
	
	return 1;
}

