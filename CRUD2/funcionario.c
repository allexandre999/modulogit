//
// Created by joao on 05/05/2021.
//
#include <stdio.h>
#include <string.h>
#include "funcionario.h"

// Variaveis Globais
float codFuncionario[10]; //Essa variavel precisa ser acessada na funcao de dependentes;
static char nomeFuncionario[10][100];
static char rgFuncionario[10][20];
static char cpfFuncionario[10][20];
static char enderecoFuncionario[10][100];
static char tpsangue[10][3];
static char salarioFuncionario[10][10];
static char nascimentoFuncionario[10][13];
int ctrlFunc=0;

//Funcoes para insercao
void inserirCodigoFuncionario();
static void inserirNome();
static void inserirRG();
static void inserirCPF();
static void inserirEndereco();
static void inserirTP();
static void inserirSalario();
static void inserirNascimento();

//Funcoes para alteracao
static void alterarNome(int);
static void alterarRG(int);
static void alterarEndereco(int);
static void alterarTPS(int);
static void alterarSalario(int);
static void alterarNascimento(int);

void inserirFuncionario(){
    //char vet[100];
    if (ctrlFunc == 0) {
        for (int j = 0; j < 10; j++) {
            strcpy(nomeFuncionario[j], "\0");
            strcpy(rgFuncionario[j], "\0");
            strcpy(cpfFuncionario[j], "\0");
            strcpy(enderecoFuncionario[j], "\0");
            strcpy(tpsangue[j], "\0");
            strcpy(salarioFuncionario[j], "\0");
            strcpy(nascimentoFuncionario[j], "\0");
        }
    }

    inserirNome();
    inserirRG();
    inserirCPF();
    printf("CPF inserido == %s\n",cpfFuncionario[ctrlFunc]);
    inserirEndereco();
    inserirTP();
    inserirSalario();
    inserirNascimento();
    inserirCodigoFuncionario();
    ctrlFunc++;
    printf("VALOR DO INDICE ALTERADO %d\n\n", ctrlFunc);
}

void inserirCodigoFuncionario(){
    codFuncionario[ctrlFunc]= (float)(ctrlFunc + 1.0) / 1000;
}

void listarOrdenado(){

    if (ctrlFunc == 1){
        printf ("Só existe 1 funcionario cadastrado\n");
        listarFuncionarios();
        return;
    }

    if (ctrlFunc > 1) {

        float vetcod[10];
        char vetnome[10][100];
        char vetrg[10][20];
        char vetcpf[10][20];
        char vetendereco[10][100];
        char vettpsangue[10][3];
        char vetsalario[10][10];
        char vetnascimento[10][13];
        char auxchar[100];
        float auxfloat;

        for (int j=0; j < ctrlFunc; j++) {
            vetcod[j] = codFuncionario[j];
            strcpy(vetnome[j], nomeFuncionario[j]);
            strcpy(vetrg[j], rgFuncionario[j]);
            strcpy(vetcpf[j], cpfFuncionario[j]);
            strcpy(vetendereco[j], enderecoFuncionario[j]);
            strcpy(vettpsangue[j], tpsangue[j]);
            strcpy(vetsalario[j], salarioFuncionario[j]);
            strcpy(vetnascimento[j], nascimentoFuncionario[j]);
        }

        for (int k=0; k < ctrlFunc; k++) {
            for (int j=0 ; j < ctrlFunc - 1 ; j++) {
                if (strcmp(vetnome[j+1], vetnome[j]) < 0) {

                    auxfloat = vetcod[j];
                    vetcod[j] = vetcod[j+1];
                    vetcod[j+1] = auxfloat;


                    strcpy(auxchar,vetnome[j]);
                    strcpy(vetnome[j], vetnome[j+1]);
                    strcpy(vetnome[j+1], auxchar);

                    strcpy(auxchar,vetrg[j]);
                    strcpy(vetrg[j], vetrg[j+1]);
                    strcpy(vetrg[j+1], auxchar);

                    strcpy(auxchar,vetcpf[j]);
                    strcpy(vetcpf[j], vetcpf[j+1]);
                    strcpy(vetcpf[j+1], auxchar);

                    strcpy(auxchar,vetendereco[j]);
                    strcpy(vetendereco[j], vetendereco[j+1]);
                    strcpy(vetendereco[j+1], auxchar);

                    strcpy(auxchar,vettpsangue[j]);
                    strcpy(vettpsangue[j], vettpsangue[j+1]);
                    strcpy(vettpsangue[j+1], auxchar);

                    strcpy(auxchar,vetsalario[j]);
                    strcpy(vetsalario[j], vetsalario[j+1]);
                    strcpy(vetsalario[j+1], auxchar);

                    strcpy(auxchar,vetnascimento[j]);
                    strcpy(vetnascimento[j], vetnascimento[j+1]);
                    strcpy(vetnascimento[j+1], auxchar);

                }
            }
        }

        for (int j=0; j < ctrlFunc; j++){
            printf("\nNome: %s\n",vetnome[j]);
            printf("Codigo:  %.3f\n",vetcod[j]);
            printf("RG: %s\n",vetrg[j]);
            printf("CPF: %s\n",vetcpf[j]);
            printf("Endereco: %s\n",vetendereco[j]);
            printf("Tipo Sanguineo: %s\n",vettpsangue[j]);
            printf("Salario: %s\n",vetsalario[j]);
            printf("Nascimento: %s\n",vetnascimento[j]);
        }

    }else{
        printf("\nAinda nao ha funcionarios inseridos\n\n");
    }
}

