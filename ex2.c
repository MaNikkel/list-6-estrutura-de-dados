#include <stdio.h>
#include <stdlib.h>
#define N 30

void inverterString(char *pon)
{
	int i, ultimaLetra;
	char letra;
	for(i = 0; i < N; i++)
	{
		if (*(pon + 1 + i) == '\0')
		{
			ultimaLetra = i;
			i = N;
		}
	}
	for(i = 0; i < (ultimaLetra/2); i++)
	{
		letra = pon[i];
		pon[i] = pon[ultimaLetra - i];
		*(pon + (ultimaLetra - i))= letra;
	}
}

void lerString(char *p)
{
	int opcao, *pOp;
	pOp = &opcao;
	do
	{
		printf("escreva algo: ");
		fflush(stdin);
		gets(p);
		printf("deseja escrever outra coisa?\n");
		printf("1 - sim\n");
		printf("0 - nao\n");
		scanf("%d", pOp);
	}while(opcao != 0);
}
int main()
{
	char string[N], *pStr;
	pStr = string;
	lerString(pStr);
	printf("\nstring original = %s\n", string);
	inverterString(pStr);
	printf("\nstring invertida = %s\n", string);
	return 0;
}
