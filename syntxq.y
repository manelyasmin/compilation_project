%{
#include <stdio.h>
#include<stdlib.h>
#include <math.h> 
#include "compFonction.h"
#include"quad2.h"
 extern FILE* yyin;
void ins(int n);
 
void ajour(); 
 
extern int temporaryGenerated; 
 
int Tab[100]={0};
 
int i1=0,nb_ligne=1;
char tmp [20],tmp1[20],suavType[20];
 
liste *tab=NULL;
Tpile *sommet=NULL;
tabcons *QQ=NULL;
quad2 *q=NULL;
int qc,i,j,e,Z,Z1,Z2,suav_debut,sauv_bz,suav_fin,suav_br,e1,e2;
float e21;

%}
 
;

%union {
int num;
char* str;
}


%token  mc_lang  mc_fin mc_dec mc_fdec mc_deb  bib_InOut bib_Tab bib_arithm mc_input mc_output    
%token mc_tableau mc_simple cst aff ';'  p4 ','  '[' ']' mc_while mc_faire mc_fait
%token  '(' ')' diff supe '>' infe '<'compr'=' mc_execute mc_if   
%token <str>mc_string <str>sstring
%token <str>id 
%token <str>mc_float  
%token <num>mc_cst  
%token <str>mc_entier
%token <str>mc_integer 
%token <num>mc_reel
%type<str> E T F  COND CON  
 
%left '+' '-'
%left '*' '/'
%left '(' ')'

 
 
 
%%

s:mc_lang id mc_dec BIB VARIABLE mc_fdec mc_deb INSTRUCTION   mc_fin { printf ("programme syntaxiquement juste\n"); YYACCEPT;}

;
BIB :bib_InOut BIB    {Z=1;}
    |bib_Tab   BIB    {Z1=1;}  
    |bib_arithm  BIB  {Z2=1;}
	|
	;
  	   
VARIABLE:TYPE p4  ID  VARIABLE   
        |TYPE p4 ID1 VARIABLE  
		|TYPE p4 cst ID2 VARIABLE
		|
;
TYPE:mc_float  {strcpy (suavType,$1);e=2;}  
    |mc_integer {strcpy(suavType,$1);e=1;}
    |mc_string  {strcpy(suavType,$1);e=3;}
   
 ;
 
 valeur:mc_entier {e1=1;}
        |mc_reel  {e1=2;}
		|sstring {e1=3;}
	              	/***********DECLARATION DES VARIABLES ***************/
 
