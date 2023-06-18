#include <stdint.h>

struct vehicle
{
    char name[32];
    int32_t speed;
};

int vehicle_init(struct vehicle *self, const char *name);
int vehicle_deinit(struct vehicle *self);

int vehicle_accelerate(struct vehicle *self);
int vehicle_decelerate(struct vehicle *self);
