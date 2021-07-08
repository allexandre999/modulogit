#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[10],maior,posicao;
	
	for (int i=0;i<10;i++){
		printf ("digite um numero\n");
		scanf ("%d",&num[i]);
	}

	maior=num[0];
	posicao=0;

	for (int i=0;i<10;i++){
		if (maior<num[i]){
			maior=num[i];
			posicao=i;
		}
	}

printf ("maior == %d\nposicao == %d\n\n",maior,posicao);
	
system ("pause");		
return 0;
}