#ifndef MESSAGEMODEL_H
#define MESSAGEMODEL_H

#include "stdint.h"

#define CONTROL_BYTE 0
#define SPEED_BYTE 1
#define MESSAGE_SIZE_BYTES 2

#define SET_BIT(byte, bit) (byte) |= (1 << (bit))
#define CLR_BIT(byte, bit) (byte) &= ~(1 << (bit))

#define IS_BIT_ACTIVE(value, bit) (((value) & (bit)) != 0)

#define MOTOR_STATE_BIT (1 << 3) // 1 - ON / 0 - OFF
#define LEFT_TURN_BIT (1 << 2)
#define RIGHT_TURN_BIT (1 << 1)

typedef uint8_t *message_t;

#endif
