#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
char *PATH_c(char *c);
void print_env(void);
int handle_builtin(char **command, char *line);
extern char **environ;
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void free_buffers(char **buf);
void exit_command(char **command, char *line);
struct builtin
{
char *env;
char *exit;
} builtin;
#endif
