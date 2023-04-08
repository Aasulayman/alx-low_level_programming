#include "main.h"

/**
 * append_text_to_file - function that appends text to file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fo, fw, lens;
if (filename == NULL)
return (-1);
fo = open(filename, O_WRONLY | O_APPEND);
if (fo == -1)
return (-1);
if (text_content == NULL)
{
close(fo);
return (1);
}
while (*(text_content + lens))
lens++;
fw = write(fo, text_content, lens);
close(fo);
if (fw == -1)
return (-1);
return (1);
}
