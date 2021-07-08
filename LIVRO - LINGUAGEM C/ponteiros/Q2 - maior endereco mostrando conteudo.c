//2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
//teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y;
	
	printf ("digite um numero:\n");
	scanf("%d",&x);
	
	
	printf ("digite um numero:\n");
	scanf("%d",&y);
	
	if (&x>&y){
	   printf ("X tem mair endereco e seu valor e %d", x);
	}else {
		  printf("Y tem maior endereco e seu valor e %d", y);
	}
	
	
system ("pause");
return 0;	
}
