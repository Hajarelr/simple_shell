#include "main.h"
/**
* prompt - function to display $
Return: void
*/
void prompt(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
}
