#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char palavra[30],polidromo[30];
	int i,j;
	j=0;
	printf ("digite uma palavra:\n");
	gets(palavra);
	//polidromo[30]="abreu";
	for (i=strlen(palavra)-1;i>=0;i--){
		polidromo[j]=palavra[i];
		j++;
	}
	polidromo[j]='\0';
	printf ("palavra: %s \n",palavra);
	printf ("polidromo: %s \n",polidromo);
	
	if (strcmp(palavra,polidromo)==0){
 	   printf ("a palavra %s e um polidromo\n",polidromo);
	}else {
		  printf ("a palavra %s nao e um polidromo\n",palavra);
 		  }
 		  
	system ("pause");
	return 0;
}
