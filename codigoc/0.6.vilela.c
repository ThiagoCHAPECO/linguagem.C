#include <stdio.h>
int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	int i, j;
	
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite os numeros da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite os numeros da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			printf("%d\n", matriz3[i][j]);
		}
		printf("\n");
	}
	return 0;
}