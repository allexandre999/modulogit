#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	
	int num,par,impar;
	par=0;impar=par;
	num=atoi(argv[1]);

	for (int i=1;i<=num;i++){
		if (i%2){
			impar++;
		}else{
			par++;
		}
	}

	printf ("%d numeros pares\n%d numeros impares\n",par,impar);


system("pause");
return 0;
}