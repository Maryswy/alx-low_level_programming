#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * op_c - Print character
 * @form: name va_list
 * Return: Always 0
 */

void op_c(va_list form)
{
	printf("%c", va_arg(form, int));
}


/**
 * op_i - Print Integer
 * @form: name va_list
 * Return: Always 0
 */
void op_i(va_list form)
{
	printf("%i", va_arg(form, int));
}



/**
 * op_f - print FLoat numbers
 * @form: name of va_list
 * Return: Always 0
 */
void op_f(va_list form)
{
	printf("%f", va_arg(form, double));
}



/**
 * op_s -print string
 * @form: name va_list
 * Return: Always 0
 */
void op_s(va_list form)
{
	char *str;

	str = va_arg(form, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 * print_all - check the code
 * @format: number of arguments
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(valist, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(valist, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(valist, double), sep);
				break;
			case 's':
				str = va_arg(valist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}


