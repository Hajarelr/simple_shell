#include "main.h"
/**
 * exit_builtin - Function that handles the exit command
 * @n: Input 1
 * @m: Input 2
 * Return: void (Success)
 */
void exit_builtin(char **n, char *m)
{
free(m);
free_buffers(n);
exit(0);
}
