::nclude <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main- entry point
 *Return: always 0
 */

int main(int argc ,char* argv[])
{
	int i;
	char password[] = "secrete";

	if (strcmp(argv[1], password) == 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		printf("\n");
	}
	else
	{
		printf(" you have no access,please enter correct password");
	}
	return (0);
}