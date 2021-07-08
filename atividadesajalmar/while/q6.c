#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n,qtpar,qtimpar,par,impar;
	float mdpar,mdimpar,mdgeral;
	qtpar=qtimpar=i=n=par=impar=0;
	mdpar=mdimpar=mdgeral=0;
	
	while (i<10){
		printf ("digite um numero inteiro:\n");
		scanf("%d",&n);
		mdgeral=mdgeral+n;
		if (n%2){
			qtimpar++;
			impar++;
			mdimpar=mdimpar+n;
		}else {
			qtpar++;
			par++;
			mdpar=mdpar+n;
		}
	i++;	
	}
if (qtpar==0) qtpar=1;
if (qtimpar==0) qtimpar=1;
mdgeral=mdgeral/10;
mdimpar=mdimpar/qtimpar;
mdpar=mdpar/qtpar;

printf ("media geral= %f\nmedia par= %f\nmedia impar= %f\n",mdgeral,mdpar,mdimpar);
printf ("quantidade par= %d\nquantidade impar= %d\n",par,impar);

system("pause");
return 0;
}