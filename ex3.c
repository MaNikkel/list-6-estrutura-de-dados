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

void cpy(char *str1, char *str2)
{
	int i, strCopied;
	i = 0;
	strCopied = 0;
	while(strCopied == 0)
	{
		str1[i] = str2[i];
		if(str2[i] == '\0')
			strCopied = 1;
		i++;
	}
	
}

void upr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] > 90)
			str[i] = str[i] - 32;
		i++;
	}
}
 void lwr(char *str)
 {
 	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 90)
			str[i] = str[i] + 32;
		i++;
	}	
 }



void cat(char *str1, char *str2)
{
	int i, y;
	i = len(str1);
	y = 0;
	while(str2[y] != '\0')
	{
		str1[i] = str2[y];
		i++;
		y++;
	}
}
int main()
{
	char string1[30], string2[30];
	printf("digite a string 1: ");
	gets(string1);
	printf("tamanho string 1: %d\n", len(string1));
	cpy(string2, string1);
	printf("string 1 = %s\nstring 2 = %s\n", string1, string2);
	upr(string1);
	printf("string 1 maiuscula = %s\n", string1);
	lwr(string1);
	printf("string 1 minuscula = %s\n", string1);
	cat(string1, string2);
	printf("string 1 + string 2 = %s\n", string1);
	
	
	
	return 0;
	
}
