#ifndef hcst_MESSAGE_H
#define hcst_MESSAGE_H

#include "stdint.h"
#include "stdlib.h"

#include "error.h"

#define hcst_BIT_SET(byte, state, bit) (byte) |= (state << (bit))
#define hcst_BIT_CLEAR(byte, bit) (byte) &= ~(1U << (bit))
#define hcst_BIT_IS_ACTIVE(byte, bit) (((byte) & (1 << (bit))) != 0)

typedef enum {
    hcst_FLM = 0,
    hcst_FRM,
    hcst_RLM,
    hcst_RRM,
    hcst_NUM_OF_MOTORS
} hsct_motor_enum;

enum {
    hcst_MOTOR_POWERED_BYTE = 0,
    hcst_MOTOR_DIRECTION_BYTE,
    hcst_SPEED_BYTE,
    hcst_MESSAGE_SIZE_BYTES = hcst_SPEED_BYTE + hcst_NUM_OF_MOTORS
};

typedef uint8_t *hcst_message_t;


/*! \brief Allocates the memory for a message
 *
 *  \param message Pointer to the message
 *
 *  \return The error code - 0 if successful, 1 and above for error \ref hcst_error_t
 */
inline hcst_error_t hcst_message_init(hcst_message_t* message) {
    if (*message != NULL) return hcst_error_unreleasedMemory;
    *message = (hcst_message_t) calloc(hcst_MESSAGE_SIZE_BYTES, sizeof(hcst_message_t));
    if (!*message) return hcst_error_outOfMemory;
    return hcst_error_none;
}


/*! \brief Removes the allocated the memory for a message
 *
 *  \param message Pointer to the message
 *
 *  \return The error code - 0 if successful, 1 and above for error \ref hcst_error_t
 */
inline hcst_error_t hcst_message_deinit(hcst_message_t* message) {
    if (message == NULL) return hcst_error_nullPtr;
    free(*message);
    *message = NULL;
    return hcst_error_none;
}


#endif
