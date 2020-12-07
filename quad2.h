#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct quad2
{
	//structure des quarduplets
char *oper;
char *op1;
char *op2;
char *res;
int num;
struct quad2 *suivant;
}quad2;

  int taille_quad;
/*void alterer_quad(int adresse, int a)
{
    char buf[250];
    char *d = itoa(a,buf,10);
     strcpy(tab_quad[adresse].dest, d);
}*/
 char *getVal1(quad2 **tete,char *n){
	 quad2 *p;
	 p=*tete;
	 while(p!=NULL){
		 if(strcmp(n,p->oper)==0){
		 return ((p->oper));}
		 else {p=p->suivant;}
	 }
	 return "-1";
 }
 int getTailleq(){
 return taille_quad;
 }

void alterer_quad(quad2 **tete,int adr,int a){
char buf[250];
char *d=itoa(a,buf,10);
	quad2 *p;
	p=*tete;
	

printf ("l adr esr %d %d %s\n",adr,p->num,d);
while(p!=NULL){
	
	 if(adr==p->num){strcpy(p->res,d);}
else{p=p->suivant;}
}

}
void creetmp(char R){
 

printf("le res %s\n",R);
}
void insere_qudr(quad2 **tete,char *opr,char*op1,char *op2,char *res){
//printf("le quadr est %S %s %s %s n",opr,op1,op2,res);
quad2 *p,*q;
q=(quad2*)malloc(sizeof(quad2));
q->oper=strdup(opr);
q->op1=strdup(op1);
q->op2=strdup(op2);
q->res=strdup(res);
q->num=taille_quad;

//printf("le quadr est %s %s %s %s \n",opr,op1,op2,res);
q->suivant=NULL;

if(*tete==NULL){*tete=q;}
else{
	p=*tete;
	while(p->suivant!=NULL){p=p->suivant;}
	p->suivant=q;
	}
taille_quad++;	

}

void ajour_quad(quad2 **tete,int num_quad,int colon_quad,char val[]){
 
quad2 *q;
q=*tete;
 
 while((q!=NULL)&&(q->num!=num_quad)){q=q->suivant;}
 if(q->num==num_quad){
	 if(colon_quad==0) strcpy(q->oper,val);
	else if (colon_quad==1)  strcpy(q->op1,val);
	else  if(colon_quad==2) strcpy(q->op2,val);
	else  if(colon_quad==3) strcpy(q->res,val);
}



}

void afficher_qdr(quad2 **tete){
quad2 *p;p=*tete;
//int i=0;
    printf("    ************** La Table des quadrupletsS ****************\n");
              printf(" ____________________________________________________________________________________ \n");
              printf(" indice   |  operateur  |  operande 1  | operande 2  | resultat   |\n"); 
			  printf("__________|_____________|______________|_____________|____________|\n");  
     			  
  while ((p!=NULL)  )        {           
		   printf("|%5d    |%9s    |%7s       |  %5s      |%7s     |\n",p->num,p->oper,p->op1,p->op2,p->res);
        
	 //i++;
	p=p->suivant;
}
}
