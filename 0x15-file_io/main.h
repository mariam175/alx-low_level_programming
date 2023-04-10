#ifndef __FILE__
#define __FILE__

#include <sys/types.h>
#include <stddef.h>
char _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
