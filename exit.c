#include "main.h"
/**
 * exit_command - Function that handles the exit command
 * @command: tokenized command
 * @line: Input
 * Return: void (Success)
 */
void exit_command(char **command, char *line)
{
free(line);
free_buffers(command);
exit(0);
}
