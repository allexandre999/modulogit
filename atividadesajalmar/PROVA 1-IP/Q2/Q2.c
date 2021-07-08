/*Q2 - Faça um programa que verifique se um número positivo lido do usuário é
primo e menor do que 100. Use argc e argv para ler o valor, bem como trate
as situações em que podem ocorrer erros no programa. Por exemplo quando o
número não for informado e quando um valor negativo for informado ao executar
o programa. Implemente uma função para verificar se o número é primo. (2,0)*/

// aluno: joao alexandre

#include <stdio.h>
#include <stdlib.h>



int main(int argc,char *argv[]) {
    int num,teste=0;

    for (;;) {
        printf("Digite um numero inteiro:\n\n");
        num = atoi(argv[1]);

        if (argc == 0) {
            printf("digite um argumento");
            return 1;
        }else{
            break;
        }
    }

    if (num==0){
        printf("digite um numero diferente de 0");
        exit(1);
    }

    if (num<0){
        num=num*(-1);
    }

    for (int i=1;i<num;i++) {
        if (num % i == 0) {
            teste++;
        }
    }

        if (num < 100) {
            if (teste<2){
                printf("numero %d e menor do que 100 e e primo\n\n",num);
                exit(0);
            }
        }else {
            printf("numero é maior do que 100, insira um valor menor do que 100\n\n");
            exit(0);
        }




    system("pause");
    return 0;
}
