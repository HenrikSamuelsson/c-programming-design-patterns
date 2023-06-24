#include "vehicle.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct vehicle v;
    vehicle_init(&v, "car");
    vehicle_accelerate(&v);

    printf("The %s is driving at %d km/h.", v.name, v.speed);
    printf("\n");

    return EXIT_SUCCESS;
}
