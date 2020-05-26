#include <stdio.h>
#include <locale.h>

void imprimeCaracteres(const char *sPtr);

int main(void)
{
	setlocale(LC_ALL,"");
	
	char string[] = {"Imprime uma cadeia de caracteres"};
	imprimeCaracteres(string);
	printf("\n\n");
	
	return 0;
}

void imprimeCaracteres(const char *sPtr)
{
	for(;*sPtr != '\0'; sPtr++)
		printf("%c", *sPtr);
	
	return;
}