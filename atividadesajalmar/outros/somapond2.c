#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int soma,cont;
	if(argc==1){
		printf ("nenhum argumento passado");
		return 1;
	}
			
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);

	for(int i=num1;i<=num2;i++){
		cont=0;
		for (int c=2;c<i;c++){
			if (i%c==0){
				cont++;
			}
		}
		if(cont==0){
			printf ("%d e primo!\n",i);
			soma=soma+i*3;
		}else if((i%2)&&(cont)){
			soma=soma+i*2;	
		}else{
			soma=soma+i;
		}
	}

printf ("soma ponderada == %d",soma);

system ("pause");
return 0;
}