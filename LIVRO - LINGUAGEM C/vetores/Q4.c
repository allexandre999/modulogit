#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[6]={1,0,5,-2,-5,7},soma=0,i;
	
	soma =a[0]+a[1]+a[5];
	printf ("soma de %d + %d + %d = %d",a[0],a[1],a[5],soma);
	
	a[4] = 100;
	
	for (i=0;i<6;i++){
		printf ("valores = %d\n",a[i]);
	} 
	
	
	system ("pause");
	return 0;
}
