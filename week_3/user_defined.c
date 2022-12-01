#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    int ID;
    // char name[20]; // char*
    char *name;
    unsigned int age;
    char lastName[20];
};

int main()
{
    struct person ismet;

    ismet.ID = 19011100;
    ismet.name = (char *)malloc(20 * sizeof(char));
    strcpy(ismet.name, "Gungor");
    ismet.age = 21;
    strcpy(ismet.lastName, "Ismet");

    printf("%d %s %s %d\n", ismet.ID, ismet.name, ismet.lastName, ismet.age);
    free(ismet.name);
    return 0;
}