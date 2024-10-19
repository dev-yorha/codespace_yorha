    // Implements a dictionary's functionality

    #include <ctype.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <strings.h>

    #include "dictionary.h"

    // Represents a node in a hash table
    int ctr = 0;

    typedef struct node
    {
        char word[LENGTH + 1];
        struct node *next;
    } node;

    // TODO: Choose number of buckets in hash table
    const unsigned int N = 26;

    // Hash table
    node *table[N][N];

    // Returns true if word is in dictionary, else false
    bool check(const char *word)
    {
        // TODO
        unsigned int first_char = hash(word);
        unsigned int second_char = hash(word + 1);
        node *n = table[first_char][second_char];
        while (n != NULL)
        {
            if (strcasecmp(word, n->word) == 0)
            {
                return true;
            }
            n = n->next;
        }
        return false;
    }

    // Hashes word to a number
    unsigned int hash(const char *word)
    {
        // TODO: Improve this hash function
        if (!isalpha(word[0]))
        {
            return 0;
        }
        return toupper(word[0]) - 'A';
    }

    // Loads dictionary into memory, returning true if successful, else false
    bool load(const char *dictionary)
    {
        char *new_word = malloc(LENGTH + 1);
        FILE *src = fopen(dictionary, "r");
        if (src == NULL)
        {
            return false;
        }
        while (fscanf(src, "%s", new_word) == 1)
        {
            node *n = malloc(sizeof(node));
            strcpy(n->word, new_word);
            unsigned int first_char = hash(new_word);
            unsigned int second_char;
            if (strlen(new_word) == 1)
            {
                second_char = 0;
            }
            else
            {
                second_char = hash(new_word + 1);
            }
            n->next = NULL;
            if (table[first_char][second_char] == NULL)
            {

                table[first_char][second_char] = n;
                ctr++;
            }
            else
            {
                n->next = table[first_char][second_char];
                table[first_char][second_char] = n;
                ctr++;
            }
        }
        fclose(src);
        free(new_word);
        return true;
    }

    // Returns number of words in dictionary if loaded, else 0 if not yet loaded
    unsigned int size(void)
    {
        return ctr;
    }

    // Unloads dictionary from memory, returning true if successful, else false
    bool unload(void)
    {
        // TODO
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                node *ptr = table[i][j];
                while (ptr != NULL)
                {
                    node *temp = ptr;
                    ptr = ptr->next;
                    free(temp);
                }
            }
        }
        return true;
    }
