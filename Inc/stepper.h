#ifndef __STEPPER_H
#define __STEPPER_H

#include "gpio.h"
#define COUNTERCLOCKWISE 1
#define CLOCKWISE 0
#define ROTATE180 16*64


void full_step(int* step, int dir, GPIO_TypeDef* GPIOx, uint16_t Pin1, uint16_t Pin2, uint16_t Pin3, uint16_t Pin4);

#endif /* __STEPPER_H */