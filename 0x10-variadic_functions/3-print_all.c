#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;
	char *str;
	char fmt[] = "cifs";

	va_start(list, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("nil");
					break;
				}
				printf("%s", str);
		}
		j = 0;
		while (fmt[j])
		{
			if (format[i] == fmt[j] && format[i + 1])
				printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
