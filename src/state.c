#include "hctp/state.h"

hctp_result_t hctp_flm_powered_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_POWERED_BYTE], hctp_FLM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_POWERED_BYTE], hctp_FLM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_frm_powered_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_POWERED_BYTE], hctp_FRM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_POWERED_BYTE], hctp_FRM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_rlm_powered_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_POWERED_BYTE], hctp_RLM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_POWERED_BYTE], hctp_RLM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_rrm_powered_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_POWERED_BYTE], hctp_RRM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_POWERED_BYTE], hctp_RRM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_flm_direction_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_DIRECTION_BYTE], hctp_FLM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_DIRECTION_BYTE], hctp_FLM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_frm_direction_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_DIRECTION_BYTE], hctp_FRM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_DIRECTION_BYTE], hctp_FRM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_rlm_direction_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_DIRECTION_BYTE], hctp_RLM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_DIRECTION_BYTE], hctp_RLM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_rrm_direction_set(hctp_message_t message, hctp_state_t state) {
    hctp_MESSAGE_CHECK(message);
    hctp_BIT_CLEAR(message[hctp_MOTOR_DIRECTION_BYTE], hctp_RRM_BIT);
    if (state) hctp_BIT_SET(message[hctp_MOTOR_DIRECTION_BYTE], hctp_RRM_BIT);
    return hctp_OK;
}
hctp_result_t hctp_speed_set(hctp_message_t message, hctp_speed_t speed) {
    hctp_MESSAGE_CHECK(message);

    message[hctp_SPEED_BYTE] = speed;

    return hctp_OK;
}

hctp_state_t hctp_flm_powered_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_POWERED_BYTE], hctp_FLM_BIT);
}
hctp_state_t hctp_frm_powered_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_POWERED_BYTE], hctp_FRM_BIT);
}
hctp_state_t hctp_rlm_powered_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_POWERED_BYTE], hctp_RLM_BIT);
}
hctp_state_t hctp_rrm_powered_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_POWERED_BYTE], hctp_RRM_BIT);
}
hctp_state_t hctp_flm_direction_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_DIRECTION_BYTE], hctp_FLM_BIT);
}
hctp_state_t hctp_frm_direction_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_DIRECTION_BYTE], hctp_FRM_BIT);
}
hctp_state_t hctp_rlm_direction_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_DIRECTION_BYTE], hctp_RLM_BIT);
}
hctp_state_t hctp_rrm_direction_get(hctp_message_t message) {
    return hctp_BIT_IS_ACTIVE(message[hctp_MOTOR_DIRECTION_BYTE], hctp_RRM_BIT);
}
hctp_speed_t hctp_speed_get(hctp_message_t message){
    return message[hctp_SPEED_BYTE];
}