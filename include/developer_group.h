#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#include "developer.h"    //including the developer.h library to use in and build developer_group.h

#define MAX_DEVELOPERS 2  
#define LOGO_WIDTH 155    
#define LOGO_HEIGHT 59    
//Maximum developer count
//group logo specifications width
//group logo specifications height

typedef struct {
    Developer developers[MAX_DEVELOPERS];
    char logo[LOGO_HEIGHT][LOGO_WIDTH + 1]; // +1 NULL TERMINATOR
    int num_developers;
} DeveloperGroup;  // prototype struct to define the parameters of the "DeveloperGroup"

DeveloperGroup create_developer_group(const char logo[LOGO_HEIGHT][LOGO_WIDTH + 1]); //functions that define the different variables in the struct DeveloperGroup
void add_developer(DeveloperGroup *group, Developer developer); //functions that define the different variables in the struct DeveloperGroup
void print_group_logo(DeveloperGroup *group); //functions that define the different variables in the struct DeveloperGroup
void print_group(DeveloperGroup *group); //functions that define the different variables in the struct DeveloperGroup

#endif // DEVELOPER_GROUP_H
