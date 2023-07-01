#ifndef FOUR_DIGIT_DISPLAY_H
#define FOUR_DIGIT_DISPLAY_H

#include <stdint.h>

struct four_digit_display;
size_t four_digit_display_size();

int four_digit_display_init(struct four_digit_display *self);
int four_digit_display_deinit(struct four_digit_display *self);

int four_digit_display_set(struct four_digit_display *self, int number);

#endif    // FOUR_DIGIT_DISPLAY_H
