#include "main.h"
/**
 * env_builtin - Function that prints the environment
 * Return: void (Success)
 */
void env_builtin(void)
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
