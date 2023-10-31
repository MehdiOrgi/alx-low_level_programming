#include "main.h"

/**
 * read_textfile - Read and print a text file to standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed. If an error occurs,
 * or if the file can't be opened or read, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t num_read, num_written;
    char *buf;

    if (filename == NULL)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buf);
        return (0);
    }

    num_read = read(fd, buf, letters);
    if (num_read == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    num_written = write(STDOUT_FILENO, buf, num_read);
    if (num_written == -1 || num_read != num_written)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);
    return (num_written);
}