ID2: id aff valeur ';' {if(recherche1(&tab,$1)!=1) {inserer1(&tab,$1,"constant",e,1,"idf_cst");insererC(&QQ,$1,$<num>3);}
                        else {printf("ERREUR SEMANTIQUE:double declaration de %s a la ligne %d\n",$1,nb_ligne);
						     }
                       if (e!=e1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
	                   }
	|id aff valeur ',' ID2 {if(recherche1(&tab,$1)!=1) {inserer1(&tab,$1,"constant",e,1,"idf_cst");insererC(&QQ,$1,$<num>3);}
                           else {printf("ERREUR SEMANTIQUE:double declaration de %s a la ligne %d\n",$1,nb_ligne);
						       }
                          if (e!=e1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
	                       }
	
;

ID:  id ';' {if (recherche1(&tab,$1)!=1){inserer1(&tab,$1,"simple",e,1,"idf");}
             else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d et %d\n", $1, nb_ligne);}
  
  
  | id   ',' ID {if (recherche1(&tab,$1)!=1){ inserer1(&tab,$1,"simple",e,1,"idf"); }
                else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d\n", $1, nb_ligne);}

;


ID1: id '['mc_entier']' ';'  {int i=atoi($3);if(recherche1(&tab,$1)!=1) {inserer1(&tab,$1,"tableau",e,i,"idf");} 
      else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d\n", $1, nb_ligne);
	  if(atoi($3)<1) printf("ERREUR SYNATAXIQUE:la taille doit etre supereiur a 1 dans la ligne %d\n",nb_ligne);
	  char c[20] ;sprintf(c,"%d",i);char c1[20] ;sprintf(c1,"%d",1);
	  insere_qudr(&q,"BOUNDS",c1,c," ");insere_qudr(&q,"ADEC",$1," "," "); 
	  if(Z1!=1) {printf("ERREUR SYNATXIQUE :MANQUE DE LA BIB_TAB DANS LA LIGNE %d\n",nb_ligne);}
               	  }
	  
   
   |id '['mc_entier']' ',' ID1 {int i=atoi($3);if(recherche1(&tab,$1)!=1) {inserer1(&tab,$1,"tableau",e,i,"idf");} 
        else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d\n", $1, nb_ligne);
		if(atoi($3)<1) printf("ERREUR SYNATAXIQUE:la taille doit etre supereiur a 1 dans la ligne %d\n",nb_ligne);
		char c[20] ;sprintf(c,"%d",i);char c1[20] ;sprintf(c1,"%d",1);
	    insere_qudr(&q,"BOUNDS",c1,c," "); insere_qudr(&q,"ADEC",$1," "," ");
		if(Z1!=1) {printf("ERREUR SYNATXIQUE :MANQUE DE LA BIB_TAB DANS LA LIGNE %d\n",nb_ligne);}
		}
	
	
	
;   






               /**************PARTIE INSTRUCTION*****************/	 

 INSTRUCTION:CONDITIONN  INSTRUCTION 
			|WHILE       INSTRUCTION
	        |IN          INSTRUCTION
			|OUT         INSTRUCTION
			|INST        INSTRUCTION
            |			
			
			
			
;


IN:mc_input'(' sstring ')' ';'    {if(Z!=1) printf("ERREUR SEMANTIQUE :MANQUE DE LA BIB INOUT DANS LA LIGNE %d\n",nb_ligne);
}

;
VARIABLEOUT:id  {if(recherche1(&tab,$1)!=1) printf("ERREUR SEMANTIQUE IDF %s n est pas declare dans la ligne %d\n",$1,nb_ligne);} 
           
		   
		|id ',' VARIABLEOUT {if(recherche1(&tab,$1)!=1) printf("ERREUR SEMANTIQUE IDF %s n est pas declare dans la ligne %d\n",$1,nb_ligne);}
		   ; 
		   
OUT:mc_output'(' VARIABLEOUT ')' ';'    {if(Z!=1) printf("ERREUR SEMANITUQE :MANQUE DE LA BIB INOUT DANS LA LIGNE %d\n",nb_ligne);
             }
; 
/**************************CONDITION  *************************************************/
CONDITIONN:mc_execute M1 INSTRUCTION  M2 mc_if '(' CONDITION ')' M3  
M1:{suav_debut=getTailleq();insere_qudr(&q,"BR","","","");}
M2:{suav_br=getTailleq();ajour_quad(&q,suav_debut,2,"");}  
M3:{ suav_fin=getTailleq();sprintf(tmp,"%d",suav_fin);ajour_quad(&q,suav_debut,1,tmp);
sprintf(tmp,"%d",suav_debut+1);insere_qudr(&q,"BNZ",tmp,"","");
}
 
 ; 
 
 


/***************************************WHILE***********************************************************/
WHILE:mc_while  A '('CONDITION')'  B mc_faire  INSTRUCTION  C mc_fait  
;

A:{suav_debut=getTailleq();}
B:{sauv_bz=getTailleq();sprintf(tmp,"%d",suav_debut);insere_qudr(&q,"BZ","",tmp,"");}
C:{sprintf(tmp,"%d",suav_debut);insere_qudr(&q,"BR",tmp,"",""); 
suav_fin=getTailleq();sprintf(tmp1,"%d",suav_fin);ajour_quad(&q,sauv_bz,1,tmp1);sauv_bz=getTailleq();}




 
 
 
 ;
 

CONDITION:COND '=' CON {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, "=",src1,$<str>3,$<str>$);	 }
         |COND '<' CON {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, "<",src1,$<str>3,$<str>$);	 }
         |COND '>' CON  {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q,">",src1,$<str>3,$<str>$);	 }
	     |CON {$<str>$=$1;}
	;
COND:COND '=' CON {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, "=",src1,$<str>3,$<str>$);	 }
     |COND '<' CON {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, "<",src1,$<str>3,$<str>$);	 }
     |COND '>' CON  {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, ">",src1,$<str>3,$<str>$);	 }
	 |CON {$<str>$=$1;}
	 
	 ;
