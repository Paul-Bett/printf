#include "main.h"
/**
  * _write_string - function that writes a buffer conter
  * @buffer: buffer size
  */
void _write_string(char *buffer,int *index)
{
	int i;

	for (i = 0; i < *index; i++)
	{
		_putchar(buffer[i]);
	}
}
