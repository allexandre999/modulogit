#include <stdio.h>
#include <stdlib.h>
#include "dependente.h"
#include "funcionario.h"

int main() {
    extern int teste;
    int op=0;
    do {
        op=0;
        if (op==0) {
            printf("\npara sair do programa digite 0\n");
            printf("1 = Inserir Funcionario: \n");
            printf("2 = Listar Funcionarios: \n");
            printf("3 = Excluir Funcionario: \n");
            printf("4 = Mostrar Dados: \n");
            printf("5 = Alterar Daddos: \n");
            printf("6 = Listar Funcionarios Ordenadamente Pelo Nome: \n");
            printf("7 = Ir para menu dependentes: \n");
            fflush(stdin);
            scanf("%d", &op);
            fflush(stdin);

        }
        if (op==1) {
            inserirFuncionario();
        }
        if (op==2) {
            listarFuncionarios();
        }
        if (op==3){
            excluirFuncionario();
        }
        if (op==4){
            mostrarDados();
        }
        if (op==5){
            alterarDados();
        }
        if (op==6){
            listarOrdenado();
        }
        if (op==7){
            if(atrCodFuncDep()) {
                menuDependentes();
                teste = 0;
            }else {
                printf("funcionario nao encontrado!\n\n");
            }
        }

    }while(op!=0);

    system ("pause");
    return 0;
}

