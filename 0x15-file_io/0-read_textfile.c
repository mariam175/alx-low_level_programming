#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile- ...
 *@filename: ....
 *@letters:...
 *Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rd, wr;
	char *bf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bf = malloc(letters);
	if (bf == NULL)
		return (0);
	rd = read(f, bf, letters);
	wr = write(STDOUT_FILENO, bf, rd);
	close(f);
	free(bf);
	return (wr);
}
