//2) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
//deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
//Escreva um programa que mostre o tamanho em byte dessa estrutura.

#include <stdio.h>
#include <stdlib.h>

struct controle{
	   int matricula;
	   char nome[50];
	   float notas[3];
};


int main(){
	struct controle aluno;
	
	printf("tamanho da estrutura aluno = %d\n",sizeof(aluno));
	
	system("pause");
	return 0;
}
