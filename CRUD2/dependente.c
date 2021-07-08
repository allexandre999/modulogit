#include <stdio.h>
#include <string.h>
#include "dependente.h"

char nomesDependentes[50][50];
char cpfDependentes[50][50];
char rgDependentes[50][50];
char nascDependentes[10][50];
char endDependentes[50][50];
char tpsangDependentes[50][50];
float codFunctoDep[10];
float codDependentes[50];
extern float codFuncionario[10];
extern int ctrlFunc;
char insTpsang[50];
char insEnd[50];
char insNasc[10];
char insCPF [20];
char insRG[20];
char insn [50];

int teste = 0;
int ctrlDep = 0;

float contCod=(float)0.1;
float codBuscaGer = (float) 0.0;

void inserirNome(int ctrl){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o nome do dependente:\n");
        fflush(stdin);
        gets(insn);
        fflush(stdin);
        if (strlen(insn) == 0){
            printf("Por favor, insira o nome!\n\n");
            i--;
            continue;
        }
        strcpy(nomesDependentes[ctrl], insn);
    }
}

void atrCodDependente(int ctrl){
    codDependentes[ctrl]=contCod;
    contCod += (float)0.1;
}

int atrCodFuncDep(){
    int verifCod = 0;

    printf("Digite um codigo de funcionario valido para garantir seu acesso:\n");
    fflush(stdin);
    scanf("%f",&codBuscaGer);
    fflush(stdin);

    for (int i = 0; i < ctrlFunc ; ++i) {
        if (codFuncionario[i]==(codBuscaGer)) {
            codFunctoDep[ctrlDep] = codBuscaGer;
            printf("Funcionario valido!\n");
            printf("dependentes serao atribuidos ao funcionario de codigo %.3f!\n",codFunctoDep[ctrlDep]);
            verifCod++;
        }
    }
    return(verifCod==1 ? 1 : 0);
}

void editarNome(int j){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o nome do dependente:\n");
        fflush(stdin);
        gets(insn);
        fflush(stdin);
        if (strlen(insn) == 0){
            printf("Por favor, insira o nome!\n\n");
            j--;
            continue;
        }
        strcpy(nomesDependentes[j],insn);
    }
}

void editarCPF(int j){


    for (int i = 0; i < 1 ; ++i) {
        printf("insira o cpf do dependente:\n");
        fflush(stdin);
        gets(insCPF);
        fflush(stdin);
        if(strlen(insCPF)==0){
            printf("Voce precisa inserir um CPF!\n");
            i--;
            continue;
        }
        if(!strcmp(cpfDependentes[j], insCPF)){
            strcpy(cpfDependentes[j],insCPF);
            return;
        }
        for (int k = 0; k < ctrlDep; ++k) {
            if (!strcmp(cpfDependentes[k], insCPF)) {
                printf("o CPF ja esta cadastrado no sistema, recomece o cadastro!\n\n");
                i--;
                break;
            }
        }
        strcpy(cpfDependentes[j],insCPF);
    }
}

void inserirCPF(int ctrl){
    int testeCPF = 0;

    for (int i = 0; i < 1 ; ++i) {
        printf("insira o cpf do dependente:\n");
        fflush(stdin);
        gets(insCPF);
        fflush(stdin);
        if(strlen(insCPF)==0){
            printf("Voce precisa inserir um CPF!\n");
            i--;
            continue;
        }
        for (int j = 0; j < ctrlDep; ++j) {
            if (!strcmp(cpfDependentes[j], insCPF)) {
                printf("o CPF ja esta cadastrado no sistema, recomece o cadastro!\n\n");
                testeCPF++;
            }
        }
        strcpy(cpfDependentes[ctrl],insCPF);
        if(testeCPF == 1)
            return(editarCPF(ctrl));
    }
}

