//1) Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os
//e exiba o maior endere�o.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y;
	
	if (&x>&y){
	   printf ("o endereco de X e maior. endereco %p\n",&x);
	}else {
		  printf ("o endereco de Y e maior. endereco %p\n",&y);
	}


system("pause");
return 0;
}
