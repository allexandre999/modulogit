#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int vet[5],i;
	float media=0;
	for (i=0;i<5;i++){
		printf ("digite um numero inteiro:\n");
		scanf ("%d",&vet[i]);
	}
	
	system ("pause");
	system ("cls");
	
	printf ("numeros digitados foram:\n");
	for (i=4;i>=0;i--){
		printf (" %d +",vet[i]);
		media=media+vet[i];
	}
	media=media/5;
	printf("= %.2f",media);
	
	printf ("\n");
	system ("pause");
	return 0;
}
