#include "main.h"

/**
 * main - entry point.
 * @argc: count elements
 * @argv: arrays of elements
 *
 * Return: new arrays of elements
 */

int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(argv[1], argv[2]);
exit(0);
}

/**
 * copy_file - copy content of file one to file two.
 * @file_one: source file
 * @file_two: destination file
 *
 * Return: void
 */

void copy_file(const char *file_one, const char *file_two)
{
int ofd, tfd, readed;
char buff[1024];
ofd = open(file_one, O_RDONLY);
if (!file_one || ofd == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file_one %s\n", file_one);
exit(98);
}
tfd = open(file_two, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((readed = read(ofd, buff, 1024)) > 0)
{
if (write(tfd, buff, readed) != readed || tfd == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to file_two %s\n", file_two);
exit(99);
}
}
if (readed == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file_one %s\n", file_one);
exit(98);
}
if (close(ofd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file_one %d\n", ofd);
exit(100);
}
if (close(tfd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file_two %d\n", tfd);
exit(100);
}
}
