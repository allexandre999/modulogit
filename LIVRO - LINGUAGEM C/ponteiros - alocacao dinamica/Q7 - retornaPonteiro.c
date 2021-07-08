//7) Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
//alocados dinamicamente. O array deve ser preenchido com valores de 0 a N - 1.

#include<stdio.h>
#include <stdlib.h>

int *retornaPonteiro(int *p,int n);

int main(){
	int n=0,*vet=NULL,*p,i;
	
	printf("insira o tamanho do array\n");
	scanf("%d",&n);
	
	vet = malloc(n*sizeof(int));
	
	if (vet==NULL){
	   printf("Erro na alocacao de memoria\n");
	   exit(1);
	}
	
	p=vet;
	
	p = retornaPonteiro(p,n);
	
	for (i=0;i<n;i++){
		printf("%d - %d\n",i+1,*(p+i));
	}
	

system("pause");
return 0;
}

int *retornaPonteiro(int *p,int n){
	int i=0;
	
	for (i=0;i<n;i++){
		*(p+i) = i; 
	}
	
	return p;
}
