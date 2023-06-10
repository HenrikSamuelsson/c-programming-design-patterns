#include "example_object.h"

#include <string.h>

int example_object_init(struct example_object *self)
{
    memset(self, 0, sizeof(*self));
    return 0;
}
