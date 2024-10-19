#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// A node contains both an item and a pointer called next.
typedef struct node
{
    int number;
    struct node *next; // A pointer to another "struct node"
} node;

int main(int argc, char *argv[])
{
    // Create a pointer named list to point to a variable of type "node".
    // NULL mean it doesn't point to any node yet, but later it will be used to point to the first node in a linked list.
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        // Create a pointer to a node
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return 1;
        }

        // Set the number field of the node that n is pointing to equal to the real number
        // At the beginning, it is a string, now update it into an integer
        n->number = number;

        // Avoid the "next" field is a garbage value
        // https://cs50.harvard.edu/x/2024/notes/5/cs50Week5Slide077.png
        n->next = NULL;

        // Prepend node to list (check ppt to know more)
        // https://cs50.harvard.edu/x/2024/notes/5/cs50Week5Slide084.png
        n->next = list;

        // https://cs50.harvard.edu/x/2024/notes/5/cs50Week5Slide086.png
        list = n;
    }
    // Print whole list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // Free the list
    while (ptr != NULL)
    {
        node *temp_ptr = ptr->next;
        free(ptr);
        ptr = temp_ptr;
    }
}
