#ifndef hctp_MESSAGE_H
#define hctp_MESSAGE_H

#include "stdint.h"
#include "stdlib.h"

#define hctp_BIT_SET(byte, bit) (byte) |= (1U << (bit))
#define hctp_BIT_CLEAR(byte, bit) (byte) &= ~(1U << (bit))
#define hctp_BIT_IS_ACTIVE(byte, bit) (((byte) & (1 << (bit))) != 0)

enum {
    hctp_MOTOR_POWERED_BYTE = 0,
    hctp_MOTOR_DIRECTION_BYTE,
    hctp_SPEED_BYTE,
    hctp_MESSAGE_SIZE_BYTES,
};

enum {
    hctp_FLM_BIT = 0,
    hctp_FRM_BIT,
    hctp_RLM_BIT,
    hctp_RRM_BIT,
};

typedef uint8_t *hctp_message_t;

#define hctp_MESSAGE_INIT(message) message=(hctp_message_t)calloc(hctp_MESSAGE_SIZE_BYTES, sizeof(hctp_message_t))
#define hctp_MESSAGE_CHECK(message) if((message)==NULL) {return hctp_INVALID;}


#endif
