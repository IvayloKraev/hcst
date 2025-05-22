#ifndef hcst_TYPES_H
#define hcst_TYPES_H

typedef enum {
    hcst_OK = 0,
    hcst_WARN,
    hcst_INVALID,
    hcst_ERROR,
    hcst_FATAL,
} hcst_ERROR_t;

typedef enum {
    hcst_STATE_IDLE = 0,
    hcst_STATE_EXITED = 1,
} hcst_state_t;

typedef uint8_t hcst_speed_t;

#endif
