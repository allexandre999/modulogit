//6) Crie um programa que contenha um array contendo cinco elementos inteiros.
//Leia esse array do teclado e imprima o endereço das posições contendo valores
//pares.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[5];
	int i;
	for (i=0;i<5;i++){
		printf ("digite um numero\n");
		scanf("%d",&vet[i]);
	}
	
	for (i=0;i<5;i++){
		if (vet[i]%2==0){
		   printf("valor = %d  posicao = %p\n",vet[i],&vet[i]);
		}
	}



system("pause");
return 0;
}
