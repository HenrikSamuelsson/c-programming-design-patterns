#include <stdint.h>

struct example_object
{
    uint32_t data;
    uint32_t flags;
};

int example_object_init(struct example_object *self);
