#include "main.h"
/**
 * execmd - shell
 * @argv: vactor
 * Return: void
 */
void execmd(char **argv)
{
	char *c = NULL;
	char *ac = NULL;

	if (argv)
	{
		c = argv[0];
		ac = PATH_c(c);
		if (execve(ac, argv, NULL) == -1)
			perror("No such file or directory");

	}
}
