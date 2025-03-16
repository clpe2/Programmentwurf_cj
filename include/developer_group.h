#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#include "developer.h"

#define MAX_DEVELOPERS 2
#define LOGO_WIDTH 155
#define LOGO_HEIGHT 59

typedef struct {
    Developer developers[MAX_DEVELOPERS];
    char logo[LOGO_HEIGHT][LOGO_WIDTH + 1]; // +1 für null termination
    int num_developers;
} DeveloperGroup;

DeveloperGroup create_developer_group(const char logo[LOGO_HEIGHT][LOGO_WIDTH + 1]);
void add_developer(DeveloperGroup *group, Developer developer);
void print_group_logo(DeveloperGroup *group);
void print_group(DeveloperGroup *group);

#endif // DEVELOPER_GROUP_H
