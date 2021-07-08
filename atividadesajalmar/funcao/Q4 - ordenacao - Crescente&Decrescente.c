//Implemente uma função para ordenar os valores contidos em 
//um vetor de tamanho qualquer. Faça testes para verificar 
//se a função está corretamente implementada.

#include <stdio.h>
#include <stdlib.h>

void ordenacaoCrescente(int vet[],int tam);
void ordenacaoDecrescente(int vet[],int tam);

int main(){
	int tam,i,op=0;
	do{
	system ("cls");
	printf ("digite quantos numeros deseja inserir para realizar a ordenacao:\n");
	scanf ("%d",&tam);
	if (tam<1){
	   printf ("digite um valor maior do que zero");
	   getchar();
	   getchar();
	}
	}while(tam<1);
	
	int vet[tam];
	for (i=0;i<tam;i++){
		printf ("insira um valor:\n");
		scanf("%d",&vet[i]);
	}
	
	do{
	system ("cls");	
	printf ("1 - ordenacao crescente\n2 - ordenacao decrescente\n");
	scanf ("%d",&op);
		if ((op!=1) && (op!=2)){
		   printf ("insira um valor valido.\n");
	 	   getchar();
		   getchar();
		}
	}while((op!=1) && (op!=2));
	
	if (op==1){
	   ordenacaoCrescente(vet,tam);
	}
	if (op==2){
	   ordenacaoDecrescente(vet,tam);
	}
}

void ordenacaoCrescente(int vet[],int tam){
	 int i,j;
	 int aux=0;
	 for (i=0;i<tam;i++){
	 	  for (j=0;j<tam-1;j++){
		 	 if (vet[j]>vet[j+1]){
			  	aux = vet[j];
			  	vet[j] = vet[j+1];
				vet[j+1] = aux;  
			  } 	 
 		 }
	 }
	 
	 printf ("ordenacao = ");
	 
	 for (i=0;i<tam;i++){
	 	 printf ("%d ",vet[i]);
	 }
	 
}

void ordenacaoDecrescente(int vet[],int tam){
	 int i,j;
	 int aux=0;
	 
	 for (i=0;i<tam;i++){
	 
	 	for (j=0;j<tam-1;j++){
		
		 	if (vet[j]<vet[j+1]){
			  	aux = vet[j+1];
			  	vet[j+1] = vet[j];
				vet[j] = aux;  
			} 	 
 		}
	 }
	 
	 printf ("ordenacao = ");
	 
	 for (i=0;i<tam;i++){
	 	 printf ("%d ",vet[i]);
	 }
}

