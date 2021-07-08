#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int soma=0;
	for (int i=2;i<=5;i++){
		if((i==2)||(i==3)){		
		     soma=soma+i*3;
		     //printf ("soma no 2 ou 3== %d\n",soma);	
		}else if (i%2==0){
		         soma+=i;
		         //printf ("soma se for par == %d\n",soma);
		         }else if (i>3){
				int cont=0;
				for(int c=3;c<i;c++){ 
					if (!(i%c)){
						cont++;
					}
				}
				if(!(cont)){
					printf ("i== %d e primo\n",i);
					soma=soma+i*3;								}
			   }else 
			        soma=soma+i*2;
				
	       }

printf ("soma == %d",soma);
printf ("\n");
system ("pause");
return 0;
}