#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - (-1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
int nasa, x, length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
nasa = open(filename, O_WRONLY | O_APPEND);
x = write(nasa, text_content, length);
if (nasa == -1 || x == -1)
return (-1);
close(nasa);
return (1);
}
