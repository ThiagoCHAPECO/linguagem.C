#include <stdio.h>
int main(){
	int matriz[3][3];
	int i, j;
	
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite os numeros da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
			if(i==j){
				matriz[i][j] = i + 1;
			}else {
				matriz[i][j] = 0;
			}
		}
	}
		for(i=0; i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
	}
		
		
		
	return 0;
}