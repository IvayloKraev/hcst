#ifndef hctp_CONTROL_H
#define hctp_CONTROL_H

#include "hctp/message.h"
#include "hctp/common.h"
#include "hctp/types.h"

hctp_RESULT_t hctp_leftTurn_set(hctp_message_t, hctp_button_state_t);

hctp_RESULT_t hctp_rightTurn_set(hctp_message_t, hctp_button_state_t);

hctp_RESULT_t hctp_speed_set(hctp_message_t, hctp_speed_t);

hctp_button_state_t hctp_leftTurn_get(hctp_message_t);

hctp_button_state_t hctp_rightTurn_get(hctp_message_t);

hctp_speed_t hctp_speed_get(hctp_message_t);

#endif
