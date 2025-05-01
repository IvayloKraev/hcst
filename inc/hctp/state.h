#ifndef hctp_STATE_H
#define hctp_STATE_H

#include "hctp/message.h"
#include "hctp/types.h"

hctp_result_t hctp_flm_powered_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_frm_powered_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_rlm_powered_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_rrm_powered_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_flm_direction_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_frm_direction_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_rlm_direction_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_rrm_direction_set(hctp_message_t, hctp_state_t);
hctp_result_t hctp_speed_set(hctp_message_t, hctp_speed_t);

hctp_state_t hctp_flm_powered_get(hctp_message_t);
hctp_state_t hctp_frm_powered_get(hctp_message_t);
hctp_state_t hctp_rlm_powered_get(hctp_message_t);
hctp_state_t hctp_rrm_powered_get(hctp_message_t);
hctp_state_t hctp_flm_direction_get(hctp_message_t);
hctp_state_t hctp_frm_direction_get(hctp_message_t);
hctp_state_t hctp_rlm_direction_get(hctp_message_t);
hctp_state_t hctp_rrm_direction_get(hctp_message_t);
hctp_speed_t hctp_speed_get(hctp_message_t);

#endif
