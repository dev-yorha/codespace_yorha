#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct // Create new data structure
{
    string name;
    string number;
}
person;
int main(void)
{
    person people[3];

    people[0].name = "Yorha";
    people[0].number = "0869.862.896";

    people[1].name = "Kuku";
    people[1].number = "0123.456.789";

    people[2].name = "Navia";
    people[2].number = "0246.135.798";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
