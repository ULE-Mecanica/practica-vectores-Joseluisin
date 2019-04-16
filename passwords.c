#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#define vector 26
#define aleatorio 8
void inicializar(char aleatorias[vector]);

int main(){

	char abc[vector], contrasena[aleatorio+1];
	int numero, i;
	srand(time(NULL));
	inicializar(abc);
	for(i=0;i<vector;i++){
	numero=rand()%vector;
	contrasena[i]=abc[numero];
}
	contrasena[aleatorio]='\0';
	printf("La contraseña es %s", contrasena);
	
return 0;
}
void inicializar(char aleatorias[vector]){
	int i,numero=97;
	for(i=0;i<vector;i++)
	aleatorias[i]=numero++;
	return;
}
		
	
