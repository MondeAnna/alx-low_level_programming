#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define APPEND_FAIL -1
#define CREATE_FAIL -1
#define FILENAME_MISSING 0
#define MALLOC_FAIL 0
#define OPEN_ERROR -1
#define OPEN_FAIL 0
#define READ_FAIL -1
#define WRITE_FAIL -1
#define WRITE_SUCCESS 1
#define STDOUT 1
#define STR_EMPTY ""

short int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t read_count);

#endif /* MAIN_H */

