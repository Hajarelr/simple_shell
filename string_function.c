#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: A pointer to the characters string
 * Return: The length if the character string
 */
int _strlen(const char *s)
{
int length = 0;
if (!s)
return (length);
for (length = 0; s[length]; length++)		
;
return (length);
}
