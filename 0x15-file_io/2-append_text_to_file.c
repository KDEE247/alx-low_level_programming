#include "main.h"
/**
 * append_text_to_file - Appends Text To EOF.
 * @filename: Ptr to Filename given.
 * @text_content: String to add to EOF.
 * Return: If fns fails, or filename is NULL, non existent,
 * no permission - -1; else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
