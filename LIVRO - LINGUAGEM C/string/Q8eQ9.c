#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str1[100],str2[100];
	int tam1,tam2,i,j,k,cont2,contida2;
	cont2=0;
	contida2=0;
	
	printf ("digite uma string: \n");
	setbuf(stdin,NULL);
	gets(str1);
	printf("digite uma palavra: \n");
	gets(str2);
	tam1=strlen(str1);
	tam2=strlen(str2);
	
	for (i=0;i<tam1;i++){
		//printf("primeiro for\n\n");
		if (str1[i]==str2[0]){
		   //printf("primeiro if\n\n");
			k=i;
		   for (j=0;j<tam2;j++){
		   	//printf("segundo for\n\n");
 	   	   	   if (str2[j]==str1[k]){
 	   	   	   	//printf("segundo if\n\n");
				    cont2++;
				    k++;
			  	}
		   }
		   if (cont2==tam2){
		   	  contida2++;
		   	  //printf("terceiro if\n\n");
		   }
		   k=0;
		   cont2=0;
		}
	}
//printf ("passei direto\n\n");
	if (contida2>0){
	   printf ("a string: \"%s\" esta contida %d vezes na \nSTRING: \"%s\"\n\n",str2,contida2,str1);
	}

system("pause");
return 0;	
}
