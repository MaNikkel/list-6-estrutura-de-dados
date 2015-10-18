#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30


void conct(char *p1)
{
	int i, ultimaLetra;
	for (i = 0; i < N; i++)
	{
		if(p1[i + 1] == '\0')
		{
			ultimaLetra = i;
			i = N;
		}
	}
	for (i = 0; i < N; i++)
	{
		p1[ultimaLetra + i] = p1[i];
	}
}
int main()
{
	char string1[N], string2[N], pStr1, pStr2;
	pStr1 = &string1[0];
	pStr2 = &string2[0];
	printf("digite algo: ");
	fflush(stdin);
	gets(string1);
	printf("digite algo: ");
	fflush(stdin);
	gets(string2);
	conct(pStr1);
	printf("\nstring nova = %s", pStr1);
	
}
