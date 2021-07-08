//8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
//do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
//utilize índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int vet[], int x);


int main(){
	int tam,num=0;
	printf ("insira um tamanho para o vetor\n");
	scanf ("%d",&tam);
	int vetor[tam];
	printf ("insira um valor inteiro para preencher o vetor\n");
	scanf("%d",&num);
	getchar();
	getchar();
	system("cls");
	preencherVetor(vetor,num);
	
system("pause");
return 0;
}

void preencherVetor(int vet[], int x){
	 int tam = sizeof(vet);
	 printf("entrei aqui\n");
	 int i;
	 int *p;
	 p=&vet[0];
	 for(i=0;i<5;i++){
		*(p+i) = x;
		printf("valor [%i] = %d\n",p+i,*(p+i));
	 }
	 printf ("sai aqui\n");
	//p=&vet[0];
	for (i=0;i<5;i++){
	 	 printf("valor [%i] = %d\n",p+i,*(p+i));
	 }
	 printf ("cheguei ao outro lado\n");
	 
}
