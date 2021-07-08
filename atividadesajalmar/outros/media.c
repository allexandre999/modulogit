#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2,n3,n4;
	float media;
	printf ("digite um numero: \n");
	scanf ("%d",&n1);
	printf ("digite um numero: \n");
	scanf ("%d",&n2);
	printf ("digite um numero: \n");
	scanf ("%d",&n3);
	printf ("digite um numero: \n");
	scanf ("%d",&n4);	
	media = (n1+n2+n3+n4)/4.0;
	printf ("media == %f\n\n",media);
	system ("pause");
	
return 0;

}