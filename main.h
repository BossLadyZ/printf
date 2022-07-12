#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;
int _printf(const char *format, ...);
char* convert(unsigned int, int);
#endif
