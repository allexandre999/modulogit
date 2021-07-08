#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=1,b=2,c=3;
float x;

x = ++a/a&&!b&&c||b||-a+4*c>!!b;

printf ("z==%f\n\n",x);  


system ("pause");
return 0;
}