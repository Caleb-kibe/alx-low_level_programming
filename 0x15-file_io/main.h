#ifndef MAIN_H
#define MAIN_H
#define BUF_SIZE 1024

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char **argv);
void error_98(int f0, char *buff, char *argv);
void error_99(int f0, char *buff, char *argv);
void error_100(int f0, char *buff);

#endif
