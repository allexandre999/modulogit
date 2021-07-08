//8) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
//o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for
//negativo ou igual a zero, um ponteiro nulo deverá ser retornado.

#include <stdio.h>
#include <stdlib.h>

int *retornaPonteiroNulo(int n);

int *vet=NULL;

int main(){
	int n=0,*p;
	
	printf ("insira o tamanho do array\n");
	scanf("%d",&n);
	
	p=retornaPonteiroNulo(n);
	
	printf("%p endereco de vet\n",&vet[0]);
	printf("%p endereco de p\n",p);
	
free(vet);
return 0;
system("pause");
}

int *retornaPonteiroNulo(int n){
	if (n<=0){
	   return vet;
	}else{
		  vet=malloc(n*sizeof(int));
	}
	
	if (vet==NULL){
	   printf("Erro na alocação");
	   exit(1);
	}
	
	return vet=malloc(n*sizeof(int));
}
