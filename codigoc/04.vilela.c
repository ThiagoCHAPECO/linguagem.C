int main(){
	char palavra1[60] = " ";
	char palavra2[60] = " ";
	char palavra3[60] = " ";
	
	printf("Escreva a primeira palavra:\n");
	gets(palavra1);
	
	printf("Escreva a segunda palavra:\n");
	gets(palavra2);
	
	printf("Escreva a terceira palavra:\n");
	gets(palavra3);
	
	if(strcmp(palavra1, palavra2) == 0 || (palavra1, palavra3) == 0 || (palavra2, palavra3) == 0){
		printf("As palavras sao iguais");
	} else {
		printf("As palavras sao diferentes");
	}
	return 0;
	
}