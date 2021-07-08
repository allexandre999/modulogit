#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char c;
	int i, resto,mod, teste,bit1,bit2,bit3,bit4,bit5,bit6,bit7,cont=1;
	
	printf ("digite uma letra\n");
	scanf ("%c",&c);
	i=c;
	printf ("numero correspondente == %d\n",i);
	
	teste=(int)i/2;

	do{
		if (teste^0){
		mod = i%2;
		resto = i / 2;
		i=resto;
		//printf (" %d ",mod);
		//printf ("%d", mod << teste);
		//teste-1;
		switch (cont){
			case 1: bit1 = mod; break;
			case 2: bit2 = mod; break;
			case 3: bit3 = mod; break;
			case 4: bit4 = mod; break;
			case 5: bit5 = mod; break;
			case 6: bit6 = mod; break;
			case 7: bit7 = mod; break;
		}
		cont = cont+1;
		}
	}while (i>0);
	
	//printf ("\nconsiderar o bit mais significativo da direita para a esqueda");

	printf ("\n\n");
	printf ("%d  ",bit7);
	printf ("%d  ",bit6);
	printf ("%d  ",bit5);
	printf ("%d  ",bit4);
	printf ("%d  ",bit3);
	printf ("%d  ",bit2);
	printf ("%d  ",bit1);

	
	printf ("\n\n");

system ("pause");
return 0;


}