#include <stdio.h>

int main()
{
	int i= 2147483647;
	short int a = 32767;
	char c = 127;
	i=i+1;
	printf ("inteiro == %d\n\n",i);
	//foi necessário o valor 2147483647 + 1 para extrapolar o int
	a=a+1;
	printf ("inteiro curto == %d\n\n",a);
	//32767 + 1 para extrapolar o short int
	c=c+1;
	printf ("char == %d ",c);
	printf ("char == %c\n\n",c);
	c=-5;
	printf ("char == %d ",c);
	printf ("char == %c\n\n",c);
	
return 0;

}