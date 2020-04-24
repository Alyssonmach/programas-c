#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"");
	char nome[10], indice;
	
	printf("\t\t<<<<<CONVERTE MINÚSCULAS PARA MAIÚSCULAS>>>>>\n\n");
	
	printf("Informe seu primeiro nome em minúsculo: ");
	scanf("%s", nome);
	
	printf("\n\nSeu nome é:\n");
	
	for(indice = 0; nome[indice] != '\0'; indice++)
	{
		printf("%c ", nome[indice] - 32);
	}
	
	return 0;
}