#ifndef HCTP_ENCODEMESSAGE_H
#define HCTP_ENCODEMESSAGE_H

#include "messageModel.h"
#include "control.h"
#include "speed.h"

void hctp_message_encode(hctp_message_readyToEncode_handler_t base, hctp_message_t message);

#endif
