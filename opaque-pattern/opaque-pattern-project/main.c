#include "vehicle.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct vehicle *v = alloca(vehicle_size());
    vehicle_init(v, "car");
    
    vehicle_accelerate(v);

    printf("The vehicle is driving at %d km/h.", vehicle_getSpeed(v));
    printf("\n");

    return EXIT_SUCCESS;
}
