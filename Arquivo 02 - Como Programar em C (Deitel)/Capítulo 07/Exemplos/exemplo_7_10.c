#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void converte(char *apontPtr);

int main(void)
{
	setlocale(LC_ALL,"");
	
	char cadeia[] = {"caractere e 32r$"};
	
	printf("String antes da função: %s", cadeia);
	
	converte(cadeia);
	
	printf("\n\nString depois da função: %s", cadeia);
	
	return 0;
}

void converte(char *apontPtr)
{
	while(*apontPtr != '0')
	{
		if(islower(*apontPtr))
			*apontPtr = toupper(*apontPtr);
		++apontPtr;
	}
}