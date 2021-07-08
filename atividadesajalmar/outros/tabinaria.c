#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char c,x1,x2,x3,x4,x5,x6;
	x1=9;x2=9;x3=9;x4=9;x5=9;x6=9;
	int i, resto,mod, teste,bit1,bit2,bit3,bit4,bit5,bit6,bit7,cont=1;
	bit1=0;bit2=0;bit3=0;bit4=0;bit5=0;bit6=0,bit7=0;
	int y;
	x1 = ++x1+5;
	x2 = (++x2);//>>1;
	x3 = x3<<3;
	x4 = (y=1,y+=2,x4*y);
	x5 = x5 >>1;
	x6 = (((x6>>1) + 1 %2 == 0)?0x10:0x11);

	/*printf ("%d\n",x1);
	printf ("%d\n",x2);	
	printf ("%d\n",x3);
	printf ("%d\n",x4);
	printf ("%d\n",x5);
	printf ("%d\n",x6);*/		
	
	printf ("unsigned char x = 9;     valor de x (binario)     valor de x (decimal)\n");


	//printf ("numero correspondente %d\n",x1);
	i=x1;
	teste=(int)i/2;

	do{
		if (teste^0){
		mod = i%2;
		resto = i / 2;
		i=resto;
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
	
	/*printf ("\n\n");
	printf ("%d  ",bit7);
	printf ("%d  ",bit6);
	printf ("%d  ",bit5);
	printf ("%d  ",bit4);
	printf ("%d  ",bit3);
	printf ("%d  ",bit2);
	printf ("%d  ",bit1);*/

	printf ("x1 = ++x1+5;              %d %d %d %d %d %d %d               %d      \n\n",bit7,bit6,bit5,bit4,bit3,bit2,bit1,x1);		
	//printf ("\n\n");
	
	bit1=0;bit2=0;bit3=0;bit4=0;bit5=0;bit6=0,bit7=0;
	cont=1;
	//printf ("numero correspondente x2==%d\n",x2);
	i=x2;
	teste=(int)i/2;

	do{
		if (teste^0){
		mod = i%2;
		resto = i / 2;
		i=resto;
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
	
	/*printf ("\n\n");
	printf ("%d  ",bit7);
	printf ("%d  ",bit6);
	printf ("%d  ",bit5);
	printf ("%d  ",bit4);
	printf ("%d  ",bit3);
	printf ("%d  ",bit2);
	printf ("%d  ",bit1);*/

	printf ("x2 = (++x2);//>>1;         %d %d %d %d %d %d %d               %d      \n\n",bit7,bit6,bit5,bit4,bit3,bit2,bit1,x2);
	//printf ("\n\n");
	
	bit1=0;bit2=0;bit3=0;bit4=0;bit5=0;bit6=0,bit7=0;
	cont=1;
	//printf ("numero correspondente x3==%d\n",x3);
	i=x3;
	teste=(int)i/2;

	do{
		if (teste^0){
		mod = i%2;
		resto = i / 2;
		i=resto;
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
	
	/*printf ("\n\n");
	printf ("%d  ",bit7);
	printf ("%d  ",bit6);
	printf ("%d  ",bit5);
	printf ("%d  ",bit4);
	printf ("%d  ",bit3);
	printf ("%d  ",bit2);
	printf ("%d  ",bit1);*/

	printf ("x3 = x3<<3;               %d %d %d %d %d %d %d                %d      \n\n",bit7,bit6,bit5,bit4,bit3,bit2,bit1,x3);
	//printf ("\n\n");
	
	bit1=0;bit2=0;bit3=0;bit4=0;bit5=0;bit6=0,bit7=0;
	cont=1;
	//printf ("numero correspondente x4==%d\n",x4);
	i=x4;
	teste=(int)i/2;

	do{
		if (teste^0){
		mod = i%2;
		resto = i / 2;
		i=resto;
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
	
	/*printf ("\n\n");
	printf ("%d  ",bit7);
	printf ("%d  ",bit6);
	printf ("%d  ",bit5);
	printf ("%d  ",bit4);
	printf ("%d  ",bit3);
	printf ("%d  ",bit2);
	printf ("%d  ",bit1);*/
	
	printf ("x4 = (y=1,y+=2,x4*y);       %d %d %d %d %d %d %d               %d      \n\n",bit7,bit6,bit5,bit4,bit3,bit2,bit1,x4);

	//printf ("\n\n");
	
	bit1=0;bit2=0;bit3=0;bit4=0;bit5=0;bit6=0,bit7=0;
	cont=1;
	//printf ("numero correspondente x5==%d\n",x5);
	i=x5;
	teste=(int)i/2;

	do{
		if (teste^0){
		mod = i%2;
		resto = i / 2;
		i=resto;
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
		teste = resto;
		}
	}while (i>0);
	
	/*printf ("\n\n");
	printf ("%d  ",bit7);
	printf ("%d  ",bit6);
	printf ("%d  ",bit5);
	printf ("%d  ",bit4);
	printf ("%d  ",bit3);
	printf ("%d  ",bit2);
	printf ("%d  ",bit1);*/

	printf ("x5 = x5 >>1;               %d %d %d %d %d %d %d                 %d      \n\n",bit7,bit6,bit5,bit4,bit3,bit2,bit1,x5);
	//printf ("\n\n");

	bit1=0;bit2=0;bit3=0;bit4=0;bit5=0;bit6=0,bit7=0;
	cont=1;
	//printf ("numero correspondente x6==%d\n",x6);
	i=x6;
	teste=(int)i/2;

	do{
		if (teste^0){
		mod = i%2;
		resto = i / 2;
		i=resto;
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
		teste = resto;
		}
	}while (i>0);
	
	/*printf ("\n\n");
	printf ("%d  ",bit7);
	printf ("%d  ",bit6);
	printf ("%d  ",bit5);
	printf ("%d  ",bit4);
	printf ("%d  ",bit3);
	printf ("%d  ",bit2);
	printf ("%d  ",bit1);*/

	printf ("x6=(((x6>>1)+1%2==0)?0x10:0x11);   %d %d %d %d %d %d %d          %d      \n\n",bit7,bit6,bit5,bit4,bit3,bit2,bit1,x6);
	//printf ("\n\n");

system ("pause");
return 0;


}