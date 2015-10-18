#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("Numero de argumentos: %d\n", argc);
	printf("caminho do programa = %s\n", argv[0]);
	printf("nome dado ao programa = %s\n", (*(argv+1)));
	printf("soma = %d\n", (atoi(*(argv+2)) + atoi(*(argv+3))));
	return 0;
}
