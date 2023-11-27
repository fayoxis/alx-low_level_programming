#include "main.h"

/**
*create_file - Creates a file and writes text content to it
*@f_name: name of the file to create
*
*@text_content: content to write to the file
*Return: 1 on success, 0 on failure
*/

int create_file(const char *f_name, char *text_content)
{
	int fn, bytes_written, text_length = 0;

	if (!f_name)
		return (-1);

	fn = open(f_name, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fn == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;

		bytes_written = write(fn, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(fn);
			return (-1);
		}
	}

	close(fn);
	return (1);
}