CON:CON diff F {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, "!=",src1,$<str>3,$<str>$);	 }
   |CON supe F {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, ">=",src1,$<str>3,$<str>$);	 }
   |CON infe F {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, "<=",src1,$<str>3,$<str>$);	 }
   |CON compr F {char* src1= strdup($<str>1); temporaryGenerated++; sprintf($<str>$,"c%d",temporaryGenerated);
             insere_qudr(&q, "==",src1,$<str>3,$<str>$);	 }
   |F {}
   ;
	
 



/******************************************AFFECTATATION ***************************************************/
INST:id aff EXP ';'    { if(Z2!=1) {printf("ERREUR SEMANTIQUE MANQUE DE LA BIB ARITHME DANS LA LIGNE %d\n",nb_ligne);}
        if((rechercheC(&QQ,$1)==1)&&((getVAL(&QQ,$1))!=$<num>3)) {printf("ERREUR SEMANTIQUE:on peut pas change la valeur d un constant dans la ligne %d\n",nb_ligne);} 
        if(recherche1(&tab,$1)!=1) {printf("ERREUR SYNTAXIQUE:L IDF %s N EST PAS ENCORE DECLARE DANS LA LIGNE %d\n",$1,nb_ligne);}
        if(compare1(getType(&tab,$1))==-1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
		
		insere_qudr(&q,":=",$<str>3,"",$1);ajour();
	                              }
	 
	 
	
	|id '['mc_entier ']' aff EXP ';'   {if(Z2!=1) {printf("ERREUR SEMANTIQUE MANQUE DE LA BIB ARITHME DANS LA LIGNE %d\n",nb_ligne);} 
        if((rechercheC(&QQ,$1)==1)&&((getVAL(&QQ,$1))!=$<num>3)) {printf("ERREUR SEMANTIQUE;on ne peut pas change la valeur d un constant dans la ligne %d \n",nb_ligne);} 
        if(recherche1(&tab,$1)!=1) {printf("ERREUR SYNTAXIQUE:L IDF %s N EST PAS ENCORE DECLARE DANS LA LIGNE %d\n",$1,nb_ligne);}
        if(getTaille(&tab,$1)<atoi($3)) {printf("ERREUR DEPASSEMENT DE LA TAILLE AUTROISE DANS LA LIGNE %d\n",nb_ligne);}
	    if(compare1(getType(&tab,$1))==-1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
		char c3[20]=" ";strcat(c3,$1);strcat(c3,"[");char c2[20]=" ";sprintf(c2,"%d",atoi($3));strcat(c3,c2);strcat(c3,"]");
         if(j!=3){insere_qudr(&q,":=",$<str>6,"",c3);ajour();}
		 if(j==3){insere_qudr(&q,":=",$<str>6,"",c3);ajour();}
                                    }
 
   
    ;



 
 
EXP:E '+' T    { ins(4);  
        char* src1= strdup($<str>1); temporaryGenerated++; 
        sprintf($<str>$,"t%d",temporaryGenerated);
        insere_qudr(&q,"+",src1,$<str>3,$<str>$);
		       }
			  
 
	|E '-' T {ins(5);
	    char* src1= strdup($<str>1); temporaryGenerated++; 
        sprintf($<str>$,"t%d",temporaryGenerated);
        insere_qudr(&q,"-",src1,$<str>3,$<str>$); 	
		     }
 
           
 |T {}
 |sstring {j=3;ins(3);}

 ;
 
E:E '+' T {  ins(4);
 
	int w=getType(&tab,$1);int w1=getType(&tab,$1);
    char* src1= strdup($<str>1); temporaryGenerated++; 
    sprintf($<str>$,"t%d",temporaryGenerated);
    insere_qudr(&q,"+",src1,$<str>3,$<str>$);
		  
		  ;}
 |E '-' T{ins(5);
    char* src1= strdup($<str>1); temporaryGenerated++; 
    sprintf($<str>$,"t%d",temporaryGenerated);
    insere_qudr(&q,"-",src1,$<str>3,$<str>$); 
       	}
 |T { }
; 

T:T '*' F    {   
 ins(6);
    char* src1= strdup($<str>1); temporaryGenerated++; 
    sprintf($<str>$,"t%d",temporaryGenerated);
	insere_qudr(&q,"*",src1,$<str>3,$<str>$);  
            }		   

 
  |T '/' F  {ins(7);
    if (strcmp($3,"0")==0) {printf("ERREUR SYNTAXIQUE :DIVISION PAR ZERO DANS LA LIGNE %d\n",nb_ligne);}
    else {char* src1= strdup($<str>1); temporaryGenerated++; 
    sprintf($<str>$,"t%d",temporaryGenerated);
    insere_qudr(&q,"/",src1,$<str>3,$<str>$); 
	     }
		 }		 
 
 |F      {  }
  ;
 
F: mc_entier {e2=atoi($1);j=1;ins(1);}
  |mc_reel   {e21=atof($1);j=2; ins(2);}
  
  |id	     {sommet=empiler(sommet,atoi($1));afficherPile(&sommet);
  if(recherche1(&tab,$1)!=1) {printf("ERREUR SEMANTIQUE :idf %s n est pas declare encore dans la ligne %d\n",$1,nb_ligne);}
  ins(getVal1(&tab,$1));e2=atoi($1);}
  |id '[' mc_entier ']' {if(getTaille(&tab,$1) < atoi($3) )
	     {printf("ERREUR SEMANTIQUE:DEPASSEMENT DE LA TAILLE D UN TABLEAU DANS LA LIGNE %d\n",nb_ligne);};
         if(recherche1(&tab,$1)!=1) {printf("ERREUR SEMANTIQUE :idf %s n est pas declare encore dans la ligne %d\n",$1,nb_ligne);}
	     ins(getType(&tab,$1));
         char c3[20]=" ";strcat(c3,$1);strcat(c3,"[");char c2[20]=" ";sprintf(c2,"%d",atoi($3));strcat(c3,c2);strcat(c3,"]");
	      strcpy($1,c3);	  }
  
   |'-' E {}
	; 
 
 
 
 
 
 
 
 
 
 
%%
int compare1(int n){
int s=0;
while(s<=100){
if((n==1)&&((Tab[s]==2)||Tab[s]==3)) {return -1;}
if((n==2)&&(Tab[s]==3)) {return -1;}
if((n==3)&&((Tab[s]==2)||(Tab[s]==1) ||(Tab[s]==5) || (Tab[s]==6) || (Tab[s]==7))) {return -1;}
if((n==1)&&((Tab[s]==1)&&(Tab[s+1]==1)&&(Tab[s+2]==7))){return -1;}
s++;
}
return 0;
}
void ajour(){
int s=0;
while(s<=100){
Tab[s]=0;
s++;
}
} 
 
 
void ins(int n){

 
Tab[i1]=n;
i1++;

}
 
 int yyerror (char *msg)
{
   printf("ERREUR SYNTAXIQUE DANS LA LIGNE %d \n",nb_ligne);
   return 1;
}
 
int main(int argc, char *argv[])
{yyin=fopen("exp.txt","r");
  if(! yyparse())
  
  printf("  Aucune Erreur Compilation Reussie\n");
   
 	else
 	printf("\t Attention\t Erreur Syntaxique");
 	
 	fclose(yyin);
 
 
  
//   afficher1(&tab);
  // afficher_qdr(&q);
  return 0;
}
  
 

 


 

yywrap()
{}

 