#include <stdio.h>
#include <stdlib.h>
#include <string.h>


////ESTRUTURAS
//enum disciplinas{
//	  IP,ED,CALC,LM
//};

struct alunos{
    float matricula;
    char nome[50];
    float notas[4][3];
};

//VARIAVEIS PRINCIPAIS
struct alunos aluno[10];
char mat[4][5];

//VARIAVEIS CONSTANTES
const int tammedia = 2; //indice da media
const int tamnota = 2;  //limite de notas
const int tamluno = 3; //limite de alunos
const int tampina = 4;  //limite de disciplinas


//ESCOPOS DE FUNCOES
void cadastrarAlunos();
void listarAlunos();

int main(){
    strcpy(mat[0],"IP");
    strcpy(mat[1],"ED");
    strcpy(mat[2],"CALC");
    strcpy(mat[3],"LM");

    cadastrarAlunos();
    system("pause");
    system("cls");
    listarAlunos();


    system("pause");
    return 0;
}

void cadastrarAlunos(){
    int i,k,j;
    for (i=0;i<tamluno;i++){
        aluno[i].matricula = (float)(i+1)/1000;
        printf ("insira o nome do aluno\n");
        fflush(stdin);
        gets(aluno[i].nome);
        printf("matricula = %.3f\n",aluno[i].matricula);
        for (j=0;j<tampina;j++){
            //aluno[i].notas[j][tammedia] = 0;
            for (k=0;k<tamnota;k++){
                printf("MATERIA %s : insira a nota %d do aluno(a) %s\n",mat[j],k+1,aluno[i].nome);
                scanf("%f",&aluno[i].notas[j][k]);
                aluno[i].notas[j][tammedia] = aluno[i].notas[j][tammedia] + aluno[i].notas[j][k];
            }
            aluno[i].notas[j][tammedia] = ((float)aluno[i].notas[j][tammedia])/tamnota;
        }
    }
}

void listarAlunos(){
    int i,k,j;
    for (i=0;i<tamluno;i++){
        printf ("ALUNO(o): %s\n",aluno[i].nome);
        printf ("Matricula: %.3f\n",aluno[i].matricula);
        for (j=0;j<tampina;j++){
            printf("MATERIA %s:\n",mat[j]);
            for (k=0;k<tamnota;k++){
                printf("NOTA - %d = %.2f\n",k+1,aluno[i].notas[j][k]);
            }
            printf ("MEDIA = %.2f\n",aluno[i].notas[j][tammedia]);
            printf ("\n");
        }
        printf("\n\n\n");
    }
}

