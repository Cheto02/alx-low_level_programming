#include "main.h"

#define BUFFER_SIZE 1024
/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 1 on incorrect argument count
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename src_file filename dst_file\n", av[0]);
        exit(1);
    }
    res = copy_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
/**
 * copy_file - Copies the content of a file to another file
 * @src_file: The source file to read from
 * @dst_file: The destination file to write to
 *
 * Return: 1 on success, -1 on failure
 */
int copy_file(const char *src_file, const char *dst_file)
{
    FILE *fp_src, *fp_dst;
    char buffer[1024];
    size_t bytes_read, bytes_written;

    fp_src = fopen(src_file, "r");
    fp_dst = fopen(dst_file, "w");

    if (fp_src == NULL || fp_dst == NULL)
    {
        dprintf(2, "Error opening files %s and %s\n", src_file, dst_file);
        return (-1);
    }

    while ((bytes_read = fread(buffer, 1, sizeof(buffer), fp_src)) > 0)
    {
        bytes_written = fwrite(buffer, 1, bytes_read, fp_dst);
        if (bytes_written != bytes_read)
        {
            dprintf(2, "Error writing %s\n", dst_file);
            return (-1);
        }
    }

    fclose(fp_src);
    fclose(fp_dst);

    return (1);
}

