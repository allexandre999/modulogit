//
// Created by joao on 28/05/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastro.h"

//Funcoes Auxiliares de Inserção
void inserirNome();
void inserirTelefone();
void inserirRG();
void inserirCPF();
void inserirNascimento();
void inserirCodigo();

//Funcoes auxiliares de alteracao
void alterarNome(int i);
void alterarTelefone(int i);
void alterarRG(int i);
void alterarNasciento(int i);

//Variaveis auxiliares
const int tamVC = 50; //VC = Vetor Cliente
int ind=0;

//Estrutura com as variaveis principais
struct cadastro {
    float codigo;
    char nome[50];
    char telefone[14];
    char rg[16];
    char cpf[16];
    char nascimento[11];

};

//vetor cliente da estrutura cadastro
struct cadastro cliente[50];

//MENU CADASTRO
void menuCadastro(){
    int op=0;

    do {
        printf("0 - Encerrar Programa\n");
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Alterar Cliente\n");
        printf("3 - Excluir Cliente\n");
        printf("4 - Listar Clientes\n");
        printf("5 - Pesquisar Cliente\n");
        scanf ("%d",&op);

        if (op==0){
            exit(0);
        }
        if (op==1){
            cadastrar();
        }
        if (op==2){
            alterarCadastro();
        }
        if (op==3){
            excluirCadastro();
        }
        if (op==4){
            listarTodos();
        }
        if (op==5){
            pesquisar();
        }
    }while((int)op!=0);
}


//Inicio das funcoes principais
void cadastrar(){

    if (ind==0){
        for (int i=0;i<tamVC;i++){
            cliente[i].codigo = 0;
            strcpy(cliente[i].nome,"\0");
            strcpy(cliente[i].telefone,"\0");
            strcpy(cliente[i].rg,"\0");
            strcpy(cliente[i].cpf,"\0");
            strcpy(cliente[i].nascimento,"\0");
        }
    }

    inserirNome();
    inserirTelefone();
    inserirRG();
    inserirCPF();
    inserirNascimento();
    inserirCodigo();
    ind++;

}

void listarTodos() {

    if (ind>0) {
        printf("Clientes Cadastrados\n");
        for (int i = 0; i < ind; i++) {
            if (cliente[i].codigo != 0) {
                printf("nome: %s\n", cliente[i].nome);
                printf("codigo: %.3f\n", cliente[i].codigo);
                printf("telefone: %s\n", cliente[i].telefone);
                printf("RG: %s\n", cliente[i].rg);
                printf("CPF: %s\n", cliente[i].cpf);
                printf("nascimento: %s\n", cliente[i].nascimento);
                printf("\n\n");
            }
        }
    }else {
        printf("Ainda nao ha nenhum cliente cadastrado");
        return;
    }

}

void pesquisar(){
    float auxCod=0;
    int teste=0;

    if (ind>0) {
        printf ("Insira o codigo do cliente:\n");
        scanf("%f",&auxCod);
        for (int i = 0; i < strlen(cliente->cpf); i++) {
            if (auxCod == cliente[i].codigo) {
                printf("nome: %s\n", cliente[i].nome);
                printf("codigo: %f\n", cliente[i].codigo);
                printf("telefone: %s\n", cliente[i].telefone);
                printf("RG: %s\n", cliente[i].rg);
                printf("CPF: %s\n", cliente[i].cpf);
                printf("nascimento: %s\n", cliente[i].nascimento);
                teste++;
                getchar();
                getchar();
                break;
            }
        }
    }else{
        printf("Ainda nao ha nenhum cliente cadastrado\n");
        return;
    }

    if(teste==0){
        printf("Codigo do cliente nao identificado, valor inserir um codigo valido\n");
    }
}

