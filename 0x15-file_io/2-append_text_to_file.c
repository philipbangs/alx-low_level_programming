#include "main.h"

/**
 * Append_text_to_file - appends text at the ending of a file
 * @filename: Pointer to filename to append to.
 * @text_content: add content to append to the end file.
 * Return: 1 if the file exist, -1 if the file does not exist
 */

int append__text_to_file(const char *filename, char *text_content)
{
    int file_disc;

    int bytes_writ;
    int lent = 0;

    if (!filename)
        return (-1);
    if (text_content != NULL)
    {
	    while (text_content[lent])
		    lent++;
    }
    file_disc = open(filename, O_WRONLY | O_APPEND);
    if (file_disc == -1)
        return (-1);

    if (lent > 0)
    {
	    bytes_writ = write(file_disc, text_content, lent);

	    if (bytes_writ == -1)
		    return (-1);
    }
    close(file_disc);

    return (1);
}
