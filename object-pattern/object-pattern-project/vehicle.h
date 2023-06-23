#include <stdint.h>

#define NAME_SIZE   32

struct vehicle
{
    char name[NAME_SIZE];
    int32_t speed;
};

int vehicle_init(struct vehicle *self, const char *name);
int vehicle_deinit(struct vehicle *self);

int vehicle_accelerate(struct vehicle *self);
int vehicle_decelerate(struct vehicle *self);
