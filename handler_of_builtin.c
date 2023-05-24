#include "main.h"
/**
 * handle_builtin - Function that handles exection of built_in env & exit
 * @command: tokenized commands
 * @line: Input
 * Return: 1 if it:s executed otherwise 0
 */
int handle_builtin(char **command, char *line)
{
struct builtin builtin = {"env", "exit"};
if (_strcmp(*command, builtin.env) == 0)
{
print_env();
return (1);
}
else if (_strcmp(*command, builtin.exit) == 0)
{
exit_command(command, line);
return (1);
}
return (0);
}
