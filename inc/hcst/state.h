#ifndef hcst_STATE_H
#define hcst_STATE_H

#include "hcst/message.h"
#include "hcst/types.h"

typedef struct {
    hcst_state_t power;
    hcst_state_t direction;
    hcst_speed_t speed;
} hcst_motor_state_t;

typedef hcst_motor_state_t *hcst_motor_state_handler_t;

#define hcst_MOTOR_STATE_INIT(state) state=(hcst_motor_state_handler_t)malloc(sizeof(hcst_motor_state_t))
#define hcst_MOTOR_STATE_CHECK(motorState) if((motorState)==NULL) {return hcst_INVALID;}
#define hcst_MOTOR_STATE_DEINIT(state) free(state)

static hcst_result_t hcst_motor_state_set(hcst_motor_state_handler_t, hcst_state_t, hcst_state_t, hcst_speed_t);

static hcst_result_t hcst_state_set(hcst_message_t, hsct_motor_bit_t, hcst_motor_state_handler_t);

static hcst_result_t hcst_state_get(hcst_message_t, hsct_motor_bit_t, hcst_motor_state_handler_t);

#endif
