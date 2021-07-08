//3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
//e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro
//positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente,
//dessa estrutura. Solicite também que o usuário digite os dados desse vetor
//dentro da função.

#include <stdio.h>
#include <stdlib.h>

struct cadastro{
	   char nome[50];
	   int idade;
	   char endereco[50];	  	  
};

void leiaPessoa(int num,struct cadastro *p);

int main(){
	int num=0;
	printf ("quantas pessoas quer cadastrar?\n");
	scanf("%d",&num);
	
	struct cadastro *pessoa = malloc(num*sizeof(struct cadastro));
	
	leiaPessoa(num,pessoa);
	
	free(pessoa);
return 0;
system("pause");
}

void leiaPessoa(int num,struct cadastro *p){
	 int i;
	 
	 for (i=0;i<num;i++){
	 	 printf ("insira o nome\n");
	 	 fflush(stdin);
  		 gets(p[i].nome);
	 	 printf ("insira a idade\n");
	 	 scanf("%d",&p[i].idade);
	 	 printf ("insira o endereco\n");
	 	 fflush(stdin);
  		 gets(p[i].endereco);
	 }
	 
	 
	 for (i=0;i<num;i++){
	 	 printf ("nome = %s\n",p[i].nome);
	 	 printf ("idade = %d\n",p[i].idade);
	 	 printf ("endereco = %s\n",p[i].endereco);
	 }
	 

}
