#include <stdio.h>
#include <stdlib.h>
  typedef struct sElement {int  nb;
  struct sElement *suiv;
  }Tpile;
Tpile *initpile(Tpile * sommet){
	sommet=NULL;
	return sommet;
}
  
Tpile * empiler(Tpile *sommet ,int nb){
	Tpile *nouveau;
	nouveau=(Tpile*)malloc(sizeof(Tpile));
	if(nouveau==NULL)
		printf("ERREUR D ALLOCATION\n");
	else{
		nouveau->nb=nb;
		nouveau->suiv=sommet;
		sommet=nouveau;
}
return sommet;
}
int pileVide(Tpile *sommet){
	if (sommet==NULL);
return 0;
return 1;
	
	}

Tpile *depiler(Tpile *sommet,int *nb){
	Tpile* elmt;
 	if(sommet==NULL) 
{exit(1);}
	else{
		 
	 	 
		 
		elmt=sommet;
		*nb=elmt->nb;
		 
		sommet=elmt->suiv;
	 
		
		free(elmt);
}
	return sommet;
}

void afficherPile(Tpile * sommet){
	Tpile *courant;
	int i;
	printf("\n|_____|\n");
	//printf("%d \n",sommet);
	for(courant=sommet,i=0;courant!=NULL;courant=courant->suiv,i++){
	printf("\n",i,courant->nb);printf("\n__\n");}
 
}
/*
Tpile *postfixe(Tpile *sommet,char type,int Nb){
int Nb1,Nb2;
 switch(type){
case '+':sommet=depiler(sommet,&Nb2);
         sommet=depiler(sommet,&Nb1);
		 if(Nb1==Nb2)
      //   Nb=Nb1+Nb2;
         sommet=empiler(sommet,Nb1);
		 
		 break;

case '-':sommet=depiler(sommet,&Nb2);
        sommet=depiler(sommet,&Nb1);
        Nb=Nb1-Nb2;
        sommet=empiler(sommet,Nb);
break;
case '*':sommet=depiler(sommet,&Nb2);
        sommet=depiler(sommet,&Nb1);
        Nb=Nb1*Nb2;
        sommet=empiler(sommet,Nb);
case '/':sommet=depiler(sommet,&Nb2);
        sommet=depiler(sommet,&Nb1);
        Nb=Nb1/Nb2;
sommet=empiler(sommet,Nb);
break;

}
return sommet;
}*/
 
	
 
int sommetPile(Tpile *sommet){
int x;
x=sommet->nb;
return x;
}/*
int verifierOp(char *ch){
if(strlen(ch)==1)
if((ch[0]=='+')||(ch[0]=='-')||(ch[0]=='*') ||(ch[0]=='/'))
return 1;
else 
return 0;
return 0;}
  */