#include "hctp/control.h"

hctp_RESULT_t hctp_leftTurn_set(hctp_message_t message, hctp_BUTTON_STATE value) {
    HCTP_CHECK_MESSAGE(message);

    HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);

    if (value) HCTP_SET_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);

    return hctp_OK;
}

hctp_RESULT_t hctp_rightTurn_set(hctp_message_t message, hctp_BUTTON_STATE value) {
    HCTP_CHECK_MESSAGE(message);

    HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);

    if (value) HCTP_SET_BIT(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);

    return hctp_OK;
}

hctp_RESULT_t hctp_speed_set(hctp_message_t message, hctp_SPEED_t speed) {
    HCTP_CHECK_MESSAGE(message);

    message[HCTP_SPEED_BYTE] = speed;

    return hctp_OK;
}

hctp_BUTTON_STATE hctp_leftTurn_get(const hctp_message_t message) {
    return HCTP_IS_BIT_ACTIVE(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);
}

hctp_BUTTON_STATE hctp_rightTurn_get(const hctp_message_t message) {
    return HCTP_IS_BIT_ACTIVE(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);
}

hctp_SPEED_t hctp_speed_get(hctp_message_t message){
    return message[HCTP_SPEED_BYTE];
}