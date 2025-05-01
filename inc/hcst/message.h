#ifndef hcst_MESSAGE_H
#define hcst_MESSAGE_H

#include "stdint.h"
#include "stdlib.h"

#define hcst_BIT_SET(byte, bit) (byte) |= (1U << (bit))
#define hcst_BIT_CLEAR(byte, bit) (byte) &= ~(1U << (bit))
#define hcst_BIT_IS_ACTIVE(byte, bit) (((byte) & (1 << (bit))) != 0)

enum {
    hcst_MOTOR_POWERED_BYTE = 0,
    hcst_MOTOR_DIRECTION_BYTE,
    hcst_SPEED_BYTE,
    hcst_MESSAGE_SIZE_BYTES,
};

enum {
    hcst_FLM_BIT = 0,
    hcst_FRM_BIT,
    hcst_RLM_BIT,
    hcst_RRM_BIT,
};

typedef uint8_t *hcst_message_t;

#define hcst_MESSAGE_INIT(message) message=(hcst_message_t)calloc(hcst_MESSAGE_SIZE_BYTES, sizeof(hcst_message_t))
#define hcst_MESSAGE_CHECK(message) if((message)==NULL) {return hcst_INVALID;}


#endif
