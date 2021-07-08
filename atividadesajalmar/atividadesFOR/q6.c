#include<stdio.h>
#include<stdlib.h>

int main(){
	int soma=0,teste9=0;

	for (int i=1;i<101;i++){
		if (i%9 != 0)
			soma=soma+i;
		/*else {
			teste9=teste9+i;
			printf("teste == %d\ndivisivel== %d\n\n",teste9,i);
		}*/
	}

printf ("Soma == %d\n\n",soma);

system("pause");
return 0;
}