void alterarDados(){
    int teste=0;
    if (ctrlFunc > 0){ //se ctrlFunc>0 entao ja ha funcionarios inseridos;
        float x=(float)0.0;
        printf("Insira o Codigo do Funcionario:\n");
        scanf("%f",&x);

        if (x==0){
            printf("Codigo Igual a 0 INVALIDO, Tente Novamente Com Um Codigo Valido\n\n");
            return;
        }

        for (int j=0; j <= ctrlFunc; j++){
            if (codFuncionario[j]==x){
                alterarNome(j);
                printf("Nome: %s\n",nomeFuncionario[j]);
                alterarRG(j);
                printf("RG: %s\n",rgFuncionario[j]);
                alterarEndereco(j);
                printf("Endereco: %s\n",enderecoFuncionario[j]);
                alterarTPS(j); // alterar tipo sanguineo
                printf("Tipo Sanguineo: %s\n",tpsangue[j]);
                alterarSalario(j);
                printf("Salario: %s\n",salarioFuncionario[j]);
                alterarNascimento(j);
                printf("Data de Nascimento: %s\n",nascimentoFuncionario[j]);
                teste=teste+1;
                break;
            }
        }

        if (teste==0){
            printf("Este Codigo Nao Existe, Tente Novamente Com Um Codigo Valido\n\n");
            return;
        }else if (teste>1){
            printf("HOUVE ALGUM ERRO DE LOGICA E EXISTE MAIS DE UM CODIGO REPETIDO");
        }

    }else {
        printf("Ainda Nao Existem Funcionarios Para Alterar\n\n");
    }

}

void mostrarDados(){
    int teste=0;
    if (ctrlFunc > 0){ //se ctrlFunc>0 entao ja ha funcionarios inseridos;
        float x=(float)0.0;
        printf("Insira o Codigo do Funcionario:\n");
        scanf("%f",&x);

        if (x==0){
            printf("Codigo Igual a 0 INVALIDO, Tente Novamente Com Um Codigo Valido\n\n");
            return;
        }

        for (int j=0; j <= ctrlFunc; j++){
            if (codFuncionario[j]==x){
                printf("Nome: %s\n",nomeFuncionario[j]);
                printf("Codigo: %.3f\n",codFuncionario[j]);
                printf("RG: %s\n",rgFuncionario[j]);
                printf("CPF: %s\n",cpfFuncionario[j]);
                printf("Endereco: %s\n",enderecoFuncionario[j]);
                printf("Tipo Sanguineo: %s\n",tpsangue[j]);
                printf("Salario: %s\n",salarioFuncionario[j]);
                printf("Data de Nascimento: %s\n",nascimentoFuncionario[j]);
                teste=teste+1;
                break;
            }
        }

        if (teste==0){
            printf("Este Codigo Nao Existe, Tente Novamente Com Um Codigo Valido\n\n");
            return;
        }else if (teste>1){
            printf("HOUVE ALGUM ERRO DE LOGICA E EXISTE MAIS DE UM CODIGO REPETIDO");
        }

    }else {
        printf("Ainda Nao Existem Funcionarios Para Mostrar\n\n");
    }

}



void listarFuncionarios(){
    if (ctrlFunc > 0) {
        for (int j = 0; j < ctrlFunc; j++) {
            if (codFuncionario[j] == 0.0) {
                continue;
            }
            printf("\nNOME: %s\n", nomeFuncionario[j]);
            printf("CODIGO: %.3f\n", codFuncionario[j]);
            printf("RG: %s\n", rgFuncionario[j]);
            printf("CPF: %s\n", cpfFuncionario[j]);
            printf("ENDERECO: %s\n", enderecoFuncionario[j]);
            printf("TIPO SANGUINEO: %s\n", tpsangue[j]);
            printf("SALARIO: %s\n", salarioFuncionario[j]);
            printf("NASCIMENTO: %s\n", nascimentoFuncionario[j]);
        }
    }else{
        printf("\nAinda nao ha funcionarios inseridos\n\n");
    }
}

