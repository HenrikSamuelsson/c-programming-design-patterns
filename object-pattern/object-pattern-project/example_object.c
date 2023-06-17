#include "example_object.h"

#include <string.h>

int animal_init(struct animal *self)
{
    memset(self, 0, sizeof(*self));
    return 0;
}
