//Implemente uma função para computar o fatoral de um número 
//de forma recursiva. Leia sobre recursividade, implemente a 
//função e veja se a implementação está correta.

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int main(){
	int num = 0;
	printf ("digite um numero para ser calculado o seu fatorial:\n");
	scanf("%d",&num);
	
	num = fatorial(num);	
	printf ("Fatorial = %d\n",num);
	
system ("pause");	
return 0;
}
int fatorial(int n){	
	 int fat=1;	 
  	 if (n>=2){	 
	 	fat = n * fatorial(n-1);
	 }
	 return fat;
}
