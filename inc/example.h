#ifndef EXAMPLE_H
#define EXAMPLE_H

/**
 * @brief Example struct.
 * 
 */
typedef struct _example
{
    char *data;
} * Example;

/**
 * @brief Create new example instance.
 * 
 * @return Example 
 */
Example
Example__new();

/**
 * @brief Get data from example instance.
 * 
 * @param ex The example instance.
 * @return char* 
 */
char *Example__getData(Example ex);

/**
 * @brief Free the memory containing example instance.
 * 
 * @param ex The example instance.
 */
void Example__delete(Example *ex);

#endif
