//Implemente uma fun��o para computar o fatorial de um n�mero. 
//Fa�a testes para verificar se a fun��o est� corretamente implementada.

#include <stdio.h>
#include <stdlib.h>

void fatorial(int *);

int main(){
	int num = 0;
	
	printf ("digite um numero para ser calculado o seu fatorial:\n");
	
	scanf("%d",&num);
	
	fatorial(&num);	
	printf ("Fatorial = %d\n",num);
	
system ("pause");	
return 0;
}

void fatorial(int *n){	
	 int i;
	 
	 for (i=*n-1;i>0;i--){
	 	 *n = *n * i;
	 }
}
