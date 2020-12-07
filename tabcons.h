#include<stdio.h>
#include<stdlib.h>
typedef struct tabcons{
char *nom;
int val;
 
struct tabcons *suivant;
}tabcons;

void afficheC(tabcons **tete)
{
	tabcons*p;
	p=*tete;
	printf("\n/***************Table des constants ******************/\n");
printf("____________________\n");
printf("| Nom     |  Val     \n");

printf("|_________|_________\n");
//int i=0;
while(p!=NULL)
{

printf("|%s        |%d     \n",p->nom,p->val);
p=p->suivant;
}
}

void insererC(tabcons **tete,char *nom ,int val){
tabcons *p,*q;
q=*tete;
 
   q=(tabcons*)malloc(sizeof(tabcons));
     
    q->nom=strdup(nom);
 
   q->val=val;
  
 q->suivant=NULL;
 if (*tete==NULL) {*tete=q;}
   else {
	      
           p=*tete;
           while (p->suivant!=NULL) {p=p->suivant;}
           p->suivant=q;
		 
        }
		 
		}
/*int recherche1(liste **tete,char *entite)
{
	liste *p;
	p=*tete;
	while(p!=NULL)
//int i=0;
//while(i<CpTabSym)
{
	if(strcmp(entite,p->NomEntite)==0){return 1;}
	else {p=p->suivant;}
//if (strcmp(entite,ts[i].NomEntite)==0) return i;
//i++;
}

return 0;
}*/

 int rechercheC(tabcons **tete,char *n){
 tabcons *p;
 p=*tete;
 while(p!=NULL){
 if(strcmp(n,p->nom)==0)
 {return 1;}
 else{p=p->suivant;}
 }
 return 0;
 }
 
 int getVAL (tabcons **tete,char *n)
{

    tabcons *p;
    p=*tete;
    while (p!=NULL) 
       {
           if (strcmp(n,p->nom)==0) {return (p->val);}
           else {p=p->suivant;}
       }
    return 00;
}

int test_type(int n, int c)
{
   if (n==c) return 0;
   return 1;

}

 
 