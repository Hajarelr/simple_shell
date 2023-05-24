#include "main.h"
/**
 * main - main funtion
 * @argc: array;
 * @argv: vector;
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char *comd = NULL;
	char *copy_comd = NULL;
	size_t n = 0;
	ssize_t nchars_r;
	const char *del = " \n";
	int n_token = 0;
	char *token;
	int i;
	char **t;
	(void)argc;
	(void)argv;

	while (1)
	{
		prompt();
		nchars_r = getline(&comd, &n, stdin);
		copy_comd = malloc(sizeof(char) * nchars_r);
		if (nchars_r == -1)
		{
			printf("Exit shell\n");
			return (-1);
		}
		copy_comd = malloc(sizeof(char) * nchars_r);
		if (copy_comd == NULL)
		{
			perror("tsh: memory allocation error");
			return (-1);
		}
		strcpy(copy_comd, comd);
		token = strtok(comd, del);
		while (token != NULL)
		{
			n_token++;
			token = strtok(NULL, del);
		}
		n_token++;
		t = malloc(sizeof(char *) * n_token);
		token = strtok(copy_comd, del);
		for (i = 0; token != NULL; i++)
		{
			t[i] = malloc(sizeof(char *) * strlen(token));
			strcpy(t[i], token);
			token = strtok(NULL, del);
		}
		*(t + i)= NULL;
		execmd(t);
		free(copy_comd);
		free(comd);
		free(t);
	}

	return (0);
}
