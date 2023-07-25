#include <stdio.h>
#include"singleton_int.h"

int main (void)
{
    printf("Our singleton int equals %d", *getSingletonInt());
    return 0;
}
