#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inicializar(int matriz[5][5]);
int main(){
	int matriz[5][5],i,j;
	srand(time(NULL));
	inicializar(matriz);
	printf("\nLa matriz resultante es\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
	printf("%d\t",matriz[i][j]);
	printf("\n");}
return 0;
}
void inicializar(int matriz[5][5]){

	int n,m;
	for (n=0;n<5;n++)
		for(m=0;m<5;m++)
			matriz[n][m]=rand()%13+3;
	return;
}
