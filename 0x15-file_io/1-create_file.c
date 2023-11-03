#include "main.h"

/**
 * create_file - creates a file and write
 * the given text to the fiel
 * @filename: pointer to the filename
 * @text_content: content writed in the files
 *
 * Return: if the program fails NULL either 1
 */

int create_file(const char *filename, char *text_content)
{
    int file_disc, len = 0, bytes_writ = 0;

    if (!filename)
        return (-1);
    if (text_content != NULL)
    {
	    for(len = 0; text_content[len];)
	    	len++;
    }


    file_disc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    bytes_writ = write(file_disc,text_content,len);

    if (file_disc == -1 || bytes_writ == -1)
	    return (-1);
    close(file_disc);
    return (1);
}
