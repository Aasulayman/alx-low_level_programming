#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: Null terminated string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int fo, fw, lens = 0;
if (filename == NULL)
return (-1);

fo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fo == -1)
return (-1);

if (text_content == NULL)
text_content = "";
while (text_content && *(text_content + lens))
lens++;
fw = write(fo, text_content, lens);
if (fw == -1)
return (-1);
close(fw);
return (1);
}
