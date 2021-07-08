#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int num,primeiro,segundo,terceiro,quarto,cont=0;	
	primeiro=segundo=terceiro=quarto=0;
	do{	
		printf ("digite um numero inteiro positivo\n");
		scanf("%d",&num);
		if (num%2==0){
			cont++;	
			if ((num>=1)&&(num<=15)){
				primeiro++;
			}
			else if ((num>=16)&&(num<=30)){ 
				segundo++;
			}
			else if ((num>=31)&&(num<=50)){
				 terceiro++;
			 }
			else if (num<=100){
				quarto++;
			}
		}else printf("não é um numero positivo, insira novamente\n\n");
	}while (cont<20);

	printf("primeiro intervalo== %d\nsegundo intervalor== %d\n",primeiro,segundo);
	printf("terceiro intervalo== %d\nquarto intervalor== %d\n",terceiro,quarto);
	
system("pause");	
return 0;
}