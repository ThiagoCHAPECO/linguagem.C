#include <stdio.h>

int main(){
	int num1, num2, num3, soma = 0, media;

	
	for(int i=0;i<=3;i++){
		
		printf("Digite o primeiro numero: ");
		scanf(" %d", &num1);
	
		printf("Digite o segundo numero: ");
		scanf(" %d", &num2);
	
		printf("Digite o terceiro numero: ");
		scanf(" %d", &num3);
	
		soma=num1+num2+num3;
	}
	media = soma/3;
	printf("%d\n", media);
	
	return 0;
}
