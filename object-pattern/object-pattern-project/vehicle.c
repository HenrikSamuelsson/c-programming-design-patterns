#include "vehicle.h"

#include <string.h>

int vehicle_init(struct vehicle *self, const char *name)
{
    int result = strncpy_s(self->name, NAME_SIZE, name, NAME_SIZE);
    self->speed = 0;
    return result;
}

int vehicle_deinit(struct vehicle * self)
{
    // Nothing to do here.
    return 0;
}

int vehicle_accelerate(struct vehicle *self)
{
    self->speed += 1;
    return 0;
}

int vehicle_decelerate(struct vehicle *self)
{
    self->speed -= 1;
    if (self->speed < 0)
    {
        self->speed = 0;
    }
    return 0;
}
