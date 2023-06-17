#include "example_object.h"

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    struct animal a;
    animal_init(&a);

    printf("Our animal is %d years old.", a.age);
    printf("\n");

    return EXIT_SUCCESS;
}
