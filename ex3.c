#include <stdio.h>
#include <stdlib.h>

int len(char *str)
{
	int i;
	i = 0;
	while(i > -1)
	{
		if(str[i] == '\0')
		{
			return i;
		}
		i++;
	}
}


int main()
{
	char string1[30], string2[30];
	printf("digite a string 1: ");
	gets(string1);
	printf("tamanho string 1: %d", len(string1));
	return 0;
	
}
