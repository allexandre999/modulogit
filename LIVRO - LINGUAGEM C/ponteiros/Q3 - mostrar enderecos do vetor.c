//3) Crie um programa que contenha um array de float contendo 10 elementos. Imprima
//o endereço de cada posição desse array.
#include <stdio.h>
#include <stdlib.h>

int main(){
	float vet[10];
	int i;
	for (i=0;i<10;i++){
		printf("%2d - %p\n",i+1,&vet[i]);
	}
	
	
	system("pause");
	return 0;
}
