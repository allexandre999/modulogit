//4) Crie um programa que contenha uma matriz de float contendo tr�s linhas e tr�s
//colunas. Imprima o endere�o de cada posi��o dessa matriz.

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
