#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <elf.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void elf_check(unsigned char *e_indnt);
void display_the_type(unsigned int e_type, unsigned char *e_indnt);
void elf_closer(int elf);
void display_os_abi(unsigned char *e_indnt);
void magic_display(unsigned char *e_indnt);
void display_the_entry(unsigned long int e_ntry, unsigned char *e_indnt);
void version_display(unsigned char *e_indnt);
void display_the_data(unsigned char *e_indnt);
void display_the_class(unsigned char *e_indnt);
void abi_printer(unsigned char *e_indnt);

#endif
