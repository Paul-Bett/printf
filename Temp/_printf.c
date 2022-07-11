#include "main.h"
/**
 * _printf - Print based on format specifier
 * @format - Specifier argument
 * Return - Integer value
 **/

int _printf(const char *format, ...)
{
	va_list vl;
	int i = 0, j=0;
	char buff[100]={0}, tmp[20];
	char * format_arg;

	va_start( vl, format );
	while (format && format[i])
	{
	if(format[i] == '%')
	{
		i++;
		switch (format[i]) {
	/* Convert char */
			case 'c': {
				buff[j] = (char)va_arg( vl, int );
				j++;
			break;
			}
	/* copy formating */
			case 's': {
				format_arg = va_arg( vl, char* );
				strcpy(&buff[j], format_arg);
				j += strlen(format_arg);
			break;
			}
		}
	}
	else
	{
		buff[j] =format[i];
		j++;
	}
	i++;
	} 
	fwrite(buff, j, 1, stdout); 
	va_end(vl);
	return j;
}
