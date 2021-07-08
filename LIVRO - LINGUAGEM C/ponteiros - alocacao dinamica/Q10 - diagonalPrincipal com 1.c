//11) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
//para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
//matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.

#include <stdio.h>
#include <stdlib.h>

int *diagonalPrincipal(int tam);
int *vet=NULL;

int main(){
	int *ponteiro=NULL,n,i,j;
	printf ("insira um numero inteiro\n");
	scanf("%d",&n); 
	
	ponteiro = diagonalPrincipal(n);

	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%d ",ponteiro[i*n+j]);
		}
		printf("\n");
	}
	 free(vet);
system ("pause");
return 0;
}

int *diagonalPrincipal(int tam){
	int i,j,*p=NULL;
	
	vet=malloc(tam*tam*sizeof(int));
	if (vet==NULL){
	   printf("Erro na alocacao de memoria\n");
	   exit(1);
	}
	
	p=vet;
	
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			if (i==j){
			   p[i*tam+j] = 1;
		 	}else{
				p[i*tam+j] = 0;
			}
		}
	}

	return p;
}
