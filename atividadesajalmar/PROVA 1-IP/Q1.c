//Fa�a um programa que some todos os n�meros no intervalo fechado [n1,n2] 
//com exce��o dos n�meros divis�veis por 3 e por 5 ao mesmo tempo. 
//Os valores para n1 e n2 devem ser lidos do usu�rio usando a fun��o scanf e, 
//al�m disso, use o comando continue na sua implementa��o. Ao final, imprima a soma obtida. (2,0)

// aluno: joao alexandre

#include <stdio.h>
#include <stdlib.h>

int main(){
	int soma=0,n1=0,n2=0,teste=0;
	
	printf("insira um numero 1 inteiro:\n");
	scanf("%d",&n1);
	printf("insira outro numero 2 inteiro:\n");
	scanf("%d",&n2);
	
	do{	
		   if ((n1%3==0)&&(n1%5==0)){
		         n1++;
		         teste++;
				 continue;
		   }else{
		   		 soma=n1+1;
		   		 n1++;
		   		 teste++;
  		    }
	}while(n1<=n2);

printf ("a soma dos numeros e %d\n\n",soma);

system("pause");
return 0;
}
