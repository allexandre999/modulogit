#include<stdio.h>
#include<stdlib.h>

void positivo(int x);
int printfatorial(int x);

int main(int argc, char *argv[]){
	int num=atoi(argv[1]);
	positivo(num);
	int x=0,fat=0;
	for (int i=0;i<num;i++){
		printf ("digite um numero inteiro e positivo\n");
		scanf("%d",&x);
		fat=x;
		printf ("fatorial de %d==",x);
		positivo(x);
		printfatorial(x);
		
	}


system ("pause");
return 0;
}


void positivo(int x){
	int num=x;
	if (num<1){
		printf ("entre com um numero inteiro positivo\n");
		return;
	}
}

int printfatorial(int x){
	int fat=x;
	int num=fat;
	for (;num>1;num--){
		fat= fat*(num-1);
	}
	printf ("%d\n\n",fat);
}