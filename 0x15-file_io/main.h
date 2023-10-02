#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_arguments(int argc);
int open_source_file(char *filename);
int open_dest_file(char *filename);
void copy_content(int file_from, int file_to);
void close_files(int file_from, int file_to);

#endif
