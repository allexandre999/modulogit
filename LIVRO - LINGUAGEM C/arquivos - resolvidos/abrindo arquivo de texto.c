#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *pf;
	pf = fopen("C:\\Users\\joao\\Documents\\LIGUAGEM C\\LIVRO - LINGUAGEM C\\arquivos - resolvidos\\teste.bin","r+");
	
	if (pf == NULL){
	   printf ("Erro na abertura do arquivo\n");
	   pf = fopen("C:\\Users\\joao\\Documents\\LIGUAGEM C\\LIVRO - LINGUAGEM C\\arquivos - resolvidos\\teste.bin","w+");
	   printf("agora o arquivo foi criado\n");
	}

	
	
	fclose(pf);
system("pause");
return 0;
}
