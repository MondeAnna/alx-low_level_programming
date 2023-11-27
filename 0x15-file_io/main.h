#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define FILENAME_MISSING 0
#define MALLOC_FAIL 0
#define OPEN_ERROR -1
#define OPEN_FAIL 0
#define READ_FAIL -1
#define WRITE_FAIL -1
#define STDOUT 1

ssize_t read_textfile(const char *filename, size_t read_count);

#endif /* MAIN_H */
