#include "main.h"
/**
 * PATH_c - get the location of command
 * @c: command
 * Return: PATH
 */
char *PATH_c(char *c)
{
	char *path, *c_path, *t_path, *f_path;
	int c_length, dir_length;
	struct stat buff;

	path = getenv("PATH");
	if (path)
	{
		c_path = strdup(path);
		c_length = strlen(c);
		t_path = strtok(c_path, ":");

		while (t_path != NULL)
		{
			dir_length = strlen(t_path);
			f_path = malloc(c_length + dir_length + 2);
			strcpy(f_path, t_path);
			strcat(f_path, "/");
			strcat(f_path, c);
			strcat(f_path, "\0");
			if (stat(f_path, &buff) == 0)
			{
				free(c_path);
				return (f_path);
			}
			else
			{
				free(f_path);
				t_path = strtok(NULL, ":");
			}
		}
		free(c_path);
		if (stat(c, &buff) == 0)
			return (c);
		return (NULL);
	}
	return (NULL);
}
