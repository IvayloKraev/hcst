#include "hcst/state.h"

hcst_result_t hcst_powerMotor_set(hcst_message_t message, hsct_motor_bit_t motor, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_POWERED_BYTE], motor);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_POWERED_BYTE], motor);
    return hcst_OK;
}

hcst_result_t hcst_directionMotor_set(hcst_message_t message, hsct_motor_bit_t motor, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_DIRECTION_BYTE], motor);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_DIRECTION_BYTE], motor);
    return hcst_OK;
}

hcst_result_t hcst_speed_set(hcst_message_t message, hcst_speed_t speed) {
    hcst_MESSAGE_CHECK(message);
    message[hcst_SPEED_BYTE] = speed;
    return hcst_OK;
}

hcst_state_t hcst_powerMotor_get(hcst_message_t message, hsct_motor_bit_t motor) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_POWERED_BYTE], motor);
}

hcst_state_t hcst_directionMotor_get(hcst_message_t message, hsct_motor_bit_t motor) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_DIRECTION_BYTE], motor);
}

hcst_speed_t hcst_speed_get(hcst_message_t message){
    return message[hcst_SPEED_BYTE];
}