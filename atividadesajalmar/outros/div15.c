#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int num3 = atoi(argv[3]);
	int soma = num1+num2+num3;
		
	if (argc==1){
		printf ("repasse  argumentos");
		return 1;
	}
	
	if (soma>15){
		if (soma%15==0){
			printf("1\n");
		}else printf("0\n");
	}else printf ("não é maior do que 15\n");



system ("pause");
return 0;
}