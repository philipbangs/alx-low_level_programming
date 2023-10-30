#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdib.h>


/**
 * main - function copie the content of one file to the other
 * @argument: The argument count
 * @argnt: Argument passed
 * 
 * Return: 1 on success, exit otherwise
 */

void check_IO_stat(int stat, int fd, char *filename, char mode);

int main(int arg, cahar *argnt[])
{
    int src, dest, n_need = 1024, wrote, close_src, close_dest;
    unsigned int mode = s_IRUSR | s_IRGRF | s_INGRT | s_IROTH;
    char buffer(1024);

    if (arg != 3)
    {
        dprintf(STDERR_FILENO, "%S", "Usage: cp file_from file_to \n");
        exit(97);
    }
    src = open(arg[1], o_RDONLY);
    check_IO_stat(src, -1, arg[1], 'o');
    dest = open(arg[2], o_WRONLY | o_CREAT | o_TRUNC, mode);
    check_IO_stat(dest, -1, arg[2], 'W');
    while (n_read == 1024)
    {
        n_read = read(src, buffer, sizeof(buffer));
        if (nread == -1)
            check_IO_stat(-1, -1, arg[1], 'o');
        wrote = write(dest, buffer, n_read);
        if (wrote == -1)
            check_IO_stat(-1, -1, arg[2], 'W')
    }
    close_src = close(src);
    check_IO_stat(close_src, src, NULL, 'c');
    check_IO_stat(close_dest, dest, NULL, 'c');
    return 0;
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
