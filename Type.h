#include<stdio.h>
#include<stdlib.h>

typedef struct Type1{

    char  oper[100]; 
    char  op1[10];   
    char  op2[20]; 
    char  nom[100];	
   int bol;
    
  }Type1;


Type1  Type[1000];
  int  qc1=0;


  
void insere_Type(char opr[],char op1[],char op2[],char nom[],int bol)
{
	
	strcpy(Type[qc1].oper,opr);
 	strcpy(Type[qc1].op1,op1);
	strcpy(Type[qc1].op2,op2);
	strcpy(Type[qc1].nom,nom);
	Type[qc1].bol=bol;
	 
 

qc1++;
}
void afficherT ()
{
printf("\n/***************Table des symbolessssssss ******************/\n");
printf("_______________________________________________________________________________________\n");
printf("|num        | operateur    |  op1          |op2         |nom         |  type       |\n");
printf("|___________|______________|_______________|____________|____________|______________|_\n");

int i=0;
  while(i<=qc1)
  {
printf("|%9d  |%12s  |%14s |%11s |%11s |%11d |\n",i,Type[i].oper,Type[i].op1,Type[i].op2,Type[i].nom,Type[i].bol);
 
     i++;
   }
}
int getD(){
return Type[qc1-1].bol;
}

 
 
void ajour_Type(int num_quad, int colon_quad, int val )
{

          if (colon_quad==3)    Type[num_quad].bol=val;

}
