#include "main.h"
/**
 *append_text_to_file- ...
 *@filename: ....
 *@text_content:...
 *Return:...
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len, wr;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(f, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(f);
	return (1);
}
