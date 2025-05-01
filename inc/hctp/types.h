#ifndef hctp_TYPES_H
#define hctp_TYPES_H

typedef enum {
    hctp_OK = 1,
    hctp_INVALID = -1,
} hctp_result_t;

typedef enum {
    hctp_STATE_IDLE = 0,
    hctp_STATE_EXITED = 1,
} hctp_state_t;

typedef uint8_t hctp_speed_t;

#endif
