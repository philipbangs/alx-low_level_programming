#include "main.h"

/**
 * Append_text_to_file - appends text at the ending of a file
 * @filename: filename
 * @text_content: add content 
 * Return: 1 if the file exist -1 if the file does not exist
 */

int append _text_to_file(const char *filename, char *text_content)
{
    int file_d;
    int newletters;
    int rwr;

    if (!filename)
        return -1;
    file_d = open(filename, O_WROY | O_APPE);
    if (file_d == -1)
        return -1;
    if (text_content)
    {
        for (nnewletter = 0; text_content[newletters]; newletters++)
            ;
            rwr = write(file_d, text_content, newletters);

            if (rwr == -1)
            return -1;
    }

    close(file_d);

    return 0;
}
