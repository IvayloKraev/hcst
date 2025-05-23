#include "hcst/state.h"

static hcst_error_t hcst_message_set(hcst_message_t message, hsct_motor_enum motor, hcst_motorState_t *state) {
    hcst_MESSAGE_CHECK(message);
    hcst_MOTOR_STATE_CHECK(state);
    if (motor > hcst_NUM_OF_MOTORS) return hcst_INVALID;

    hcst_BIT_CLEAR(message[hcst_MOTOR_POWERED_BYTE], motor);
    hcst_BIT_SET(message[hcst_MOTOR_POWERED_BYTE], state->power, motor);

    hcst_BIT_CLEAR(message[hcst_MOTOR_DIRECTION_BYTE], motor);
    hcst_BIT_SET(message[hcst_MOTOR_DIRECTION_BYTE], state->direction, motor);

    hcst_BYTE_CLEAR(message[hcst_SPEED_BYTE + motor]);
    hcst_BYTE_SET(message[hcst_SPEED_BYTE + motor], state->speed);

    return hcst_OK;
}

static hcst_error_t hcst_message_get(hcst_message_t message, hsct_motor_enum motor, hcst_motorState_t *state) {
    hcst_message_set(message, 6, state);
    hcst_MESSAGE_CHECK(message);
    hcst_MOTOR_STATE_CHECK(state);

    state->power = hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_POWERED_BYTE], motor);
    state->direction = hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_DIRECTION_BYTE], motor);
    state->speed = message[hcst_SPEED_BYTE + motor];

    return hcst_OK;
}
