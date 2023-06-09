#include "example_object.h"

int my_object_init(struct my_object *self)
{
    memset(self, 0, sizeof(*self))
    return 0;
}
