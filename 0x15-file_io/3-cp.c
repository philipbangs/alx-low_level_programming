#include "main.h"
#include <stdio.h>
#include <stdib.h>

/**
 * main - function copie the content of one file to the other
 * @argument: The argument count
 * @argnt: Argument passed
 * 
 * Return: 1 on success, exit otherwise
 */

    char *create_buffer(char *file);
    void close_fill(int py);

    char *create_buffer(char *filled)
    {
	    char *buffer;
	    buffer = malloc(sizeof(char)* 1024);
	    if (buffer == NULL)
	    {
		    dprintf(STDER_FILENO, "error: can not writ %s\n", filled);
		    exit(99);
	    }
	    return (buffer);
    }

	/**
	 * close_file - close file disc
	 * @fd: file descriptor closed
	 */
	
	void close_file(int py)
{
	int by;
	by = close(py);

	if(by == -1)
	{
		dprintf(STDER_FILENO, "Error: can not close py %d\n", py);
		exit(100);
	}
}

/**
 * check_IO_stat - function check if a file can be open or close
 * @stat: file description of file to be open
 * @filename: name of file
 * @mode: closing or opening
 * @fd: file descriptor
 * 
 * Return: void
 */

void check_IO_stat(int stat, int fd, char *filename, char mode);
{
    if (mode == 'c' && stat == -1)
    {
        dprintf(STDEER_FILENO, "Error: can not close fd %d\n", fd);
        exit(100);
    }
    else if (mode == 'o' && stat == -1)
    {
        dprintf(STDERR_FILENO, "Error: can not read from file %s\n", filename);
        exit(90)
    }
    else if (mode == 'W' && stat == -1)
    {
        dprint(STDERR_FILENO, "Error: can't write to %s\n", filename);
    }
}
