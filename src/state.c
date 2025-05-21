#include "hcst/state.h"

static hcst_result_t hcst_motor_state_set(hcst_motor_state_handler_t state, hcst_state_t powered, hcst_state_t direction, hcst_speed_t speed) {
    hcst_MOTOR_STATE_CHECK(state);

    state->power = powered;
    state->direction = direction;
    state->speed = speed;

    return hcst_OK;
}

static hcst_result_t hcst_state_set(hcst_message_t message, hsct_motor_bit_t motor, hcst_motor_state_handler_t state) {
    hcst_MESSAGE_CHECK(message);
    if (motor >= hcst_NUM_OF_MOTORS) return hcst_INVALID;

    hcst_BIT_CLEAR(message[hcst_MOTOR_POWERED_BYTE], motor);
    hcst_BIT_SET(message[hcst_MOTOR_POWERED_BYTE], state->power, motor);

    hcst_BIT_CLEAR(message[hcst_MOTOR_DIRECTION_BYTE], motor);
    hcst_BIT_SET(message[hcst_MOTOR_DIRECTION_BYTE], state->direction, motor);

    hcst_BYTE_CLEAR(message[hcst_SPEED_BYTE + motor]);
    hcst_BYTE_SET(message[hcst_SPEED_BYTE + motor], state->speed);

    return hcst_OK;
}

static hcst_result_t hcst_state_get(hcst_message_t message, hsct_motor_bit_t motor, hcst_motor_state_handler_t state) {
    hcst_MESSAGE_CHECK(message);

    state->power = hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_POWERED_BYTE], motor);
    state->direction = hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_DIRECTION_BYTE], motor);
    state->speed = message[hcst_SPEED_BYTE + motor];

    return hcst_OK;
}
