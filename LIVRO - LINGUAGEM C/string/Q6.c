#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
		char escrita[100],letra,vogal[6]={"aeiou"};
		int tam,i;
		
		setbuf(stdin,NULL);
		printf("digite uma ou mais palavras::\n");
		gets(escrita);
		tam = strlen(escrita);
		printf("escolha uma letra para substituir as vogais da sentenca anterior:\n");
		setbuf(stdin,NULL);
		scanf("%c",&letra);
		
		int j;
			for (i=0;i<tam;i++){
				for(j=0;j<5;j++){		 
			        if (escrita[i]==vogal[j]){			 
					    escrita[i]=letra;	  
		  			}
			    }
			}
		
		system ("pause");
		//system ("cls");
		printf ("\n\n");
		printf ("%s\n",escrita);
		printf ("\n\n");
system ("pause");
return 0;	
}
