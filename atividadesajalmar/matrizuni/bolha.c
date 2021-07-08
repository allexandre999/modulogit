#include<stdio.h>
#include<stdlib.h>
void ordenacaoCrescente(int vet[],int tam);
void remocaoVetor(int vet[],int tam);

int main(){
	int tam=10;
	int vet[tam],posicao[tam],copia[tam],aux,teste,i,j,cont,ordenado[10];

	for (i=0;i<10;i++){
		printf ("digite um numero\n");
		scanf ("%d",&vet[i]);
		posicao[i]=i;
		copia[i]=vet[i]; 
	}
	system ("cls");
	printf ("vetor inicial:\n");
	for (i=0;i<10;i++){
		printf ("%d ",vet[i]); 
	}
	
	ordenacaoCrescente(vet,tam);
	
	printf ("\nvetor ordenado; \n");
	for (i=0;i<10;i++){ 
		ordenado[i] = vet[i];
		printf ("%d ",vet[i]);
	}
	
	printf ("\n");
	cont=0;
	for (i=0;i<10;i++){
		
		for (j=0;j<10;j++){
			
			if (vet[i]==copia[j]){
	 		   posicao[i]=j;
			   remocaoVetor(vet,tam);
			   tam=tam-1;
			   break; 	
			}
		
		}
	
	}
	
	printf ("\n\nvetor ordenado:\n");
	
	for (i=0;i<10;i++){
	
		printf ("numero %d posicao %d\n",vet[i],posicao[i]);
	
	}
	
	printf ("\n");
	
	
printf ("\n\n");
system ("pause");
return 0;
}

void remocaoVetor(int vet[],int tam){
	 int i,j;
	 
	 for (i=0;i<tam;i++){
	 	 vet[i]=vet[i+1];	 	  
	 }
}


void ordenacaoCrescente(int vet[],int tam){
	int i,j,teste,aux;
	
	for (i=0;i<tam;i++){
		teste=1;
	
		for (j=i+1;j<tam;j++){
			
			if (vet[i]>vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
				teste=0;
			}
		}
		
		if (teste){
			break;
		}
	}
	
}
