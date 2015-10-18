#include <stdio.h>
#include <stdlib.h>

void dividir(int *ptrvar)
{
	*ptrvar /= 10;
}


int main()
{
	int var;
	printf("informe o valor de var: ");
	scanf("%d", &var);
	dividir(&var);
	printf("dividido por 10 = %d", var);
}
