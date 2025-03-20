#include "developer_group.h"  //including all the needed libraries for developer_group.c
#include <stdio.h>
#include <string.h>

DeveloperGroup create_developer_group(const char logo[LOGO_HEIGHT][LOGO_WIDTH + 1]) {
    DeveloperGroup group;
    for (int i = 0; i < LOGO_HEIGHT; i++) {
        strcpy(group.logo[i], logo[i]);
    }
    group.num_developers = 0;
    return group;
}    //defining the functionality of adding and assigning the group logo to a specified group 

void add_developer(DeveloperGroup *group, Developer developer) {
    if (group->num_developers < MAX_DEVELOPERS) { // developer group can be maximum 2 people
        group->developers[group->num_developers++] = developer;
    } else {
        printf("More devs than allowed\n"); //output statement if more developers are tried to be added than allowed 
    }
}    //adding the developers to the DeveloperGroup 

void print_group_logo(DeveloperGroup *group) {
    printf("Gruppenlogo:\n");
    for (int i = 0; i < LOGO_HEIGHT; i++) {
        printf("%s\n", group->logo[i]);
    }
} //function to output only the group logo stored in DeveloperGroup

void print_group(DeveloperGroup *group) {
    print_group_logo(group);
    printf("Gruppenmitglieder:\n");
    for (int i = 0; i < group->num_developers; i++) {
        print_developer(&group->developers[i]);
    }
}    //function to only output the group members 
