#include <stdint.h>

struct vehicle;

size_t vehicle_size(void);

int vehicle_init(struct vehicle *self, const char *name);
int vehicle_deinit(struct vehicle *self);

int vehicle_accelerate(struct vehicle *self);
int vehicle_decelerate(struct vehicle *self);
int vehicle_getSpeed(struct vehicle *self);
