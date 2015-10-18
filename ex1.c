#include <stdio.h>
#include <stdlib.h>
#define N 30

void zerar(int *pont)
{
	int i;
	for(i = 0; i < N; i++)
		*(pont + i) = 0;
}
void popularVetor(int *p)
{
	int i;
	i = 0;
	printf("digite os valores para fazer a soma, digite 0 para sair\n\n");
	do
	{
		printf("digite o valor %d\n", i+1);
		scanf("%d", (p+i));
		i++;
	}while(*(p+i-1) != 0);
	printf("\n\n");	
}
int main()
{
	int *pVet, vet[N], i;
	pVet = vet;
	zerar(pVet);
	popularVetor(pVet);
	for(i = 1; i < N; i++)
		*pVet = *pVet + vet[i];
	printf("soma = %d", *pVet);
	return 0;
}
