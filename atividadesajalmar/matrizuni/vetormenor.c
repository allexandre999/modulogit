#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int num[10];
	int menor,contmenor;
	for (int i=0;i<10;i++){
		printf ("digite um numero: \n");
		scanf ("%d",&num[i]);
	}
	
	menor=num[0];
	contmenor=0;
	for (int i=1;i<9;i++){
		if (num[i]<menor){
		menor=num[i];
		contmenor=i;
		printf ("menor == %d\nindice == %d\n\n",menor,contmenor);
		}
	}

	printf ("\n\n\n\nmenor == %d\nindice == %d\n\n",menor,contmenor);		

system ("pause");
return 0;
}