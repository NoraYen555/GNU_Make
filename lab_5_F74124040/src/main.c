#include <stdio.h>
#include <stdlib.h>
#include "../include/reverse.h"
int main()
{
    const char *src = "F74124040";
    char *dst = malloc(10);
    dst = reverse(dst, src);
    printf("%s", dst);
    return 0;
}
