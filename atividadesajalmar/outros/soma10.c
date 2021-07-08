#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	float num = atof(argv[1]);
	if(argc==1){
		printf ("passe algum argumento\n");
		return 1;
	}

	if ((num>=1)&&(num<=10)){
		num = num/4;
	}else
		num= num+4;

	printf ("num==%f\n",num);



system("pause");
return 0;
}