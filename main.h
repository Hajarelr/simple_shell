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
extern char **environ;
int _strlen(const char *s);
#endif
