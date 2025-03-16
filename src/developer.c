#include "developer.h"
#include <string.h>

Developer create_developer(const char *name, const char *alias) {
    Developer dev;
    strcpy(dev.name, name);
    strcpy(dev.alias, alias);
    return dev;
}

void print_developer(Developer *developer) {
    printf("Name: %s, Alias: %s\n", developer->name, developer->alias);
}
