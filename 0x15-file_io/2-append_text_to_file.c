#include "main.h"

/**
 * _strlen - gives the length of a string
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
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer of source file
 * @text_content: text
 *
 * Return: the appended file
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
if (write(fd, text_content, _strlen(text_content)) == -1)
return (-1);
}
close(fd);
return (1);
}
