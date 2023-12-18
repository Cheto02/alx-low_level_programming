#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>


#define BUFFER_SIZE 1024


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void error_exit(int code, char *message, char *file_name);
int main(int ac, char **av);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(const char *src_file, const char *dst_file);

#endif
