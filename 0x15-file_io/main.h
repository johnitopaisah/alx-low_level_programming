#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**************** All the function prototypes for task 3 ***************/
char *create_buffer(char *fil);
void close_file(int fd);
int main(int ac, char *av[]);

#endif /* MAIN_H */
