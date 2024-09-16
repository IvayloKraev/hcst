#include "speed.h"

void setSpeed(message_t message, uint8_t speed) {
    message[SPEED_BYTE] = speed;
}

uint8_t getSpeed(message_t message){
    return message[SPEED_BYTE];
}
