#include<stdio.h>
#include<stdlib.h>

int temporaryGenerated=0;
int suav[40]={0};
 
int indice=0;
 
 /*

char * newTemp()
{

        //char *temp=(char *)malloc(sizeof(2*10));
        //char *temp;
		//temp = malloc (2*10 * sizeof (*temp));
		char temporaire[20];
		   temporaryGenerated++;
		        
        sprintf(temporaire,"t%d",temporaryGenerated);
        return temporaire;
}*/
 
int  getType(liste **tete,char *n){
 liste *p; 
 p=*tete; 
 
 while(p!=NULL) {
	 if(strcmp(n,p->NomEntite)==0){
 
		 return (p->TypeEntite);}
 
else{p=p->suivant;}
 }
 
 return -1;
  
 }
 
 int getTaille(liste **tete,char *entite){
liste *p;
p=*tete;
while(p!=NULL){
if(strcmp(entite,p->NomEntite)==0){
	 
return (p->TailleEntite);}
else{p=p->suivant;}
}
return -1;


}
 

 


 
 


