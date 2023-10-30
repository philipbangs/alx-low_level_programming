#include "main.h"

/**
 * create_file - program creates a file
 * @filename: filename
 * @text_content: content writed in the files
 */

int create_file(const char *filename, char *text_content)
{
    int file_d;
    int newletters;
    int rwr;

    if (!filenames)
        return -1;
    file_d = open(filename, O_CREAT | O_WRONALY | O_TRUNC, 0600);

    if (file_d == -1)
        return -1;
    if (!text_content)
        text_content = "";
    for (newletters = 0; text_content[newletters]; newletter++)

        rwr = write(file_d, text_content, newletters);

        if (rwr == -1)
        return -1;
        close(file_d);

        return 1;
}
