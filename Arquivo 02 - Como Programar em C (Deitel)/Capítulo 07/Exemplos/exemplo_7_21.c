#include <stdio.h>
#include <locale.h>

void copia1(char *const s1, const char *const s2);
void copia2(char *s1, const char *s2);

int main(void)
{
	setlocale(LC_ALL,"");
	char string1[10];
	char *string2 = "Olá";
	char string3[10];
	char string4[] = "Adeus";
	
	copia1(string1, string2);
	printf("string1 = %s\n", string1);
	
	copia2(string3, string4);
	printf("string3 = %s\n", string3);
	
	printf("\n");
	
	return 0;
}

void copia1(char *const s1, const char *const s2)
{
	int indice;
	for(indice = 0; (s1[indice] = s2[indice]) != '\0'; indice++)
		;
	return;
}
 
void copia2(char *s1, const char *s2)
{
	for(;(*s1 = *s2) != '\0'; s1++, s2++)
		;
	return;
}