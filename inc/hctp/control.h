#ifndef HCTP_CONTROL_H
#define HCTP_CONTROL_H

#include "hctp/messageModel.h"
#include "hctp/common.h"
#include "hctp/types.h"

hctp_RESULT_t hctp_control_set_leftTurn(hctp_message_t, hctp_BUTTON_STATE);

hctp_RESULT_t hctp_control_set_rightTurn(hctp_message_t, hctp_BUTTON_STATE);

hctp_BUTTON_STATE hctp_control_get_leftTurn(hctp_message_t);

hctp_BUTTON_STATE hctp_control_get_rightTurn(hctp_message_t);

#endif
