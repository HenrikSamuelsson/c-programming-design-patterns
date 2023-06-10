#include "example_object.h"

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    struct example_object object;
    example_object_init(&object);

    printf("Our object data = %d", object.data);
    printf("\n");

    return EXIT_SUCCESS;
}
