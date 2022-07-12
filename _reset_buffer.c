#include "main.h"
/**
  * reset_buffer - function that initializes and resets a buffer
  * @buffer: buffer size
  */
void _reset_buffer(char *buffer)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		buffer[i] = 0;
	}
	buffer[i] = '\0';
}
