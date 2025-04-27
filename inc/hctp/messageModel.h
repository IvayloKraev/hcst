#ifndef HCTP_MESSAGEMODEL_H
#define HCTP_MESSAGEMODEL_H

#include "stdint.h"

#define HCTP_CONTROL_BYTE 0
#define HCTP_SPEED_BYTE 1
#define HCTP_MESSAGE_SIZE_BYTES 2

#define HCTP_SET_BIT(byte, bit) (byte) |= (1U << (bit))
#define HCTP_CLR_BIT(byte, bit) (byte) &= ~(1U << (bit))

#define HCTP_IS_BIT_ACTIVE(value, bit) (((value) & (1 << (bit))) != 0)

#define HCTP_LEFT_TURN_BIT      1
#define HCTP_RIGHT_TURN_BIT     0

typedef uint8_t *hctp_message_t;

#define HCTP_MESSAGE_INIT(message) message=(hctp_message_t)malloc(sizeof(hctp_message_t) * HCTP_MESSAGE_SIZE_BYTES);

#endif
