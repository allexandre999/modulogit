//7) Elabore uma fun��o que receba duas strings como par�metros e verifique se a segunda
//string ocorre dentro da primeira. Use aritm�tica de ponteiros para acessar
//os caracteres das strings.

#include <stdio.h>
#include <stdlib.h>

void ocorrenciaString(char *c1,char *c2);

int main(){
	char nome1[50],nome2[50];
	
	printf ("insira uma string\n");
	gets(nome1);
	printf ("insira uma string\n");
	gets(nome2);
	ocorrenciaString(nome1,nome2);


system ("pause");
return 0;
}

void ocorrenciaString(char *c1,char *c2){
	 char *p=NULL;
	 
	 p = strstr(c1,c2);
	 
	 if (p!=NULL){
  	 	int i;
		int tam=strlen(c2);
	 	for (i=0;i<tam;i++){
		 	printf("%c",*(p+i));
		 }
	 }
	 printf("\n");
}