void alterarCadastro(){
    float auxCod=0;
    int teste=0;

    if (ind>0) {
        printf ("Insira o codigo do cliente:\n");
        scanf("%f",&auxCod);
        for (int i = 0; i < strlen(cliente->cpf); i++) {
            if (auxCod == cliente[i].codigo) {
                alterarNome(i);
                alterarTelefone(i);
                alterarRG(i);
                alterarNasciento(i);
                teste++;
                break;
            }
        }
    }else{
        printf("Ainda nao ha nenhum cliente cadastrado\n");
        return;
    }

    if(teste==0){
        printf("Codigo do cliente nao identificado, favor inserir um codigo valido\n");
    }else{
        printf("dados alterados com sucesso\n");
    }
}

void excluirCadastro(){
    float auxCod=0;
    int teste=0;

    if (ind>0) {
        printf ("Insira o codigo do cliente:\n");
        scanf("%f",&auxCod);
        for (int i = 0; i < strlen(cliente->cpf); i++) {
            if (auxCod == cliente[i].codigo) {
                cliente[i].codigo = 0;
                teste++;
                break;
            }
        }
    }else{
        printf("Ainda nao ha funcionarios isneridos\n");
        return;
    }

    if(teste==0){
        printf("Codigo do cliente nao identificado ou inexistente, insira um codigo valido\n");
        return;
    }else{
        printf("Cadastro apagado com sucesso\n");
    }
}


//Inicio das funcoes auxiliares para inserção
void inserirCodigo(){
    cliente[ind].codigo = (float)(ind+1)/1000;
}

void inserirNome(){
    printf ("Insira o nome do cliente:\n");
    fflush(stdin);
    gets(cliente[ind].nome);

    if (strlen(cliente[ind].nome)<10){
        printf("ERRO: nome nao inserido\n");
        inserirNome();
    }
}

void inserirTelefone(){
    printf ("Insira o telefone do cliente:[Somente Digitos]\n");
    fflush(stdin);
    gets(cliente[ind].telefone);

    if (strlen(cliente[ind].telefone)!=11){
        printf("ERRO: telefone nao inserido\n");
        inserirTelefone();
    }
}

void inserirRG(){
    printf ("Insira o RG do cliente:\n");
    fflush(stdin);
    gets(cliente[ind].rg);
}

void inserirCPF(){
    printf ("insira o CPF do cliente:[Somente Digitos]\n");
    fflush(stdin);
    gets(cliente[ind].cpf);

    if (strlen(cliente[ind].cpf)!=11){
        printf("ERRO: CPF nao inserido\n");
        inserirCPF();
    }
}

void inserirNascimento(){
    printf ("insira o nascimento do cliente:(dd/mm/aaaa)\n");
    fflush(stdin);
    gets(cliente[ind].nascimento);

    if (strlen(cliente[ind].nascimento)!=10){
        printf("ERRO: nascimento nao inserido\n");
        inserirNascimento();
    }
}

//Inicio das funcoes auxiliares de alteracao

void alterarNome(int i){
    printf ("insira o nome do cliente:\n");
    fflush(stdin);
    gets(cliente[i].nome);

    if (strlen(cliente[i].nome)<10){
        printf("ERRO: nome nao inserido\n");
        alterarNome(i);
    }
}

void alterarTelefone(int i){
    printf ("insira o telefone do cliente:[Somente Numeros]\n");
    fflush(stdin);
    gets(cliente[i].telefone);

    if (strlen(cliente[i].telefone)!=11){
        printf("ERRO: telefone nao inserido\n");
        alterarTelefone(i);
    }
}

void alterarRG(int i){
    printf ("insira o RG do cliente:\n");
    fflush(stdin);
    gets(cliente[i].rg);
}

void alterarNasciento(int i){
    printf ("insira o nascimento do cliente:\n");
    fflush(stdin);
    gets(cliente[i].nascimento);

    if (strlen(cliente[i].nascimento)!=10){
        printf("ERRO: nascimento nao inserido\n");
        alterarNasciento(i);
    }
}