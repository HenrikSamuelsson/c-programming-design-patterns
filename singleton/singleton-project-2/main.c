#include <stdio.h>

int* singletonInt() {
     static int instance = 42;
     return &instance;
 }

int main (void)
{
    printf("Our singleton int equals %d", *singletonInt());
    return 0;
}
