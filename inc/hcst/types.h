#ifndef hcst_TYPES_H
#define hcst_TYPES_H

typedef enum {
    hcst_OK = 1,
    hcst_INVALID = -1,
} hcst_result_t;

typedef enum {
    hcst_STATE_IDLE = 0,
    hcst_STATE_EXITED = 1,
} hcst_state_t;

typedef uint8_t hcst_speed_t;

#endif
