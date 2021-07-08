#include<stdio.h>
#include<stdlib.h>

void impar (int x);
int par(int x,int soma);

int main(){
	int n1,n2,maior,menor,cont,soma,i,j;

	printf ("digite um numero inteiro\n");
	scanf ("%d",&n1);
	printf ("digite um numero inteiro\n");
	scanf ("%d",&n2);
	
	cont=soma=0;
	i=2;

	if (n1>n2){
		maior=n1;
		menor-n2;
	}else{
		maior=n2;
		menor=n1;
	}

	while (menor<=maior){
		while (i<menor){
			if (menor>2){
				if (menor%i==0){
					cont++;		
				}
			}
		i++;	
		}
	
		if (menor==1) cont++;
		
		if (menor==2){
			//printf ("menor igual a dois\n\n");
			soma=soma+menor;
		}else if (cont==0){
			//printf ("%d e primo \n\n",menor);
			soma=soma+menor;
		         }else if (menor%2==0){
				//printf ("%d e par\n\n",menor);
				soma=soma+menor;
			}
	impar(menor);
	i=2;
	cont=0;	
	menor++;		
	}

printf ("\n\nsoma == %d\n\n", soma);

system("pause");
return 0;
}

void impar(int x){
	int num=x;
	if (num%2)
		printf ("%d e impar\n",num);	
}

/*int par (int x,int soma){
	int num=x;
	int soma=soma;

	if(num%2==0)
		return soma=soma+num;
}*/