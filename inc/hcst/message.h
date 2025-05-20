#ifndef hcst_MESSAGE_H
#define hcst_MESSAGE_H

#include "stdint.h"
#include "stdlib.h"

#define hcst_BIT_SET(byte, state, bit) (byte) |= (state << (bit))
#define hcst_BIT_CLEAR(byte, bit) (byte) &= ~(1U << (bit))
#define hcst_BIT_IS_ACTIVE(byte, bit) (((byte) & (1 << (bit))) != 0)

#define hcst_BYTE_SET(byte, value) (byte) = (value)
#define hcst_BYTE_CLEAR(byte) (byte) = (0)

typedef enum {
    hcst_FLM = 0,
    hcst_FRM,
    hcst_RLM,
    hcst_RRM,
    hcst_NUM_OF_MOTORS
} hsct_motor_bit_t;

typedef enum {
    hcst_MOTOR_POWERED_BYTE = 0,
    hcst_MOTOR_DIRECTION_BYTE,
    hcst_SPEED_BYTE,
    hcst_MESSAGE_SIZE_BYTES = hcst_SPEED_BYTE + hcst_NUM_OF_MOTORS
} hcst_message_byte_t;

typedef uint8_t *hcst_message_t;

#define hcst_MESSAGE_INIT(message) message=(hcst_message_t)calloc(hcst_MESSAGE_SIZE_BYTES, sizeof(hcst_message_t))
#define hcst_MESSAGE_CHECK(message) if((message)==NULL) {return hcst_INVALID;}
#define hcst_MESSAGE_DEINIT(message) free(message)


#endif
