#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <stdio.h>

typedef struct {
    char name[50];
    char alias[50];
} Developer;

Developer create_developer(const char *name, const char *alias);
void print_developer(Developer *developer);

#endif // DEVELOPER_H
