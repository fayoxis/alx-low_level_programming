#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text content to a file.
 * @f_name: This function takes the name of the file (@f_name)
 * @text_content: The text content to be appended.
 *
 * Return: It returns 1 on success and -1 on failure.
 */
int append_text_to_file(const char *f_name, char *text_content)
{
FILE *f;
size_t length, bytes_written;
if (!f_name)
return (-1);

f = fopen(f_name, "ayile");
if (!f)
return (-1);
if (text_content)
{
length = strlen(text_content);
bytes_written = fwrite(text_content, sizeof(char), length, f);
if (bytes_written != length)
{
fclose(f);
return (-1);
}
}
fclose(f);

return (1);
}
