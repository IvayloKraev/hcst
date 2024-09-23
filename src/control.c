#include "hctp/control.h"

hctp_RESULT hctp_control_set_stateMotors(hctp_message_t message, bool value) {
    HCTP_NULL_CHECK(message);

    if (value) {
        HCTP_SET_BIT(message[HCTP_CONTROL_BYTE], HCTP_MOTOR_STATE_BIT);
    } else {
        HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_MOTOR_STATE_BIT);
    }

    return hctp_OK;
}

hctp_RESULT hctp_control_set_leftTurn(hctp_message_t message, bool value) {
    HCTP_NULL_CHECK(message);

    if (value) {
        HCTP_SET_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);
        HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);
    } else {
        HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);
    }

    return hctp_OK;
}

hctp_RESULT hctp_control_set_rightTurn(hctp_message_t message, bool value) {
    HCTP_NULL_CHECK(message);

    if (value) {
        HCTP_SET_BIT(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);
        HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);
    } else {
        HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);
    }

    return hctp_OK;
}

hctp_RESULT hctp_control_set_clear(hctp_message_t message) {
    HCTP_NULL_CHECK(message);

    message[HCTP_CONTROL_BYTE] = 0;

    return hctp_OK;
}


bool hctp_control_get_stateMotors(hctp_message_t message) {
    return HCTP_IS_BIT_ACTIVE(message[HCTP_CONTROL_BYTE], HCTP_MOTOR_STATE_BIT);
}

bool hctp_control_get_leftTurn(hctp_message_t message) {
    return HCTP_IS_BIT_ACTIVE(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);
}

bool hctp_control_get_rightTurn(hctp_message_t message) {
    return HCTP_IS_BIT_ACTIVE(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);
}
