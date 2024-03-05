#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define FILE_ERROR -1
#define INVALID_NUMBER_OF_ARGUMENTS 97
#define DOES_NOT_EXIST_OR_UNABLE_TO_READ 98
#define CANNOT_CREATE_OR_WRITE 99
#define CANNOT_CLOSE 100
#define ARGUMENT_COUNT_EXPECTED 3

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);

#endif /* MAIN_H */
