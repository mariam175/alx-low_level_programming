#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_file- ...
 *@filename: ....
 *@text_content:...
 *Return:...
 */
int create_file(const char *filename, char *text_content)
{
	int f, len;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		write(f, text_content, len);
	}
	close(f);
	return (1);
}
