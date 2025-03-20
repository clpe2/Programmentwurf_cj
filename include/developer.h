#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <stdio.h>  //including the stdio.h library

typedef struct {
    char name[50];
    char alias[50];
} Developer;  //struct to define the parameters of the Developer

Developer create_developer(const char *name, const char *alias); //functions to access and specify the variables in the struct Developer
void print_developer(Developer *developer); //functions to access and specify the variables in the struct Developer

#endif // DEVELOPER_H
