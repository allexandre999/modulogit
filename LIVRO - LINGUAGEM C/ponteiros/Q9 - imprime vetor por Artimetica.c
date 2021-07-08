//9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h>
 
void imprimeVetor(int *v); 
int main(){
	int nomes[5],i;
	for (i=0;i<5;i++){
		printf ("insira um numero\n");
		scanf("%d",&nomes[i]);
	}
	imprimeVetor(nomes);
	
	system("pause");
	return 0;
}


void imprimeVetor(int *v){
	 int tam = (int)sizeof(*v);
	 int i;
	 printf ("tamanho  = %d\n",tam);
	 for (i=0;i<5;i++){
	 	 printf ("numero : %d\n",*(v+i));
	 }
}
