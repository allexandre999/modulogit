#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n,inter1,inter2,inter3,inter4;
	i=n=inter1=inter2=inter3=inter4=0;

	while (i<20){
		printf ("digite um numero inteiro positivo\n");
		scanf ("%d",&n);
		if (n<0){
			printf ("somente valores inteiros positivos\n\n");
			i--;
		}else if (n<16){
			inter1++;
		         } else if (n<31){
				inter2++;
			   }else if (n<51){
				inter3++;
			           }else if (n<101){
					inter4++;
				    }
			
	i++;
	}

printf ("quantidade de numeros por intervalo:\n");
printf ("intervalor [0.15]: %d\nintervalor  [16,30]: %d\n",inter1,inter2);
printf("intervalor [31,50]: %d\nintervalor [51,100]: %d\n\n",inter3,inter4);	
	
system ("pause");
return 0;
}