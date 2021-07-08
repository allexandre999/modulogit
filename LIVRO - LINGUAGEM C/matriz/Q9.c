#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][3],i,j,vet[3];
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			matriz[i][j]= i+j;
		}
	}
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<3;i++){
		printf("%d ",vet[i]=0);
	}
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			vet[i]= vet[i] + matriz[j][i];
		}
	}
	
	printf("\n\n");
	for (i=0;i<3;i++){
		printf("%d ",vet[i]);
	}
	
	
	
system("pause");
return 0;
}
