#include "developer.h" // including the developer.h library in order to define its contents within the .c file
#include <string.h> //using functions of the string.h library

Developer create_developer(const char *name, const char *alias) { //input variables of the create_developer function that uses the struct Developer
    Developer dev; // creating a "object"/ struct called dev
    strcpy(dev.name, name); //copying the input name into the dev variable name
    strcpy(dev.alias, alias); //copying the input alias into the dev variable alias
    return dev; // the return of the function is the dev that now has its name array and char array filled with contents
}

void print_developer(Developer *developer) {
    printf("Name: %s, Alias: %s\n", developer->name, developer->alias);
} //output of the developer information specified through create_developer via the variable dev
