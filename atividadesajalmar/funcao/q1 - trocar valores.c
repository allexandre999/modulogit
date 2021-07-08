//Implemente a função trocar_valores() para que ocorra a saída como mostrada na imagem.

#include <stdio.h>
#include <stdlib.h>

void trocarValores(int *,int *);


int main(){
	int n1 = 2;
	int n2 = 3;
	
	trocarValores(&n1,&n2);
	
	printf("n1 = %d e n2 = %d\n",n1,n2);	
	
	
return 0;	
system("pause");
}

void trocarValores(int *x,int *y){
	int aux;
	
	aux = *x;
	*x = *y;
	*y = aux; 
}
