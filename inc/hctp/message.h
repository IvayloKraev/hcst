#ifndef hctp_MESSAGE_H
#define hctp_MESSAGE_H

#include "stdint.h"

#define hctp_CONTROL_BYTE       0
#define hctp_SPEED_BYTE         1
#define hctp_MESSAGE_SIZE_BYTES 2

#define hctp_SET_BIT(byte, bit) (byte) |= (1U << (bit))
#define hctp_CLR_BIT(byte, bit) (byte) &= ~(1U << (bit))

#define hctp_IS_BIT_ACTIVE(byte, bit) (((byte) & (1 << (bit))) != 0)

#define hctp_LEFT_TURN_BIT  1
#define hctp_RIGHT_TURN_BIT 0

typedef uint8_t *hctp_message_t;

#define hctp_MESSAGE_INIT(message) message=(hctp_message_t)malloc(sizeof(hctp_message_t) * HCTP_MESSAGE_SIZE_BYTES);

#endif
