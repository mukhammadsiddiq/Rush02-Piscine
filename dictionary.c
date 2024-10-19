#include "rush.h"
#include <stdio.h>

int parse_dictionary(const char *filename, DictEntry dictionary[], int *size) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), file) && *size < MAX_DICTIONARY_SIZE) 
    {
        char *key = strtok(line, ":");
        char *value = strtok(NULL, "\n");
        
        if (key && value) 
        {
            dictionary[*size].key = strdup(key);
            dictionary[*size].value = strdup(value);
            printf("Parsed Key: %s, Value: %s\n", key, value);

            (*size)++;
        }
    }
    fclose(file);
    return 0;
}

void convert_to_words(char *num, DictEntry dictionary[], int size) {
    int i;

    i = 0;
    while (i < size)
    {
        if (ft_strcmp(num, dictionary[i].key) == 0) 
        {
            ft_putstr(dictionary[i].value);
            write(1, "\n", 1);
            return;
        }
        printf("%s\n", dictionary[i].key);
        printf("my number");
        printf("%s\n", num);
        i++;
    }
    ft_putstr("Dict Error\n");
}

void free_dictionary(DictEntry dictionary[], int size) 
{
    int i;
    i = 0;
    while (i < size)
    {
        free(dictionary[i].key);
        free(dictionary[i].value);
        i++;
    }
}
