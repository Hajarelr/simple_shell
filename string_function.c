#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
/**
 * _strcmp - Function that compares two strings
 * @s1: input value
 * @s2: input value
 * Return: s1[n] - s2[n]
 */
int _strcmp(char *s1, char *s2)
{
int n;
n = 0;
while (s1[n] != '\0' && s2[n] != '\0')
{
if (s1[n] != s2[n])
{
return (s1[n] - s2[n]);
}
n++;
}
return (0);
}
