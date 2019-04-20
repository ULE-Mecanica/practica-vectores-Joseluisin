#include <stdio.h>

void identidad(int matriz[9][9]);
int main(){
	int matriz[9][9],i,j;
	identidad(matriz);
	printf("\nLa matriz resultante es \n");
	for(i=0;i<9;i++){
		for(j=0;j<9;j++)
		printf("%d\t", matriz[i][j]);
		printf("\n");
}
return 0;
}

void identidad(int matriz[9][9]){
	int i,j;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		if(i==j)
			matriz[i][j]=1;
		else
			matriz[i][j]=0;
	return;
}
	


