int main(){
	char palavra[50] = " ";
	char *ptr = strchr(palavra, 'a');
	
	
	printf("Escreva seu nome: ");
	gets(palavra);
	
	
	if(*ptr, palavra){
		printf("Caractere encontrado: %c\n", ptr);
	}else{
		printf("Nao foi encontrado.\n");
	}

}