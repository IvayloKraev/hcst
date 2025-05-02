#ifndef hcst_STATE_H
#define hcst_STATE_H

#include "hcst/message.h"
#include "hcst/types.h"

hcst_result_t hcst_powerMotor_set(hcst_message_t, hsct_motor_bit_t, hcst_state_t);
hcst_result_t hcst_directionMotor_set(hcst_message_t, hsct_motor_bit_t, hcst_state_t);
hcst_result_t hcst_speed_set(hcst_message_t, hcst_speed_t);

hcst_state_t hcst_powerMotor_get(hcst_message_t, hsct_motor_bit_t);
hcst_state_t hcst_directionMotor_get(hcst_message_t, hsct_motor_bit_t);
hcst_speed_t hcst_speed_get(hcst_message_t);

#endif
