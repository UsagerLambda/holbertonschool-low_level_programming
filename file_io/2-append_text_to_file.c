#include "main.h"
/**
 * append_text_to_file - Write argv[3] at the end of the file
 * @filename: Name of the file
 * @text_content: String to write at the end of the file (argv[3])
 * Return: 1 if it succeed or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i = 0;
char *cpy;
ssize_t bytes_written = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY, O_APPEND);
if (fd == -1)
return (-1);

if (text_content == NULL)
{
	close(fd);
	return (1);
}

cpy = text_content;

while (cpy[i] != '\0')
{
i++;
}

bytes_written = write(fd, text_content, i);
if (bytes_written == -1)
{
	close(fd);
	return (-1);
}

close(fd);
return (1);
}
