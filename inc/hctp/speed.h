#ifndef HCTP_SPEED_H
#define HCTP_SPEED_H

#include "hctp/messageModel.h"
#include "hctp/common.h"
#include "hctp/types.h"

hctp_RESULT_t hctp_speed_set(hctp_message_t, hctp_SPEED_t);

hctp_SPEED_t hctp_speed_get(hctp_message_t);

#endif
