#include "main.h"
/**
 * read_textfile - Lit et écrit le contenue d'un fichier
 * @filename: pointer to a string who represent a file name
 * @letters: unsigned int represent the numbers of letters to read
 * Return: the numbers of letters written
 * (in octets, when 1 octet = 1 char)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd; /* descripteur de fichier (file descriptor) */
char *buffer; /* buffer de type char pour stocker les char lues du fichier */
/* variable qui compte le nombre d'octets lus et écrit */
ssize_t bytes_read = 0, bytes_written = 0;
if (filename == NULL)
return (0);
/* ouvre le fichier en lecture seule & assigne le descirpteur à fd */
fd = open(filename, O_RDONLY);
if (fd == -1) /*si l'ouverture échoue */
return (0);

buffer = malloc(letters); /* alloue mémoire de taille letters à buffer */
if (buffer == NULL)
{
	close(fd);
	return (0);
}
/* lit jusqu'à "letters" octets du fichier dans le buffer */
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
	free(buffer);
	close(fd);
	return (0);
}
/* écrit le contenue de buffer dans terminal jusqu'à "bytes_read" octets */
bytes_written = (STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
	free(buffer);
	close(fd);
	return (0);
}
free(buffer);
close(fd);
return (bytes_written);
}
