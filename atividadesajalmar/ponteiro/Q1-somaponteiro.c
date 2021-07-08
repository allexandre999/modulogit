#include<stdio.h>

int main(){
	int num1 = 5,num2 = 3;
	int *p1 = &num1, *p2 = &num2;

	printf ("%d", ++*p1 + *p2++);
	return 0;
}
