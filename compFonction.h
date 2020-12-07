#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct liste
{ //structure de table de symboles 
char *NomEntite;
char *CodeEntite;
int   TypeEntite;
int  TailleEntite;
char  *nature;
struct liste *suivant;
}liste;
 
 
 
int recherche1(liste **tete,char *entite)
{
	liste *p;
	p=*tete;
	while(p!=NULL)
 
{
	if(strcmp(entite,p->NomEntite)==0){return 1;}
	else {p=p->suivant;}
 
}

return 0;
}
  
  
void inserer1(liste **tete,char * nom,char *nat,int type,int taille,char *code)
{
liste *p,*q;
q=(liste*) malloc(sizeof(liste));
q->NomEntite=strdup(nom);
q->TypeEntite=type;
q->TailleEntite=taille;
q->CodeEntite=code;
q->nature=nat;
q->suivant=NULL;
if(*tete==NULL){
	*tete=q;
}
else {
	p=*tete;
	while(p->suivant!=NULL){
	p=p->suivant;}
	p->suivant=q;
}
}

char *getVal(liste **tete,char *n){
liste *p;
p=*tete;
while(p!=NULL){
	if(strcmp(n,p->NomEntite)==0){
		return p->nature;
}
else{p=p->suivant;}
}
return "-1";
}

//une fonction pour afficher la table de symbole
void afficher1(liste **tete)
{
	liste*p;
	p=*tete;
printf("\n/***************Table des symbolessss ***************/\n");
printf("________________________________________________________________________\n");
printf("| NomEntite |  CodeEntite  |  TypeEntite   |TailleEntite|ValEntite     \n");

printf("|___ _______|______________|_______________|____________|________________|__\n");
//int i=0;
while(p!=NULL)
{

printf("|%9s  |%12s  |%14d |%11d |%11s \n",p->NomEntite,p->nature,p->TypeEntite,p->TailleEntite,p->CodeEntite);
p=p->suivant;
//i++;
}
}


 
 
	
   
 

 

