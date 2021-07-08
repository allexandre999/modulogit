#include <stdio.h>
#include <stdlib.h>

int main(){
	float mediageral,mediapar,mediaimpar;
	mediageral=mediapar=mediaimpar=0;
	int num,cont=0,qtpar,qtimpar,impar,par;
	qtpar=qtimpar=num=impar=par=0;
	
	do{	
		printf ("digite um numero inteiro\n");
		scanf("%d",&num);
		if (num%2){
			mediaimpar=mediaimpar+num;
			qtimpar++;
			impar++;
		} else{
			mediapar=mediapar+num;
			qtpar++;
			par++;
		}
	mediageral=mediageral+num;
	cont++;
	}while (cont<10);

if (qtpar==0) qtpar=1;
if(qtimpar==0) qtimpar=1;
mediageral=mediageral/10;
mediaimpar=mediaimpar/qtimpar;
mediapar=mediapar/qtpar;

printf ("quantidade de impares== %d\nmedia de impares== %f\n\n",impar,mediaimpar);
printf("quantidade de pares== %d\nmedia de pares==%f\n\n",par,mediapar);
printf("media geral== %f\n",mediageral);



system ("pause");
return 0;
}