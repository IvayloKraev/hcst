#include "hctp/speed.h"

hctp_RESULT_t hctp_speed_set(hctp_message_t message, hctp_SPEED_t speed) {
    HCTP_CHECK_MESSAGE(message);

    message[HCTP_SPEED_BYTE] = speed;

    return hctp_OK;
}

hctp_SPEED_t hctp_speed_get(hctp_message_t message){
    return message[HCTP_SPEED_BYTE];
}
