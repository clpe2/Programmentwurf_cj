#include "developer_group.h"
#include <stdio.h>
#include <string.h>

DeveloperGroup create_developer_group(const char logo[LOGO_HEIGHT][LOGO_WIDTH + 1]) {
    DeveloperGroup group;
    for (int i = 0; i < LOGO_HEIGHT; i++) {
        strcpy(group.logo[i], logo[i]);
    }
    group.num_developers = 0;
    return group;
}

void add_developer(DeveloperGroup *group, Developer developer) {
    if (group->num_developers < MAX_DEVELOPERS) {
        group->developers[group->num_developers++] = developer;
    } else {
        printf("More devs than allowed"\n);
    }
}

void print_group_logo(DeveloperGroup *group) {
    printf("Gruppenlogo:\n");
    for (int i = 0; i < LOGO_HEIGHT; i++) {
        printf("%s\n", group->logo[i]);
    }
}

void print_group(DeveloperGroup *group) {
    print_group_logo(group);
    printf("Gruppenmitglieder:\n");
    for (int i = 0; i < group->num_developers; i++) {
        print_developer(&group->developers[i]);
    }
}
