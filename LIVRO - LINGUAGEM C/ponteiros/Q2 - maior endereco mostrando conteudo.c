//2) Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do
//teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o.

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
