//5) Crie um programa que contenha um array de inteiros contendo cinco elementos.
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
//dobro de cada valor lido.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = malloc(5*sizeof(int));
	int i;
	
	for (i=0;i<5;i++){
		printf ("digite um numero:\n");
		scanf ("%d",*(p+i));
	}
	
	
	for (i=0;i<5;i++){
		printf ("numeros: %d\n",*(p+i);
		scanf ("%d",*(p+i));
	}
	
	free(p);
	system ("pause");
	return 0;
}
