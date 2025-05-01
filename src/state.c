#include "hcst/state.h"

hcst_result_t hcst_flm_powered_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_POWERED_BYTE], hcst_FLM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_POWERED_BYTE], hcst_FLM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_frm_powered_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_POWERED_BYTE], hcst_FRM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_POWERED_BYTE], hcst_FRM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_rlm_powered_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_POWERED_BYTE], hcst_RLM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_POWERED_BYTE], hcst_RLM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_rrm_powered_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_POWERED_BYTE], hcst_RRM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_POWERED_BYTE], hcst_RRM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_flm_direction_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_DIRECTION_BYTE], hcst_FLM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_DIRECTION_BYTE], hcst_FLM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_frm_direction_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_DIRECTION_BYTE], hcst_FRM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_DIRECTION_BYTE], hcst_FRM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_rlm_direction_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_DIRECTION_BYTE], hcst_RLM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_DIRECTION_BYTE], hcst_RLM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_rrm_direction_set(hcst_message_t message, hcst_state_t state) {
    hcst_MESSAGE_CHECK(message);
    hcst_BIT_CLEAR(message[hcst_MOTOR_DIRECTION_BYTE], hcst_RRM_BIT);
    if (state) hcst_BIT_SET(message[hcst_MOTOR_DIRECTION_BYTE], hcst_RRM_BIT);
    return hcst_OK;
}
hcst_result_t hcst_speed_set(hcst_message_t message, hcst_speed_t speed) {
    hcst_MESSAGE_CHECK(message);
    message[hcst_SPEED_BYTE] = speed;
    return hcst_OK;
}

hcst_state_t hcst_flm_powered_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_POWERED_BYTE], hcst_FLM_BIT);
}
hcst_state_t hcst_frm_powered_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_POWERED_BYTE], hcst_FRM_BIT);
}
hcst_state_t hcst_rlm_powered_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_POWERED_BYTE], hcst_RLM_BIT);
}
hcst_state_t hcst_rrm_powered_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_POWERED_BYTE], hcst_RRM_BIT);
}
hcst_state_t hcst_flm_direction_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_DIRECTION_BYTE], hcst_FLM_BIT);
}
hcst_state_t hcst_frm_direction_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_DIRECTION_BYTE], hcst_FRM_BIT);
}
hcst_state_t hcst_rlm_direction_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_DIRECTION_BYTE], hcst_RLM_BIT);
}
hcst_state_t hcst_rrm_direction_get(hcst_message_t message) {
    return hcst_BIT_IS_ACTIVE(message[hcst_MOTOR_DIRECTION_BYTE], hcst_RRM_BIT);
}
hcst_speed_t hcst_speed_get(hcst_message_t message){
    return message[hcst_SPEED_BYTE];
}