void excluirFuncionario(){
    int teste=0;

    if (ctrlFunc > 0){ //se ctrlFunc>0 entao ja ha funcionarios inseridos;
        float x=(float)0.0;
        printf("Insira o Codigo do Funcionario:\n");
        scanf("%f",&x);
        if (x==0){
            printf("Codigo Igual a 0 INVALIDO, Tente Novamente Com Um Codigo Valido\n\n");
            return;
        }
        for (int j=0; j < ctrlFunc; j++){
            if (codFuncionario[j]==x){
                codFuncionario[j]=(float)0;
                printf("Funcionario Apagado Com Sucesso\n");
                teste=teste+1;
            }
        }
        if (teste==0){
            printf("Este Codigo Nao Existe, Tente Novamente Com Um Codigo Valido\n\n");
        }else if (teste>1){
            printf("HOUVE ALGUM ERRO DE LOGICA E EXISTE MAIS DE UM CODIGO REPETIDO");
        }

    }else {
        printf("Ainda Nao Existem Funcionarios Para Excluir\n\n");
    }
}


static void inserirNome(){

    char vet[100];
    printf("insira o nome do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(nomeFuncionario[ctrlFunc], vet);
    printf("nome inserido == %s\n",nomeFuncionario[ctrlFunc]);

    if (strlen(nomeFuncionario[ctrlFunc]) == 0){
        printf("nome nao inserido, insira um nome\n");
        inserirNome();
    }
}

static void alterarNome(int j){
    char vet[100];
    printf("Insira o Nome do Funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(nomeFuncionario[j],vet);
    printf("nome inserido == %s\n",nomeFuncionario[j]);

    if (strlen(nomeFuncionario[j])==0){
        printf("Nome Nao Inserido.\n");
        alterarNome(j);
    }
}

static void inserirRG(){
    char vet[20];
    printf("insira o RG do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(rgFuncionario[ctrlFunc], vet);
    printf("RG inserido == %s\n",rgFuncionario[ctrlFunc]);
}

static void alterarRG(int j){
    char vet[20];
    printf("insira o RG do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(rgFuncionario[j],vet);
    printf("RG inserido == %s\n",rgFuncionario[j]);
}

static void inserirCPF(){
    char vet[20];
    strcpy(vet,"\0");
    printf("insira o CPF do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(cpfFuncionario[ctrlFunc], vet);

    if(ctrlFunc > 0){
        for (int j=0; j < ctrlFunc; j++){
            if(strcmp(cpfFuncionario[j],vet)==0){
                printf("CPF ja cadastrado.\n");
                //strcpy(vet,vet);
                inserirCPF();
            }
        }
    }

    if (strlen(vet)==0){
        printf("CPF nao inserido.\n");
        //strcpy(vet,vet);
        inserirCPF();
    }

}

static void inserirEndereco(){
    char vet[100];
    printf("insira o Endereco do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(enderecoFuncionario[ctrlFunc], vet);
    printf("RG inserido == %s\n",enderecoFuncionario[ctrlFunc]);
}

static void alterarEndereco(int j){
    char vet[100];
    printf("insira o Endereco do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(enderecoFuncionario[j],vet);
    printf("RG inserido == %s\n",enderecoFuncionario[j]);
}

//TP == Tipo Sanguineo
static void inserirTP(){
    char vet[3];
    printf("insira o Tipo Sanguineo do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(tpsangue[ctrlFunc], vet);
    printf("Tipo Sanguineo inserido == %s\n",tpsangue[ctrlFunc]);
}

static void alterarTPS(int j){
    char vet[3];
    printf("insira o Tipo Sanguineo do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(tpsangue[j],vet);
    printf("Tipo Sanguineo inserido == %s\n",tpsangue[j]);
}

static void inserirSalario(){
    char vet[10];
    printf("insira o salario do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(salarioFuncionario[ctrlFunc], vet);
    printf("salario inserido == %s\n",salarioFuncionario[ctrlFunc]);

    if (strlen(salarioFuncionario[ctrlFunc]) == 0){
        printf("salario nao inserido, insira um salario\n");
        inserirSalario();
    }
}

static void alterarSalario(int j){
    char vet[10];
    printf("insira o salario do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(salarioFuncionario[j],vet);
    printf("salario inserido == %s\n",salarioFuncionario[j]);

    if (strlen(salarioFuncionario[j])==0){
        printf("salario nao inserido, insira um salario\n");
        alterarSalario(j);
    }
}

static void inserirNascimento(){
    char vet[10];
    printf("insira o nascimento do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(nascimentoFuncionario[ctrlFunc], vet);
    printf("nascimento inserido == %s\n",nascimentoFuncionario[ctrlFunc]);

    if (strlen(nascimentoFuncionario[ctrlFunc]) == 0){
        printf("nascimento nao inserido, insira o nascimento\n");
        inserirNascimento();
    }
}

static void alterarNascimento(int j){
    char vet[10];
    printf("insira o nascimento do funcionario\n");
    fflush(stdin);
    gets(vet);
    fflush(stdin);
    strcpy(nascimentoFuncionario[j],vet);
    printf("nascimento inserido == %s\n",nascimentoFuncionario[j]);

    if (strlen(nascimentoFuncionario[j])==0){
        printf("nascimento nao inserido, insira o nascimento\n");
        alterarNascimento(j);
    }
}