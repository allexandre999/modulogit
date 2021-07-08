#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,n2,fat;
	printf ("entre com um valor inteiro positivo\n");
	scanf("%d",&n);
	i=0;
	
	while (n>0){
		printf ("escreva um numero para saber seu fatorial\n");
		scanf("%d",&n2);
		fat=n2;
		while (n2>=1){
			printf ("%d ",n2);
			if (n2==1){
				
			}else{
				fat=fat*(n2-1);
			}
		n2--;
		}
	printf(" = %d\n\n",fat);	
	n--;
	}


system("pause");
return 0;
}