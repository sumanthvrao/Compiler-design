%{
#include<stdio.h>
#include<string.h>
int scount=0, mcount=0;
%}
star			"*"
slash			"/"
start_single		{slash}{slash}
start_mutiple		{slash}{star}
end_single		"\n"
end_multiple		{star}{slash}

%x	A	B	C	D

%%
{start_single}			{yymore(); BEGIN(A);}
{start_mutiple}			{yymore(); BEGIN(B);}
<A>.				{yymore(); BEGIN(A);}
<A>\n				{fprintf(yyout, "\n"); scount++; BEGIN(0);}
<B>.				{yymore(); BEGIN(B);}
<B>[' '|\t|\n]			{yymore(); BEGIN(B);}
<B>{end_multiple}		{fprintf(yyout, ""); mcount++; BEGIN(0);}

%%

int main()
{
	yyin=fopen("input.c","r");
	yyout=fopen("out.c","w");
	yylex();
	fclose(yyout);
	return 0;
}
