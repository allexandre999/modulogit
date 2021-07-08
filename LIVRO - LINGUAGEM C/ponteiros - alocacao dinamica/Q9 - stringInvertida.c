//9) Crie uma função que receba uma string e retorne o ponteiro para essa string invertida.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *stringInvertida(char *c);

int main(){
	char vet[50],*p=NULL;
	printf("insira uma string\n");
	fflush(stdin);
	gets(vet);
	
	p = stringInvertida(vet);
	printf("string invertida = %s\n",p);
	
system("pause");
return 0;
}

char *stringInvertida(char *c){
	 int tam = strlen(c);
	 int aux=tam;
	 char inverte[tam],*p=NULL;
	 int i;
	 strcpy(inverte,c);
	 
	 for (i=0;i<tam;i++){
	 	 c[i] = inverte[aux-1];
	 	 printf("inverti = %c\n",c[i]);
	 	 aux--;
	 }
	 p=c;
	 return p;
}
