#include "hctp/speed.h"

void hctp_speed_set(hctp_message_t message, uint8_t speed) {
    message[SPEED_BYTE] = speed;
}

uint8_t hctp_speed_get(hctp_message_t message){
    return message[SPEED_BYTE];
}
