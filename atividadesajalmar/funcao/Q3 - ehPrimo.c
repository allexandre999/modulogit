//Implemente uma fun��o para verificar se um n�mero � primo. 
//Fa�a testes para verificar se a fun��o est� corretamente implementada.

#include <stdio.h>
#include <stdlib.h>

void ehPrimo(int *);

int main(){
	int num = 0;
	
	printf ("digite um numero:\n");
	
	scanf ("%d",&num);
	
	if (num<1){
	   printf ("numero invalido\n");
	}else{
		  ehPrimo(&num);
	}
return 0;
system("pause");
}

void ehPrimo(int *x){
	 int i,teste=0;
	 
	 for (i=1;i < (*x);i++){
	 	 if (*x%i==0){
		  	teste++;
		  }
	 }
	 
	 if (teste>1){
	 	printf ("%d nao eh primo!",*x); 
 	 }else {
	  	   printf ("%d eh primo!",*x);
	  }
	  
}