void inserirDataNasc(int ctrl) {
    for (int i = 0; i < 1; ++i) {
        printf("insira a data de nascimento do dependente\n(Use o modelo DD/MM/AAAA com as barras!!):\n");
        fflush(stdin);
        scanf("%10s", insNasc);
        fflush(stdin);
        if(strlen(insNasc)==0){
            printf("Voce precisa inserir uma data de nascimento\n");
            i--;
            continue;
        }
        if (strlen(insNasc) != 10) {
            printf("\nOps, algo deu errado!\nSiga o modelo DD/MM/AAAA com as barras!!\n\n");
            i--;
            continue;
        }
        strcpy(nascDependentes[ctrl], insNasc);
    }
}

void editarDataNasc(int j) {
    for (int i = 0; i < 1; ++i) {
        printf("insira a data de nascimento que voce deseja editar!\n(Use o modelo DD/MM/AAAA com as barras!!):\n");
        fflush(stdin);
        scanf("%10s", insNasc);
        fflush(stdin);
        if(strlen(insNasc)==0){
            printf("Voce precisa inserir uma data de nascimento\n");
            i--;
            continue;
        }
        if (strlen(insNasc) != 10) {
            printf("\nOps, algo deu errado!\nSiga o modelo DD/MM/AAAA com as barras!!\n\n");
            i--;
            continue;
        }
        strcpy(nascDependentes[j], insNasc);
    }
}

void inserirRG(int ctrl){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o RG do dependente\n");
        fflush(stdin);
        gets(insRG);
        fflush(stdin);
        strcpy(rgDependentes[ctrl], insRG);
    }
}

void editarRG(int j){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o RG a ser alterado: \n");
        fflush(stdin);
        gets(insRG);
        fflush(stdin);
        strcpy(rgDependentes[j], insRG);
    }
}

void inserirEndereco(int ctrl){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o endereco do dependente\n");
        fflush(stdin);
        gets(insEnd);
        fflush(stdin);
        strcpy(endDependentes[ctrl], insEnd);
    }
}

void editarEndereco(int j){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o endereco do dependente\n");
        fflush(stdin);
        gets(insEnd);
        fflush(stdin);
        strcpy(endDependentes[j], insEnd);
    }
}

void inserirTpsang(int ctrl){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o tipo sanguineo do dependente\n");
        fflush(stdin);
        gets(insTpsang);
        fflush(stdin);
        strcpy(tpsangDependentes[ctrl], insTpsang);
    }
}

void editarTpsang(int j){
    for (int i = 0; i < 1 ; ++i) {
        printf("insira o tipo sanguineo do dependente\n");
        fflush(stdin);
        gets(insTpsang);
        fflush(stdin);
        strcpy(tpsangDependentes[j], insTpsang);
    }
}

void excluirDependente(){
    int testeExcl=0;
    float x=(float)0.0;

    if (ctrlDep > 0){ //se ctrlFunc>0 entao ja ha funcionarios inseridos;
        printf("Insira o Codigo do Dependente a ser excluido do sistema:\n");
        fflush(stdin);
        scanf("%f",&x);
        fflush(stdin);
        if (x==0){
            printf("Codigo 0 e INVALIDO, Tente Novamente Com Um Codigo Valido\n\n");
            return(excluirDependente());
        }
        for (int j=0; j < ctrlDep; j++){
            if (codDependentes[j]==x){
                codDependentes[j]=(float)0;
                memset(cpfDependentes[j],0,sizeof(cpfDependentes[j]));
                printf("Dependente Apagado Com Sucesso\n");
                testeExcl= testeExcl + 1;
                teste--;
            }
        }
        if (testeExcl != 1){
            printf("Este Codigo Nao Existe, Tente Novamente Com Um Codigo Valido\n\n");
            return (excluirDependente());
        }
    }
}

