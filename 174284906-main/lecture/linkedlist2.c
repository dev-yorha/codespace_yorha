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

        // If there is no node yet, the first input element will be the first element when output
        if (list == NULL)
        {
            list = n;
        }

        //If there are already node, run downward the last node
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // When reach the last node
                if (ptr->next == NULL)
                {
                    // Append new node
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    // Print whole list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
}
