#include <stdio.h>

int main(){
	int num1 = 5,num2 = 3;
	int *p1=&num1,*p2=NULL;
	p2 = p1;
	*p2 = ++*p1;
	
	printf("%d %d", *p1,*p2);
	return 0;
}