void editarDependentes(){
    float codEdit = (float)0.0;
    int testeEdit = 0;

    printf("Digite o codigo do dependente que deseja editar:\n");
    fflush(stdin);
    scanf("%f",&codEdit);
    fflush(stdin);

    for (int j=0; j <= ctrlDep; j++){
        if (codDependentes[j]==(codEdit)){
            editarNome(j);
            printf("Nome alterado para %s\n\n",nomesDependentes[j]);
            editarCPF(j);
            printf("CPF alterado para %s\n\n",cpfDependentes[j]);
            editarDataNasc(j);
            printf("Data de Nascimento alterada para %s\n\n",nascDependentes[j]);
            editarRG(j);
            printf("RG alterado para %s\n\n",rgDependentes[j]);
            editarEndereco(j);
            printf("Endereco alterado para %s\n\n",endDependentes[j]);
            editarTpsang(j);
            printf("Tipo Sanguineo alterado para %s\n\n",tpsangDependentes[j]);
            testeEdit= testeEdit + 1;
            break;
        }
    }
    if(testeEdit == 1){
        printf("Tudo certo, seu dependente foi alterado com sucesso!\n\n");
    } if(testeEdit != 1){
        printf("Nao consegui encontrar seu dependente!\n\n");
        return(editarDependentes());
    }
}

void listarDependentes(){
    for (int j = 0 ; j < ctrlDep; j++) {
        if(codDependentes[j] == 0.0)
            continue;
        printf("\t\t\tDependentes\n");
        printf("\n########################################################################\n");
        printf("Nome do dependente:%s || CPF:%s \nData de nascimento:%s || RG:%s\nEndereco:%s || Tipo sanguineo:%s\nCodigo do Dependente:%.4f || Codigo do funcionario respectivo:%.3f\n", nomesDependentes[j], cpfDependentes[j], nascDependentes[j],rgDependentes[j],endDependentes[j], tpsangDependentes[j], codDependentes[j], codFunctoDep[j]);
        printf("########################################################################\n\n");
    }
}

void listarDependentesCod(){
    float codBusca = (float)0.0;
    int testeList = 0;

    printf("Digite o codigo do dependente que voce deseja buscar:\n");
    fflush(stdin);
    scanf("%f",&codBusca);
    fflush(stdin);

    for (int j=0; j < ctrlDep; j++){
        if (codDependentes[j]==(codBusca)){
            if(codDependentes[j] == 0.0)
                continue;
            printf("\t\t\tDependentes\n");
            printf("\n########################################################################\n");
            printf("Nome do dependente:%s || CPF:%s \nData de nascimento:%s || RG:%s\nEndereco:%s || Tipo sanguineo:%s\nCodigo do Dependente:%.4f\n", nomesDependentes[j], cpfDependentes[j], nascDependentes[j],rgDependentes[j],endDependentes[j], tpsangDependentes[j], codDependentes[j]);
            printf("########################################################################\n\n");
            testeList= testeList + 1;
            break;
        }
    }
    if(testeList != 1){
        printf("Nao foi encontrado nenhum dependente com o codigo informado!\n\n");
        return;
    }
}

