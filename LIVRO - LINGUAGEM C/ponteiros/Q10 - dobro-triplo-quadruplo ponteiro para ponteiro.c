//10) Considere a seguinte declara��o: int a,*b,**c,***d. Escreva um programa que leia
//a vari�vel a e calcule e exiba o dobro, o triplo e o qu�druplo desse valor utilizando
//apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
//triplo, e d, o qu�druplo.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,*b,**c,***d;
	
	printf("insira um numero\n");
	scanf("%d",&a);
	b = &a;
	*b = (*b) * 2;
	printf ("dobro = %d\n",*b);
	c = &b;
	printf("triplo = %d\n",(**c)*3);
	d = &c;
	printf("triplo = %d\n",(***d)*4);   
	printf ("primeiro numero = %d\n",a);
	system("pause");
	return 0;
}
