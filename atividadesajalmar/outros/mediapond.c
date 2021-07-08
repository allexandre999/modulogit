#include <stdio.h>

int main()
{
	int n1,n2,n3,n4;
	float mediapond;
	printf ("digite um numero: \n");
	scanf ("%d",&n1);
	printf ("digite um numero: \n");
	scanf ("%d",&n2);
	printf ("digite um numero: \n");
	scanf ("%d",&n3);
	printf ("digite um numero: \n");
	scanf ("%d",&n4);	
	mediapond = (n1*1+n2*2+n3*3+n4*4)/10;
	printf ("media ponderada == %.2f\n\n",mediapond);
	
return 0;

}