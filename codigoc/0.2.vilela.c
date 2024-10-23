#include <stdio.h>
#include <stdlib.h>
int main(){
	int v1;
	float end1, end2;
	char leia;
	
	printf("Digite o valor do produto: ");
	scanf("%d", &v1);
	
	end1 = v1 - (v1 * 0.2);
	printf("Esse eh o valor do primeiro desconto aplicado: %.2f\n", end1);

	printf("Vai ter algum desconto a mais?: ");
	scanf(" %c", &leia);
	
	if(leia == 's'||leia == 'S'){	
		end2 = end1 - (end1 * 0.1);
	}
	
	printf("Esse foi o desconto final: %.2f\n", end2);
	
	
	return 0; 
}