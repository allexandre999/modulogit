/*Faça um programa que leia 12 números inteiros positivos
e armazene-os em uma matriz bidimensional de tamanho 3 x 4.
Em seguida, faça a soma ponderada dos elementos da matriz,
de tal maneira que se o elemento da matriz for primo o valor
é ponderado por 1, se não for primo é ponderado por 2, porém
e for primo e par deve ser ponderado por 3. Ao final apresente
essa soma. (2,0)*/

// aluno: joao alexandre

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[3][4],num,soma,i=0,j=0,primo=0;
    for (i=0;i<3;i++) {
       for (j=0;j<4;j++) {
           printf("insira um numero inteiro positivo:\n");
           scanf("%d", &num);
           if (num <= 0) {
               printf("erro na entrada do numero\ndigite um numero inteiro e positivo\n");
               system("pause");
               system("cls");
               j--;
               continue;
           }
           vet[i][j] = num;
       }
    }


        for (i=0;i<3;i++){
            for (j=0;j<4;j++){
                primo=0;
                num=vet[i][j];
             for (int k=1;k<num;k++){
                 primo++;
             }

             if ((primo<2)&&(num%2==0)){
                 soma=soma+num*3;
             }else if (primo<2){
                 soma=soma+num;
             }else {
                 soma=soma+num*2;
             }
            }
        }

    printf ("soma == %d",soma);

    system("pause");
    return 0;
}
