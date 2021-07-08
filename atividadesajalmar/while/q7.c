#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,soma;
	i=1;soma=0;
	while (i<101){
		if (i%9!=0){
		soma=soma+i;
		}
	i++;
	}

printf ("soma dos nao divisiveis por 9 == %d\n",soma);

system("pause");
return 0;	
}