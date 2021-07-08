//6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões
//da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
//que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
//caso contrário.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contemValor(int num,int *p1,int l,int c);

int main(){
	int l=0,c=0,x=0,boole=-1;
	do{
	   printf("insira um valor inteiro positivo para a linha da matriz\n");
	   scanf("%d",&l);
	}while(l<1);
	do{
	   printf("insira um valor inteiro positivo para a coluna da matriz\n");
	   scanf("%d",&c);
	}while(c<1);
	
	int *vet = malloc(l*c*sizeof(int));
	
	if (vet==NULL){
	   printf ("ERRO: memoria não disponivel\n");
	   system("pause");
	   exit(1);
	}
	
	int *p = vet;
	srand(time(NULL));
	int i,j;
		
	for (i=0;i<l;i++){
		for (j=0;j<c;j++){
			//p =p+i+j;
			p[i*l+j] = rand()%25;
			printf("valor = %d\n",p[i*l+j]);
		}
	}
	
	printf ("insira um valor inteiro para teste\n");
	scanf("%d",&x);
	
	boole = contemValor(x,p,l,c);
	
	if (boole){
	   printf("%d esta contido no conjunto\n",x);
	}else
		 printf("%d nao esta contido no conjunto\n",x);
	
//	printf("\n");
//	p=vet;
//	
//	for (i=0;i<l;i++){
//		for (j=0;j<c;j++){
//			p=p+i+j;
//			printf("valor = %d\n",*p);
//		}
//	}	

free(vet);
system("pause");
return 0;
}


int contemValor(int num,int *p,int l, int c){
	int i,j;
	
	for (i=0;i<l;i++){
		for (j=0;j<c;j++){
			if(p[i*l+j]==num){
				return 1;			  
			}	
		}
	}
	return 0;
}

