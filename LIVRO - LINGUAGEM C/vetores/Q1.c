#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int vet[6],i;
	
	for (i=0;i<6;i++){
		printf ("digite um numero inteiro:\n");
		scanf ("%d",&vet[i]);
	}
	
	system ("pause");
	system ("cls");
	printf ("numeros digitados foram:\n");
	
	for (i=0;i<6;i++){
		printf ("%d ",vet[i]);
	}
	
	printf ("\n");
	system ("pause");
	return 0;
}
