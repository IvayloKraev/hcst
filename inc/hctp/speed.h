#ifndef HCTP_SPEED_H
#define HCTP_SPEED_H

#include "hctp/messageModel.h"
#include "hctp/common.h"

hctp_RESULT hctp_speed_set(hctp_message_t, uint8_t);

uint8_t hctp_speed_get(hctp_message_t);

#endif
