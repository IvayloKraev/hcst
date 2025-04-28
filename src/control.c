#include "hctp/control.h"

hctp_RESULT_t hctp_control_set_leftTurn(hctp_message_t message, hctp_BUTTON_STATE value) {
    HCTP_CHECK_MESSAGE(message);

    HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);

    if (value) HCTP_SET_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);

    return hctp_OK;
}

hctp_RESULT_t hctp_control_set_rightTurn(hctp_message_t message, hctp_BUTTON_STATE value) {
    HCTP_CHECK_MESSAGE(message);

    HCTP_CLR_BIT(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);

    if (value) HCTP_SET_BIT(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);

    return hctp_OK;
}

hctp_BUTTON_STATE hctp_control_get_leftTurn(const hctp_message_t message) {
    return HCTP_IS_BIT_ACTIVE(message[HCTP_CONTROL_BYTE], HCTP_LEFT_TURN_BIT);
}

hctp_BUTTON_STATE hctp_control_get_rightTurn(const hctp_message_t message) {
    return HCTP_IS_BIT_ACTIVE(message[HCTP_CONTROL_BYTE], HCTP_RIGHT_TURN_BIT);
}
