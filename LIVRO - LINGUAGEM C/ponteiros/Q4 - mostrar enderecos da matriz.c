//4) Crie um programa que contenha uma matriz de float contendo três linhas e três
//colunas. Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>
#include <stdlib.h>

int main(){
	float vet[3][3];
	int i,j;
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf ("%d - %p\n",i+1,&vet[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
