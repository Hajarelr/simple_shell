#include "main.h"
/*
 * execmd - shell
 * @argv: vactor
 * Return: void
 */
void execmd(char **argv)
{
	char *c = NULL;

	if (argv)
	{
		c = argv[0];
		if (execve(c, argv, NULL) == -1)
			perror("Eroor");
	}
}
