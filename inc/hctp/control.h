#ifndef CONTROL_H
#define CONTROL_H

#include "stdbool.h"
#include "messageModel.h"

void setControl_StateMotors(message_t, bool);

void setControl_LeftTurn(message_t, bool);

void setControl_RightTurn(message_t, bool);

void setControl_Clear(message_t);

bool getControl_StateMotors(message_t);

bool getControl_LeftTurn(message_t);

bool getControl_RightTurn(message_t);

#endif
