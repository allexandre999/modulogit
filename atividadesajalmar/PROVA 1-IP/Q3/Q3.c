/*Q - Faça um programa em C que leia valores reais e armazene
em uma vetor de tamanho 12, em seguida obtenha os dois
menores, os dois maiores e o valor médio dos valores armazenados
na matriz. Ao final, imprima os valores obtidos (2,0)*/

// aluno: joao alexandre

#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[12];
    float menor1,menor2,maior1,maior2,media=0,aux;
    int indicemenor=0,indicemaior=0;
    for (int i=0;i<12;i++){
        printf ("insira um valor:\n");
        scanf("%f",&vet[i]);
    }

    menor1=(float)vet[0];
    menor2=(float)vet[1];
    maior1=(float)menor1;
    maior2=(float)menor2;

    for (int i=0;i<12;i++){
        if (menor1>vet[i]){
            menor1=vet[i];
            indicemenor=i;
        }
        if (maior1<vet[i]){
            maior1=vet[i];
            indicemaior=i;
        }
    }

    for (int i=0;i<12;i++){
        if ((menor2>vet[i])&&(indicemenor!=i)){
            menor2=vet[i];
        }
        if ((maior2<vet[i])&&(indicemaior!=i)){
            maior2=vet[i];
        }
    }

    for (int i=0;i<12;i++){
        media=media+vet[i];
    }
    media=media/12.0;

    printf("primeiro menor: %f\n\n",menor1);
    printf("segundo menor: %f\n\n",menor2);
    printf("primeiro maior: %f\n\n",maior1);
    printf("segundo maior: %f\n\n",maior2);
    printf("media dos valores lidos == %f\n\n",media);

    system("pause");
    return 0;
}
