#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int num = atoi(argv[1]);
	int x=0;
	if (argc==1){
		printf("declare um argumento inteiro");
		return 1;
	}
	/*if (num<5){
		printf ("valor esperado maior ou igul a 5");
		return 1;
	}*/

	if (num%5==0){
		num=num*4;		
	}else 
		num=num*3;

	printf ("num==%d",num);


system ("pause");
return 0;
}