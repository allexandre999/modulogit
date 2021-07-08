#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if(argc==0){
		printf ("digite um argumento");
		return 1;
	} 

	if (!(num1%num2)){
		printf ("1\n");
	}else
		printf ("0\n");



system ("pause");
return 0;
}