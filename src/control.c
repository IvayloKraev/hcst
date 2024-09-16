#include "control.h"

void setControl_StateMotors(message_t message, bool value) {
    if (value) {
        SET_BIT(message[CONTROL_BYTE], MOTOR_STATE_BIT);
    } else {
        CLR_BIT(message[CONTROL_BYTE], MOTOR_STATE_BIT);
    }
}

void setControl_LeftTurn(message_t message, bool value) {
    if (value) {
        SET_BIT(message[CONTROL_BYTE], LEFT_TURN_BIT);
        CLR_BIT(message[CONTROL_BYTE], RIGHT_TURN_BIT);
    } else {
        CLR_BIT(message[CONTROL_BYTE], LEFT_TURN_BIT);
    }
}

void setControl_RightTurn(message_t message, bool value) {
    if (value) {
        SET_BIT(message[CONTROL_BYTE], RIGHT_TURN_BIT);
        CLR_BIT(message[CONTROL_BYTE], LEFT_TURN_BIT);
    } else {
        CLR_BIT(message[CONTROL_BYTE], RIGHT_TURN_BIT);
    }
}

void setControl_Clear(message_t message) {
    message[CONTROL_BYTE] = 0;
}


bool getControl_StateMotors(message_t message) {
    return IS_BIT_ACTIVE(message[CONTROL_BYTE], MOTOR_STATE_BIT);
}

bool getControl_LeftTurn(message_t message) {
    return IS_BIT_ACTIVE(message[CONTROL_BYTE], LEFT_TURN_BIT);
}

bool getControl_RightTurn(message_t message) {
    return IS_BIT_ACTIVE(message[CONTROL_BYTE], RIGHT_TURN_BIT);
}
