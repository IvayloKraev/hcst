#include "hctp/control.h"

hctp_RESULT hctp_control_set_stateMotors(hctp_message_t message, bool value) {
    HCTP_NULL_CHECK(message);

    if (value) {
        SET_BIT(message[CONTROL_BYTE], MOTOR_STATE_BIT);
    } else {
        CLR_BIT(message[CONTROL_BYTE], MOTOR_STATE_BIT);
    }

    return hctp_OK;
}

hctp_RESULT hctp_control_set_leftTurn(hctp_message_t message, bool value) {
    HCTP_NULL_CHECK(message);

    if (value) {
        SET_BIT(message[CONTROL_BYTE], LEFT_TURN_BIT);
        CLR_BIT(message[CONTROL_BYTE], RIGHT_TURN_BIT);
    } else {
        CLR_BIT(message[CONTROL_BYTE], LEFT_TURN_BIT);
    }

    return hctp_OK;
}

hctp_RESULT hctp_control_set_rightTurn(hctp_message_t message, bool value) {
    HCTP_NULL_CHECK(message);

    if (value) {
        SET_BIT(message[CONTROL_BYTE], RIGHT_TURN_BIT);
        CLR_BIT(message[CONTROL_BYTE], LEFT_TURN_BIT);
    } else {
        CLR_BIT(message[CONTROL_BYTE], RIGHT_TURN_BIT);
    }

    return hctp_OK;
}

hctp_RESULT hctp_control_set_clear(hctp_message_t message) {
    HCTP_NULL_CHECK(message);

    message[CONTROL_BYTE] = 0;

    return hctp_OK;
}


bool hctp_control_get_stateMotors(hctp_message_t message) {
    return IS_BIT_ACTIVE(message[CONTROL_BYTE], MOTOR_STATE_BIT);
}

bool hctp_control_get_leftTurn(hctp_message_t message) {
    return IS_BIT_ACTIVE(message[CONTROL_BYTE], LEFT_TURN_BIT);
}

bool hctp_control_get_rightTurn(hctp_message_t message) {
    return IS_BIT_ACTIVE(message[CONTROL_BYTE], RIGHT_TURN_BIT);
}
