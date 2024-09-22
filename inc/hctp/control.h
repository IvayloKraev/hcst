#ifndef HCTP_CONTROL_H
#define HCTP_CONTROL_H

#include "stdbool.h"
#include "hctp/messageModel.h"

void hctp_control_set_stateMotors(hctp_message_t, bool);

void hctp_control_set_leftTurn(hctp_message_t, bool);

void hctp_control_set_rightTurn(hctp_message_t, bool);

void hctp_control_set_clear(hctp_message_t);

bool hctp_control_get_stateMotors(hctp_message_t);

bool hctp_control_get_leftTurn(hctp_message_t);

bool hctp_control_get_rightTurn(hctp_message_t);

#endif
