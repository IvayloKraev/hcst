#include "hctp/messageModel.h"

void hctp_message_init(hctp_message_t message)
{
    message = (hctp_message_t) malloc(sizeof(hctp_message_t) * HCTP_MESSAGE_SIZE_BYTES);
}
