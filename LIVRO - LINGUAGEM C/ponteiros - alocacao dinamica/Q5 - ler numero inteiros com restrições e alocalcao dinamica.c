//5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
//inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
//Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
//deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	do{
	   printf("insira um numero inteiro positivo\n");
	   scanf("%d",&num);
	}while(num<1);
	
	int *vet = malloc(num*sizeof(int));
	int *p = vet;
	int i;
	
	do{
		printf("insira um numero inteiro maior ou igual a 2\n");
		scanf("%d",(p+i));
		
		if (*(p+i)>=2){
		   i++;
         }
		
	}while(i<num);
	
	
	for (i=0;i<num;i++){
		printf("%d - %d\n",i,*(p+i));
	}

free(vet);
return 0;
system("pause");
}
