#include <stdio.h>
#include "main.h"

/**
 * error_file - function that checks a file.
 * @file_from: content of file from.
 * @file_to: content of file to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - check for main code.
 * @argc: arguments numbers
 * @argv: pointer to arguments vector.
 * Return: exit
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t nchar, wr;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
error_file(file_from, file_to, argv);

nchar = 1024;
while (nchar == 1024)
{
nchar  = read(file_from, buffer, 1024);
if (nchar == -1)
error_file(-1, 0, argv);
wr = write(file_to, buffer, nchar);
if (wr == -1)
error_file(0, -1, argv);
}
err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
