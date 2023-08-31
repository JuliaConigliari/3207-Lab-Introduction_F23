#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randchar ()
{
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = rand() % (sizeof(alphabet) - 1);
    return alphabet[index];
}
