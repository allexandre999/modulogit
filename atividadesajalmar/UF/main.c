#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ESTRUTURA
struct federacao{
    char cod[3];
    char nome[20];
};


//FUNCOES
void menu();
void abrirArquivo();
void cadastrar();
void listarTodos();
void alterar();
void remover();
void inserirNome();
void inserirSigla();

//VARIAVEIS
FILE *pf;
struct federacao uf;


int main() {
    abrirArquivo();
    menu();

    fclose(pf);
    system("pause");
    return 0;
}

void menu(){
    int op = -1;
    do {
        printf ("0 - Para SAIR do sistema\n");
        printf ("2 - Para CADASTRAR um estado\n");
        printf ("3 - Para LISTAR TODOS os estados cadastrados\n");
        printf ("4 - Para ALTERAR dados de um cadastro\n");
        printf ("5 - Para REMOVER dados de um cadastro\n");
        scanf ("%d",&op);

        switch (op) {
            case 0:
                op=0;
                break;
            case 2:
                cadastrar();
                break;
            case 3:
                listarTodos();
                break;
            case 4:
                alterar();
                break;
            case 5:
                remover();
                break;
            default:
                printf("Opcao invalida\n");
        }

    }while(op!=0);

}

void abrirArquivo(){
    char nome[40];
    printf("insira o nome do arquivo\n");
    fflush(stdin);
    gets(nome);

    pf = fopen(nome,"rb+");
    if (pf==NULL){
        pf = fopen(nome,"wb+");
        if (pf==NULL){
            printf("erro na gravação do arquivo\n\n");
            exit(1);
        }
        printf("Um novo arquivo foi criado com sucesso!\n\n");
        return;
    }
    printf("Arquivo ja existente aberto com sucesso!\n\n");
}

void cadastrar(){
    inserirNome();
    inserirSigla();
    fseek(pf,0,SEEK_END);
    fwrite(&uf,sizeof(struct federacao),1,pf);
}

void inserirNome(){
    printf("Insira o NOME do Estado\n");
    fflush(stdin);
    gets(uf.nome);
    if (strlen(uf.nome)<4){
        printf("ERRO: NOME nao corresponde a um estado valido\n");
        inserirNome();
    }

}

void inserirSigla(){
    printf("Insira a SIGLA do Estado\n");
    fflush(stdin);
    gets(uf.cod);
    if (strlen(uf.nome)<2){
        printf("ERRO: SIGLA nao corresponde a um estado valido\n");
        inserirSigla();
    }
}

void listarTodos() {
    fseek(pf, 0, SEEK_SET);

    while (!feof(pf)) {
        fread(&uf, sizeof(struct federacao), 1, pf);
        if (strlen(uf.cod) < 2) {
            continue;
        }
        if (feof(pf)){
            break;
        }
        printf("[Estado : %s Sigla : %s]\n\n", uf.nome, uf.cod);
    }
}

void alterar(){
    fseek(pf,0,SEEK_SET);
    char auxcod[2];
    printf("Insira a Sigla do Estado que deseja alterar\n");
    fflush(stdin);
    gets(auxcod);
    while(!feof(pf)){
        fread(&uf,sizeof(struct federacao),1,pf);
        if (strcmp(auxcod,uf.cod)==0){
            inserirNome();
            inserirSigla();
            fseek(pf,-1 * sizeof(struct federacao),SEEK_CUR);
            fwrite(&uf,sizeof(struct federacao),1,pf);
            return;
        }
    }
    printf("SIGLA nao consta nos registros. Insira uma SIGLA Valida\n");
}

void remover(){
    fseek(pf,0,SEEK_SET);

    char auxcod[2];
    printf("Insira a SIGLA do Estado que deseja alterar\n");
    fflush(stdin);
    gets(auxcod);
    while(!feof(pf)){
        fread(&uf,sizeof(struct federacao),1,pf);
        if (strcmp(auxcod,uf.cod)==0){
            strcpy(uf.nome,"\0");
            strcpy(uf.cod,"\0");
            fseek(pf,-1 * sizeof(struct federacao),SEEK_CUR);
            fwrite(&uf,sizeof(struct federacao),1,pf);
            return;
        }
    }

    printf("SIGLA nao consta nos registros. Insira uma SIGLA Valida\n");

}
