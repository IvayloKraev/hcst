#include "hctp/control.h"

hctp_RESULT_t hctp_leftTurn_set(hctp_message_t message, const hctp_button_state_t value) {
    hctp_CHECK_MESSAGE(message);

    hctp_CLR_BIT(message[hctp_CONTROL_BYTE], hctp_LEFT_TURN_BIT);

    if (value) hctp_SET_BIT(message[hctp_CONTROL_BYTE], hctp_LEFT_TURN_BIT);

    return hctp_OK;
}

hctp_RESULT_t hctp_rightTurn_set(hctp_message_t message, const hctp_button_state_t value) {
    hctp_CHECK_MESSAGE(message);

    hctp_CLR_BIT(message[hctp_CONTROL_BYTE], hctp_RIGHT_TURN_BIT);

    if (value) hctp_SET_BIT(message[hctp_CONTROL_BYTE], hctp_RIGHT_TURN_BIT);

    return hctp_OK;
}

hctp_RESULT_t hctp_speed_set(hctp_message_t message, const hctp_speed_t speed) {
    hctp_CHECK_MESSAGE(message);

    message[hctp_SPEED_BYTE] = speed;

    return hctp_OK;
}

hctp_button_state_t hctp_leftTurn_get(hctp_message_t message) {
    return hctp_IS_BIT_ACTIVE(message[hctp_CONTROL_BYTE], hctp_LEFT_TURN_BIT);
}

hctp_button_state_t hctp_rightTurn_get(hctp_message_t message) {
    return hctp_IS_BIT_ACTIVE(message[hctp_CONTROL_BYTE], hctp_RIGHT_TURN_BIT);
}

hctp_speed_t hctp_speed_get(hctp_message_t message){
    return message[hctp_SPEED_BYTE];
}