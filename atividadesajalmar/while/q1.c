#include<stdio.h>
#include<stdlib.h>

int main(){

	int num,par,impar,i;
	num=par=impar=0;
	printf ("digite um numero inteiro\n");
	scanf("%d",&num);
	i=1;
	while (i<=num){
		if (i%2)
			impar++; 		
		else
			par++;
		i++;
	}
	
printf ("quantidade de pares== %d\nquantidade de impares== %d\n\n",par,impar);	



system("pause");
return 0;
}