void listarDependentesOrd(){
    float codBusca = (float)0.0;
    //float tst = (float)0.0;

    float vetcod[100];
    float vetcodFunctoDep[100];
    char vetnome[50][100];
    char vetrg[50][100];
    char vetcpf[50][100];
    char vetendereco[50][100];
    char vettpsangue[50][100];
    char vetnascimento[50][100];
    char auxchar[100];
    float auxfloat;

    if (ctrlDep == 1){
        printf ("Só existe 1 funcionario cadastrado\n");
        listarDependentes();
        return;
    }

    printf("Digite o codigo do funcionario que cadastrou o dependente que voce deseja buscar:\n");
    fflush(stdin);
    scanf("%f",&codBusca);
    fflush(stdin);



    for (int i = 0; i < ctrlDep; ++i) {
        if (codFunctoDep[i] == (codBusca)) {

            int cont = 0;

            while(cont<ctrlDep){
                vetcod[cont] = codDependentes[cont];
                vetcodFunctoDep[cont]=codFunctoDep[cont];
                strcpy(vetnome[cont], nomesDependentes[cont]);
                strcpy(vetrg[cont], rgDependentes[cont]);
                strcpy(vetcpf[cont], cpfDependentes[cont]);
                strcpy(vetendereco[cont], endDependentes[cont]);
                strcpy(vettpsangue[cont], tpsangDependentes[cont]);
                strcpy(vetnascimento[cont], nascDependentes[cont]);
                cont++;
            }
        }
    }

    for (int i = 0; i < ctrlDep; i++) {
        if (vetcodFunctoDep[i] == (codBusca)) {
            if (vetcod[i] == (float) 0.0)
                continue;
            for (int k = 0; k < ctrlDep; ++k) {
                for (int j = 0; j < ctrlDep; ++j) {
                    if (strcmp(vetnome[j - 1], vetnome[j]) > 0) {
                        auxfloat = vetcodFunctoDep[j - 1];
                        vetcodFunctoDep[j - 1] = vetcodFunctoDep[j];
                        vetcodFunctoDep[j] = auxfloat;

                        auxfloat = vetcod[j - 1];
                        vetcod[j - 1] = vetcod[j];
                        vetcod[j] = auxfloat;

                        strcpy(auxchar, vetnome[j - 1]);
                        strcpy(vetnome[j - 1], vetnome[j]);
                        strcpy(vetnome[j], auxchar);

                        strcpy(auxchar, vetrg[j - 1]);
                        strcpy(vetrg[j - 1], vetrg[j]);
                        strcpy(vetrg[j], auxchar);

                        strcpy(auxchar, vetcpf[j - 1]);
                        strcpy(vetcpf[j - 1], vetcpf[j]);
                        strcpy(vetcpf[j], auxchar);

                        strcpy(auxchar, vetendereco[j - 1]);
                        strcpy(vetendereco[j - 1], vetendereco[j]);
                        strcpy(vetendereco[j], auxchar);

                        strcpy(auxchar, vettpsangue[j - 1]);
                        strcpy(vettpsangue[j - 1], vettpsangue[j]);
                        strcpy(vettpsangue[j], auxchar);

                        strcpy(auxchar, vetnascimento[j - 1]);
                        strcpy(vetnascimento[j - 1], vetnascimento[j]);
                        strcpy(vetnascimento[j], auxchar);
                    }
                }
            }
        }
    }
    for (int j = 0; j <ctrlDep; ++j) {
        if (vetcodFunctoDep[j] == (codBusca)) {
            if(vetcod[j] == 0.0)
                continue;
            if(vetcpf[j] == 0)
                continue;
            printf("\t\t\tDependentes\n");
            printf("\n########################################################################\n");
            printf("Nome do dependente:%s || CPF:%s \nData de nascimento:%s || RG:%s\nEndereco:%s || Tipo sanguineo:%s\nCodigo do Dependente:%.4f || Codigo do Funcionario:%.3f\n\n",
                   vetnome[j], vetcpf[j], vetnascimento[j], vetrg[j], vetendereco[j], vettpsangue[j], vetcod[j],
                   vetcodFunctoDep[j]);
            printf("########################################################################\n\n");
        }
    }
}

void listarDepCodFunc(){
    float codBusca = (float)0.0;
    int testeListFunc = 0;

    printf("Digite o codigo do funcionario que cadastrou o dependente que voce deseja buscar:\n");
    fflush(stdin);
    scanf("%f",&codBusca);
    fflush(stdin);

    for (int j=0; j < sizeof(codFunctoDep); j++){
        if (codFunctoDep[j] == (codBusca)){
            if(codDependentes[j] == 0.0)
                continue;
            if(codFunctoDep[j] == 0.0)
                continue;
            printf("\t\t\tDependente\n");
            printf("\n########################################################################\n");
            printf("Nome do dependente:%s || CPF:%s \nData de nascimento:%s || RG:%s\nEndereco:%s || Tipo sanguineo:%s\nCodigo do Dependente:%.4f || Codigo do funcionario correspondente:%.3f\n", nomesDependentes[j], cpfDependentes[j], nascDependentes[j],rgDependentes[j],endDependentes[j], tpsangDependentes[j], codDependentes[j], codFunctoDep[j]);
            printf("########################################################################\n\n");
            testeListFunc= testeListFunc + 1;
        }
    }
    if(testeListFunc == 0){
        printf("Nao foi encontrado nenhum dependente ao funcionario do codigo informado!\n\n");
        return;
    }
}

