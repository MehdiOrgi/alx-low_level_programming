#include "main.h"

/**
 * error_usage - Print usage message and exit with code 97
 */
void error_usage(void)
{
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
}

/**
 * error_read - Print error reading message and exit with code 98
 * @filename: The name of the file that could not be read
 */
void error_read(const char *filename)
{
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
    exit(98);
}

/**
 * error_write - Print error writing message and exit with code 99
 * @filename: The name of the file that could not be written
 */
void error_write(const char *filename)
{
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
    exit(99);
}

/**
 * error_close - Print error closing message and exit with code 100
 * @fd: The file descriptor that couldn't be closed
 */
void error_close(int fd)
{
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
    exit(100);
}

/**
 * main - Copy content from one file to another
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, various error codes on failure
 */
int main(int ac, char **av)
{
    int fd_from, fd_to;
    ssize_t len;
    char buf[1024];

    if (ac != 3)
        error_usage();

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
        error_read(av[1]);

    fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
    if (fd_to == -

