#include "main.h"

/**
 * read_textfile - function to read a text file and prints to POSIT
 * @filename: File to open
 * @letters: numbers of letters to read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fo;
ssize_t fr, fw;
char *tmp;

if (filename == NULL)
return (0);

tmp = malloc(sizeof(char) * letters);
if (tmp == NULL)
return (0);

fo = open(filename, 0_RDONLY);
if (fo == -1)
return (0);


fr = read(fo, tmp, letters);
if (fr < 0)
return (0);

fw = write(STOUT_FILENO, tmp, fr);

free(tmp);
close(fo);

if (fw < 0)
return (0);
return (fw);
}
