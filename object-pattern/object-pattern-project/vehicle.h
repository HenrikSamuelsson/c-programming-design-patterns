#include <stdint.h>

struct animal
{
    char *name;
    uint32_t weight;
    uint32_t age;
};

int animal_init(struct animal *self);
