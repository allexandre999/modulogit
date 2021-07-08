#include <stdio.h>
#include<stdlib.h>

int main(){
	int num[10],x,cont,j,k,aux;
	
	for (int i=0;i<10;i++){
		printf ("digite um numero inteiro\n");
		scanf ("%d",&num[i]);
	}
	
	printf ("insira abaixo quantos valores menores desejar armazenar:\n");
	scanf ("%d",&x);

	int menor[x];
	int posicao[x];
	//printf ("MENOR = %d\n",menor[0]);
	

	for (int i =0;i<x;i++){
	menor[i]=num[i];
	posicao[i]=i;	
	}
	
	int contfora=0;
	for (int i=0;i<x;i++){
		j=0;
		for (;j<10;j++){
			if (menor[i]>num[j]){
				if (i>j){
					menor[i]=num[j];
					posicao[i]=j;
				}
			}
		}
	}	


	for (int i=x;i>=0;i--){
		printf ("numero menor= %d\nposicao = %d\n\n",menor[i],posicao[i]);
	}

	





		/*for (int j=2;j<10;j++){
			if (menor[0]>num[j]){
				menor[0]=num[j];
				posicao[0]= j;
			}
		}
		
		for (int i=2;i<10;i++){
			if (posicao[0]!=i){
				if (menor[1]>num[i]){
					menor[1]=num[i];
					posicao[1]=i;
				}
			}
		}*/

//printf ("primeiro menor = %d\nprimeiro indice = %d\n\n",menor[0],posicao[0]);
//printf ("segundo menor = %d\nsegundo indice = %d\n\n",menor[1],posicao[1]);

system ("pause");		
return 0;
}