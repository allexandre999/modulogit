#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char *argv[]){
	float mediageral,mediapositivo,medianegativo,percentposi,percentnega;
	double num,dois,z=0;
	mediageral=mediapositivo=medianegativo=num=percentposi=percentnega=0;	
	int positivo,negativo,contn,contp;
	positivo=negativo=contn=contp=0;
	//dois=2.0;
	if (argc!=11){
		printf ("dez valores esperados");
		return 1;
	}
	
	for(int i=1;i<argc;i++){
		num=atof(argv[i]);	
		mediageral=mediageral+num;
		z=fmod(num,2);
		if (z==0) {
			mediapositivo= mediapositivo+num;
			positivo++;
			contp++;
		}else{	
			medianegativo=medianegativo+num;
			negativo++;
			contn++;
		}		
	}

	if (negativo==0) negativo=1;
	if (positivo==0) positivo=1;
	printf ("positivos %d\nnegativos %d\n",positivo,negativo);
	mediageral=mediageral/10;
	medianegativo=medianegativo/negativo;
	mediapositivo=mediapositivo/positivo;
	percentposi= (positivo*100)/10;
	percentnega=(negativo*100)/10;

	printf ("media geral==%f\nmedia dos positivos== %f\nmedia dos negativos== %f\n,quantidade de positivos== %d\nquantidade de negativos== %d\n,percentual positovo==%f\%\npercentualnegativo== %f\%\n",mediageral,mediapositivo,medianegativo,contp,contn,percentposi,percentnega);
	

system("pause");;
return 0;
}
