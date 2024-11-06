#ifndef HCTP_MESSAGEMODEL_H
#define HCTP_MESSAGEMODEL_H

#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"

#define HCTP_CONTROL_BYTE 0
#define HCTP_SPEED_BYTE 1
#define HCTP_MESSAGE_SIZE_BYTES 2

#define HCTP_SET_BIT(byte, bit) (byte) |= (1 << (bit))
#define HCTP_CLR_BIT(byte, bit) (byte) &= ~(1 << (bit))

#define HCTP_IS_BIT_ACTIVE(value, bit) (((value) & (1 << (bit))) != 0)

#define HCTP_MOTOR_STATE_BIT    2   // 1 - ON / 0 - OFF
#define HCTP_LEFT_TURN_BIT      1
#define HCTP_RIGHT_TURN_BIT     0

typedef uint8_t *hctp_message_t;

typedef struct {
    bool motorState;
    bool leftTurn;
    bool rightTurn;
    uint8_t speed;
} hctp_message_readyToEncode_t;

typedef hctp_message_readyToEncode_t* hctp_message_readyToEncode_handler_t;

#define hctp_message_init(message) message=(hctp_message_t)malloc(sizeof(hctp_message_t) * HCTP_MESSAGE_SIZE_BYTES);

#endif