void cadastrarDependentes() {
    if(teste>3){
        printf("o funcionario ja possui o numero maximo de dependentes!\n\n");
        return;
    }
    for (int j = 0; j < ctrlDep; ++j) {
        for (int k = j+1; k < ctrlDep; ++k) {
            for (int l = k+1; l < ctrlDep; ++l) {
                if(codFunctoDep[j]==codBuscaGer && codFunctoDep[k]==codBuscaGer && codFunctoDep[l]==codBuscaGer){
                    printf("o funcionario ja possui o numero maximo de dependentes!\n\n");
                    return;
                }
            }
        }
    }
    codFunctoDep[ctrlDep] = codBuscaGer;
    inserirNome(ctrlDep);
    inserirCPF(ctrlDep);
    inserirDataNasc(ctrlDep);
    inserirRG(ctrlDep);
    inserirEndereco(ctrlDep);
    inserirTpsang(ctrlDep);
    atrCodDependente(ctrlDep);
    ctrlDep++;
    teste++;
}
void menuDependentes(){
    int menu2 = 0;
    int menu3 = 0;

    printf("O que deseja fazer agora?\n0-Sair do Cadastro de dependentes\n1-listar dependentes por codigo\n2-excluir dependentes\n3-editar dependentes\n4-cadastrar dependentes\n5-listar dependentes por codigo do funcionario\n6-listar dependentes em ordem alfabetica por codigo de funcionario\n\n");
    fflush(stdin);
    scanf("%d", &menu2);
    fflush(stdin);

    if(menu2==0){
        printf("Ok, ate mais!\n\n");
        return;
    }
    if(menu2==1){
        listarDependentesCod();

        printf("deseja voltar ao menu de dependentes?\n(1 para sim ou 0 para nao)\n");
        fflush(stdin);
        scanf("%d",&menu3);
        fflush(stdin);

        if(menu3==1)
            return(menuDependentes());
        else
            return;
    }
    if(menu2==2){
        excluirDependente();
        printf("deseja voltar ao menu de dependentes?\n(1 para sim ou 0 para nao)\n");
        fflush(stdin);
        scanf("%d",&menu3);
        fflush(stdin);

        if(menu3==1)
            return(menuDependentes());
        else
            return;
    }
    if(menu2==3){
        editarDependentes();
        printf("deseja voltar ao menu de dependentes?\n(1 para sim ou 0 para nao)\n");
        fflush(stdin);
        scanf("%d",&menu3);
        fflush(stdin);

        if(menu3==1)
            return(menuDependentes());
        else
            return;
    }
    if(menu2==4){
        cadastrarDependentes();
        printf("deseja voltar ao menu de dependentes?\n(1 para sim ou 0 para nao)\n");
        fflush(stdin);
        scanf("%d",&menu3);
        fflush(stdin);

        if(menu3==1)
            return(menuDependentes());
        else
            return;
    }
    if(menu2==5) {
        listarDepCodFunc();
        printf("deseja voltar ao menu de dependentes?\n(1 para sim ou 0 para nao)\n");
        fflush(stdin);
        scanf("%d", &menu3);
        fflush(stdin);

        if (menu3 == 1)
            return (menuDependentes());
        else
            return;
    }
    if(menu2==6) {
        listarDependentesOrd();
        printf("deseja voltar ao menu de dependentes?\n(1 para sim ou 0 para nao)\n");
        fflush(stdin);
        scanf("%d", &menu3);
        fflush(stdin);

        if (menu3 == 1)
            return (menuDependentes());
        else
            return;
    }
}