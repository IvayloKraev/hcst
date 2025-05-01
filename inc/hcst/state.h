#ifndef hcst_STATE_H
#define hcst_STATE_H

#include "hcst/message.h"
#include "hcst/types.h"

hcst_result_t hcst_flm_powered_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_frm_powered_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_rlm_powered_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_rrm_powered_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_flm_direction_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_frm_direction_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_rlm_direction_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_rrm_direction_set(hcst_message_t, hcst_state_t);
hcst_result_t hcst_speed_set(hcst_message_t, hcst_speed_t);

hcst_state_t hcst_flm_powered_get(hcst_message_t);
hcst_state_t hcst_frm_powered_get(hcst_message_t);
hcst_state_t hcst_rlm_powered_get(hcst_message_t);
hcst_state_t hcst_rrm_powered_get(hcst_message_t);
hcst_state_t hcst_flm_direction_get(hcst_message_t);
hcst_state_t hcst_frm_direction_get(hcst_message_t);
hcst_state_t hcst_rlm_direction_get(hcst_message_t);
hcst_state_t hcst_rrm_direction_get(hcst_message_t);
hcst_speed_t hcst_speed_get(hcst_message_t);

#endif
