%{
#include"syntxq.tab.h"
#include<string.h>
#include <stdio.h>


extern YYSTYPE yylval;
extern int nb_ligne;
extern int nb_col;


%}

idf[A-Z][A-Za-z0-9]* 

reel [+-]?[0-9]+\.[0-9]+
cst [1-9][0-9]*|0
entier (0|[1-9][0-9]*)
sstring  \"(.)*\"
%% 

{reel} {nb_col+=yyleng;yylval.str=strdup(yytext);  return mc_reel;}
{entier}  {nb_col+=yyleng;
          if((atoi(yytext)>=32767) || (atoi(yytext)<=-32767))
		  printf("erreur lexicale:contEn erronee dans la ligne %d et colonne %d\n",nb_ligne,nb_col);
		  else{
		  yylval.str=strdup(yytext);return mc_entier;}
		  }
		  
		  
		   
integer {nb_col+=yyleng;yylval.str=strdup(yytext);return mc_integer;}		  
string {nb_col+=yyleng ;yylval.str=strdup(yytext);return mc_string;}
cst   {nb_col+=yyleng;
         if(((yyleng<=5)&&(atoi(yytext)<=32768)))
		  {yylval.num=atoi(yytext);
		    return mc_cst;}

else printf("erreur lexicale: contEn erronee dans la ligne %d et col %d ",nb_ligne,nb_col); }

"{{"([a-zA-Z0-9]|[ \n\t; := ! ? . /])*"}}"   {int i=0;
for(i;i<yyleng;i++) {if(yytext[i]== '\n') nb_ligne++;}}
 
\n {nb_ligne++;nb_col=1;}
CONST {nb_col+=yyleng; return cst;}
float {nb_col+=yyleng; yylval.str=strdup(yytext);return mc_float;}

LANGAGE {nb_col+=yyleng; return mc_lang;}
FIN {nb_col+=yyleng;  return mc_fin;}
DEBUT {nb_col+=yyleng; return mc_deb;}
DEC {nb_col+=yyleng; return mc_dec;}
FINDEC {nb_col+=yyleng; return mc_fdec;}
input {nb_col+=yyleng; return mc_input;}
output {nb_col+=yyleng; return mc_output;}
while {nb_col+=yyleng; return mc_while;}
faire {nb_col+=yyleng; return mc_faire;}
fait {nb_col+=yyleng; return mc_fait;}
EXECUT {nb_col+=yyleng ;return mc_execute;}
if {nb_col+=yyleng;return mc_if;}

#INOUT[ ]*[\n] {nb_col+=yyleng;nb_ligne++;return bib_InOut;}
#TAB[ ]*[\n]  {nb_col+=yyleng;nb_ligne++;return bib_Tab;}
#ARITHME[ ]*[\n] {nb_col+=yyleng;nb_ligne++;return bib_arithm;}

:= {nb_col+=yyleng;return aff;}
";" {nb_col+=yyleng;return ';';}
"," {nb_col+=yyleng;return ',';}
"=" {nb_col+=yyleng;return '=' ;}
"==" {nb_col+=yyleng;return compr;}
"<"  {nb_col+=yyleng;return '<';}
"<=" {nb_col+=yyleng;return infe;}
">"  {nb_col+=yyleng;return '>';}
">=" {nb_col+=yyleng;return supe;}
"!=" {nb_col+=yyleng;return diff;}
"*" {nb_col+=yyleng;return '*';}
"+" {nb_col+=yyleng;return '+';}
"-" {nb_col+=yyleng; return '-';}
"/" {nb_col+=yyleng;return '/';}
"[" {nb_col+=yyleng;return '[';}
"]" {nb_col+=yyleng;return ']' ;}
"(" {nb_col+=yyleng;return '(';}
")" {nb_col+=yyleng;return ')';}
:: {nb_col+=yyleng;return p4;}	
						 
					
   
{idf} {nb_col+=yyleng;if(yyleng<12){yylval.str=strdup(yytext);
                          
				 	 
                                           return id;}
                        else printf("la taille de IDF est superieur  la taille maximale\n");
						} 
{sstring} {yylval.str=strdup(yytext);return sstring;}
 

[ \t]	


. printf("ERREUR LEXICAL : dans la ligne %d et colonne %d\n",nb_ligne,nb_col);
