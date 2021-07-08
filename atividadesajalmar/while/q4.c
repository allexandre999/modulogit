#include <stdio.h>
#include <stdlib.h>

int main(){
	float n,mdgeral,mdpositivo,mdnegativo,perposi,pernega;
	int qtpositivo,qtnegativo,negativo,positivo,i=0;
	n=mdgeral=mdpositivo=mdnegativo=perposi=pernega=0;
	qtpositivo=qtnegativo=negativo=positivo=0;
	
	while (i<10){
		printf ("digite um valor real\n");
		scanf ("%f", &n);
		mdgeral=mdgeral+n;
		if (n>0){
			mdpositivo=mdpositivo+n;
			qtpositivo++;
			positivo++;	
		}else if (n<0){
			mdnegativo=mdnegativo+(n);
			qtnegativo++;
			negativo++;
		         }else printf ("valor == 0\n\n");
	i++;
	}

if (positivo==0)positivo++;
if (negativo==0)negativo++;

mdgeral=mdgeral/10;
mdpositivo=mdpositivo/positivo;
mdnegativo=mdnegativo/negativo;
perposi=qtpositivo*100/10;	
pernega=qtnegativo*100/10;

printf ("mediageral== %f\nmedia positivo== %f\nmedia negativo== %f\n",mdgeral,mdpositivo,mdnegativo);
printf("quantidade positivo== %d\nquantidade negativo== %d\n",qtpositivo,qtnegativo);
printf ("porcentagem positivo== %f\nporcentagem negativo== %f\n\n",perposi,pernega);

system ("pause");
return 0;
}