#include "main.h"

/**
 * _strlen - gives the length of a string.
 * @s: string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
int c = 0;
while (s[c])
c++;
return (c);
}

/**
 * create_file -  creates a file.
 * @filename: the name of the file to create
 * @text_content: pointer to the text inside the file
 *
 * Return: file created
 */

int create_file(const char *filename, char *text_content)
{
int fd;
if (!filename)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content)
write(fd, text_content, _strlen(text_content));
close(fd);
return (1);
}
