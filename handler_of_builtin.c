#include "main.h"
/**
 * handler_builtin - Function that handles exection of built_in env & exit
 * @n: Input 1
 * @m: Input 2
 * Return: 1 if it's executed otherwise 0
 */
int handler_builtin(char **n, char *m)
{
struct builtin builtin = {"env", "exit"};
if (_strcmp(*n, builtin.env) == 0)
{
env_builtin();
return (1);
}
else if (_strcmp(*n, builtin.exit) == 0)
{
exit_builtin(n, m);
return (1);
}
return (0);
}
