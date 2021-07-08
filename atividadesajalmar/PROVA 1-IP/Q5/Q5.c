/*Q5 - Coloque um trecho de código no local indicado abaixo para
que a saída do programa seja "4 5". Não precisa imprimir as
aspas e não use as constantes (4, 5 ou outra) no código a ser
incluído.*/


// aluno: joao alexandre

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1=5,num2=4,aux;
    int *p1=&num1,*p2=&num2,*p3=&aux;

    p3=p1;
    p1=p2;
    p2=p3;

    printf ("%d %d \n\n",*p1,*p2);
    printf ("%d %d \n\n",*p2,*p1); //coloquei essa linha pois o comentario estava com valor inverso ao do enunciado.
    system("pause");
    return 0;
}
