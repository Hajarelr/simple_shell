#include "main.h"
void execmd(char **argv);
/*
 * main - main funtion
 * @argc: array;
 * @argv: vector;
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char *prom = "$ ";
	char *comd = NULL;
	char *copy_comd = NULL;
	size_t n = 0;
	ssize_t nchars_r;
	const char *del = " \n";
	int n_token = 0;
	char *token;
	int i;
	(void)argc;

	printf("%s", prom);
	nchars_r = getline(&comd, &n, stdin);
	copy_comd = malloc(sizeof(char) * nchars_r);
	if (copy_comd == NULL)
	{
		perror("tsh: memory allocation error");
		return (-1);
	}
	strcpy(copy_comd, comd);
	if (nchars_r == -1)
	{
		printf("Exiting shell ...\n");
		return (-1);
	}
	else
	{
		token = strtok(comd, del);
		while (token != NULL)
		{
			n_token++;
			token = strtok(NULL, del);
		}
		n_token++;
		argv = malloc(sizeof(char *) * n_token);
		token = strtok(copy_comd, del);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char *) * strlen(token));
			strcpy(argv[i], token);
			token = strtok(NULL, del);
		}
		argv[i] = NULL;
		execmd(argv);
		free(comd);
		free(copy_comd);
	}
	return (0);
}
