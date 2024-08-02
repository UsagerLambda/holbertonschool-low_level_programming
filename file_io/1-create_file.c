#include "main.h"
/**
 * create_file - Ecrit text_content dans filename
 * @filename: nom du fichier donnée dans argv[2]
 * @text_content: string donnée dans argv[3]
 * Return: 1 en cas de succès
 */
int create_file(const char *filename, char *text_content)
{
size_t len = 0;
int fd, bytes_written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
	return (-1);

if (text_content == NULL)
{
	write(fd, "", len);
	close(fd);
	return (1);
}
else
{
	while (text_content[len]) /* calcul la longueur de la string text_content */
	len++;
	bytes_written = write(fd, text_content, len); /* écrit text_content in fd*/
	if (bytes_written == -1)
	{
	close(fd);
	return (-1);
	}
}
close(fd);
return (1);
}
