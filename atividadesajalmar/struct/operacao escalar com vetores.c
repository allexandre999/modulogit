#include <stdio.h>
#include <stdlib.h>

struct vetor{
	  float x;
	  float y;
	  float z; 
};

void somaEscalar(struct vetor *p,int tam);
void produtoEscalar(struct vetor *p,int tam);
void preencherVetor(struct vetor *p,int n);

int main(){
		int n=0,i;
		
		 printf ("quantos vetores deseja somar?\n");
		 scanf("%d",&n);
		 
	 	 struct vetor *r3=malloc(n*sizeof(struct vetor));
		 	 
		if (r3==NULL){
		   printf("Erro: memoria insuficiente\n");
		   exit(1);
		}	 
		struct vetor *p=r3;
		
		preencherVetor(p,n);	
	
		int op=4;
		do{
			system("cls");
		   	printf ("Escolha uma opcao\n");
		   	printf ("1 - Preencher Vetor\n");
   			printf ("2 - Soma Escalar\n");
		   	printf ("3 - Produto Escalar\n");
		   	printf ("0 - Sair");
		   	scanf("%d",&op);
			   
			   if (op==0){
			   	  break;
			   }else if (op==1){ 
			   	  preencherVetor(p,n);
				   }else if (op==2){	
						 somaEscalar(p,n);
						}else if(op==3){
					    	  produtoEscalar(p,n);
						      }else {
						      	printf ("opcao invalida!\n");
						      	getchar();
						      	getchar();
				      		    }
				      
		}while(op!=0);
		
		free(r3);
		system("pause");
		return 0;
}

void somaEscalar(struct vetor *p,int tam){
	struct vetor s;
	int i;
	
	s.x = 0;
	s.y = 0;
	s.z = 0;
	
	for (i=0;i<tam;i++){
		s.x = s.x+p[i].x;
		s.y = s.y+p[i].y;
		s.z = s.z+p[i].z;
	}	
 	
 	printf ("soma dos vetores = %f %f %f \n",s.x,s.y,s.z); 
 	getchar();
 	getchar();
}

void produtoEscalar(struct vetor *p,int tam){
	struct vetor m;
	float s=0;
	int i;
	
	m.x = 1;
	m.y = 1;
	m.z = 1;
	
	for (i=0;i<tam;i++){
		m.x = m.x*p[i].x;
		m.y = m.y*p[i].y;
		m.z = m.z*p[i].z;
	}	
	
	s = m.x+m.y+m.z;
 	
 	printf ("produto dos vetores = %f\n",s);
 	getchar();
 	getchar();
}

void preencherVetor(struct vetor *p,int n){
	int i;
	for (i=0;i<n;i++){
		printf("insira o valor para x%d ",i+1);
		scanf("%f",&(p+i)->x);
		printf("insira o valor para y%d ",i+1);
		scanf("%f",&(p+i)->y);
		printf("insira o valor para z%d ",i+1);
		scanf("%f",&(p+i)->z);
	}
}
