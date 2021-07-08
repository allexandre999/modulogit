#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[8],i,x,y,soma;
	
	for (i=0;i<8;i++){
		printf ("insira um valor inteiro:\n");
		scanf ("%d",&vet[i]);
	}
	
	do {
		i=0;
	   printf ("insira um valor inteiro de 0 a 7:\n");
	   scanf ("%d",&x);
	   if (x>=0 && x<=7){
	   	  i++;
	   }else {
	   		 printf("valor invalido, tente novamente\n");
	   		 system("pause");
	   		 system ("cls");
	   	}
	} while (i==0);
	
	do {
		i=0;
	   printf ("insira um valor inteiro de 0 a 7:\n");
	   scanf ("%d",&y);
	   if (y>=0 && y<=7){
	   	  i++;
	   }else{ 
	   		 printf("valor invalido, tente novamente\n");
	   		 system("pause");
	   		 system ("cls");
	   	}
	} while (i==0);
	
	soma=vet[x]+vet[y];
	printf ("a soma dos valores nas posições %d e %d sao = %d\n\n",x,y,soma);
	
system("pause");
return 0;	
}
