#include <stdio.h>

#include <example.h>

int main(int argc, char *argv[])
{
    Example ex = Example__new();

    puts(Example__getData(ex));

    Example__delete(&ex);

    return 0;
}
