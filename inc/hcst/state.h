#ifndef hcst_STATE_H
#define hcst_STATE_H

#include "hcst/message.h"
#include "hcst/error.h"

typedef enum {
    hcst_PINSTATE_IDLE = 0,
    hcst_PINSTATE_EXITED = 1,
} hcst_pinState_enum;

typedef uint8_t hcst_speed_t;

typedef struct {
    hcst_pinState_enum power;
    hcst_pinState_enum direction;
    hcst_speed_t speed;
} hcst_motorState_t;

/*! \brief Allocates the memory for a motor state
 *
 *  \param motorState Pointer to the motorState
 *
 *  \return The error code - 0 if successful, 1 and above for error \ref hcst_error_t
 */
inline hcst_error_t hcst_motorState_init(hcst_motorState_t **motorState) {
    if (*motorState != NULL) return hcst_error_unreleasedMemory;
    *motorState = (hcst_motorState_t*) malloc(sizeof(hcst_motorState_t));
    if (!*motorState) return hcst_error_outOfMemory;
    return hcst_error_none;
}

/*! \brief Removes the allocated the memory for a motor state
 *
 *  \param motorState Pointer to the motorState
 *
 *  \return The error code - 0 if successful, 1 and above for error \ref hcst_error_t
 */
inline hcst_error_t hcst_motorState_deinit(hcst_message_t **motorState) {
    if (motorState == NULL) return hcst_error_nullPtr;
    free(*motorState);
    *motorState = NULL;
    return hcst_error_none;
}

/*! \brief Writes the motor state in the message
 *
 *  \param message The message to write the motor state
 *  \param motor For which motor is the given state
 *  \param motorState The state of the motor (powered, direction, speed etc.)
 *
 *  \return The error code - 0 if successful, 1 and above for error \ref hcst_error_t
 */
static hcst_error_t hcst_message_set(hcst_message_t message, hsct_motor_enum motor, hcst_motorState_t *motorState);

/*! \brief Reads the motor state in the message
 *
 *  \param message The message to read the motor state
 *  \param motor For which motor is the wanted state
 *  \param motorState The state of the motor, which will be populated after the operation
 *
 *  \return The error code - 0 if successful, 1 and above for error \ref hcst_error_t
 */
static hcst_error_t hcst_message_get(hcst_message_t message, hsct_motor_enum motor, hcst_motorState_t *motorState);

#endif
