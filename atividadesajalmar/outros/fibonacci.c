#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a,b,x;
	a=0;
	b=1;
	x=0;

	for (int i=0;i<16;i++){
		x=a+b;
		printf ("fibonacci == %d\n",x);
		b=a;
		a=x;
		system ("pause");
	}
	

system ("pause");	
return 0;
}