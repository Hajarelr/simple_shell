#include "main.h"
/**
* free_buffers - Function that frees the buffers
* @buf: buffer we went to free
* Return: void (Success)
*/
void free_buffers(char **buf)
{
int n = 0;
if (!buf || buf == NULL)
return;
while (buf[n])
{
free(buf[n]);
n++;
}
free(buf);
}
