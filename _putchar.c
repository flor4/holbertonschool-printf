#include <unistd.h>

/**
 * _putchar - Writes a character to stdout using a static buffer.
 * @c: The character to print, or -1 to flush the buffer.
 *
 * Return: 1 on character write, 0 on flush, -1 on error.
 */

int _putchar(char c)
{
	static char buffer[1024]; /* Buffer to store characters */
	static int i;             /* Current index in buffer */
	int written;              /* Number of bytes written or error */

	/* If c == -1, flush the buffer */
	if (c == -1)
	{
		if (i > 0) /* If buffer always has chars in */
		{
			written = write(1, buffer, i);
			i = 0;
			if (written < 0)
				return (-1); /* Error during write */
		}
		return (0); /* Flushed */
	}

	buffer[i++] = c; /* Add character to buffer */

	/* If buffer is full, flush it */
	if (i == 1024)
	{
		written = write(1, buffer, i);
		i = 0;
		if (written < 0)
			return (-1); /* Error during write */
	}

	return (1); /* Character buffered or written */
}
