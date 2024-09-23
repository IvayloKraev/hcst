#include "hctp/speed.h"

hctp_RESULT hctp_speed_set(hctp_message_t message, uint8_t speed) {
    HCTP_NULL_CHECK(message);

    message[HCTP_SPEED_BYTE] = speed;

    return hctp_OK;
}

uint8_t hctp_speed_get(hctp_message_t message){
    return message[HCTP_SPEED_BYTE];
}
