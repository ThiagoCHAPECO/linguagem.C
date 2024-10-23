#include <stdio.h>
#include <stdlib.h>
int main(){
	int v1;
	float end, end2;
	char leia;
	
	printf("Digite o valor do produto: ");
	scanf("%d", &v1);
	
	end = v1 - (v1 * 0.2);
	printf("Esse eh o valor do primeiro desconto aplicado: %.2f\n", end);

	printf("Vai ter algum desconto a mais?: ");
	scanf(" %c", &leia);
	
	if(leia == 's'||leia == 'S'){	
		end2 = end - (end * 0.1);
	}
	
	printf("Esse foi o desconto final: %.2f\n", end2);
	
	
	return 0; 
}