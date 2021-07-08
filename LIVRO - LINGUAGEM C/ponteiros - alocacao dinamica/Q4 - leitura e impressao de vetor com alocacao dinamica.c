//4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
//seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
//imprima.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam=0;
	printf("insira um tamanho para o vetor\n");
	scanf ("%d",&tam);
	int *vet = malloc(tam*sizeof(int));
	int i;
	
	if (vet==NULL){
	   printf("Erro: memoria insuficiente\n");
	   system("pause");
	   exit(1); 
	}
	
	for (i=0;i<tam;i++){
		printf("insira um valor inteiro\n");
		scanf("%d",&vet[i]);
	}
		
	for (i=0;i<tam;i++){
		printf("valor inteiro = %d\n",vet[i]);
	}
	
free(vet);
system("pause");
return 0;	
}
