#ifndef _FILE_IO_
#define _FILE_IO_
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void print_entry(char *head);
void print_entry(char *head);
void print_field(const char *name, int value, const char *format);
void print_class(char *head);
void print_version(char *head);
void print_data(char *head);
void print_abi(char *head);
void print_type(char *head);
int main(int argc, char *argv[]);
size_t read_textfile(const char *f_name, size_t L);

int append_text_to_file(const char *f_name, char *text_content);
void copy_file(const char *srcs, const char *dest);
int create_file(const char *f_name, char *text_content);
int _strlen(char *w);


#endif

