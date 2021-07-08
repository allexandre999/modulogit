//1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados
//ocupa na memória: char, int, float, double.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[6] = {2,3};
	printf ("tamanho char = %d\n",sizeof(char));
	printf ("tamanho char = %d\n",sizeof(int));
	printf ("tamanho char = %d\n",sizeof(float));
	printf ("tamanho char = %d\n",sizeof(double));
	printf ("tamanho do vetor inteiro = %d\n",sizeof(vet));
	printf ("tamanho do preenchimento do vetor = %d\n",sizeof(vet)/sizeof(int));
	printf ("valor 1 = %d\n",vet[0]);
	printf ("valor 2 = %d\n",vet[1]);
	printf ("valor 3 = %d\n",vet[2]);
	system ("pause");
	return 0;
}
