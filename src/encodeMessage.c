#include "hctp/encodeMessage.h"

void hctp_message_encode(hctp_message_readyToEncode_handler_t base, hctp_message_t message){
    hctp_control_set_clear(message);

    hctp_control_set_stateMotors(message, base->motorState);
    hctp_control_set_leftTurn(message, base->leftTurn);
    hctp_control_set_rightTurn(message, base->rightTurn);

    hctp_speed_set(message, base->speed);
};
