#include <stdlib.h>
#include <string.h>

#include <example.h>

Example
Example__new()
{
    Example newExample = malloc(sizeof(struct _example));
    char *newData = malloc(32 * sizeof(char));
    strncpy(newData, "Hello world", 11);
    newExample->data = newData;
    return newExample;
}

char *Example__getData(Example ex)
{
    return ex->data;
}

void Example__delete(Example *ex)
{
    if ((*ex)->data)
        free((*ex)->data);
    (*ex)->data = NULL;
    if (*ex)
        free(*ex);
    *ex = NULL;
}
