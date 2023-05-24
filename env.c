#include "main.h"
/**
 * print_env - Function that prints the environment
 * Return: void
 */
void print_env(void)
{
int n = 0;
char **env = environ;
while (env[n])
{
write(STDOUT_FILENO, (const void *)env[n], _strlen(env[n]));
write(STDOUT_FILENO, "\n", 1);
n++;
}
}
