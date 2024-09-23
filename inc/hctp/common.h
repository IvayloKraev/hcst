#ifndef HCTP_COMMON_H
#define HCTP_COMMON_H

#define HCTP_NULL_CHECK(ptrToCheck) if((ptrToCheck)==NULL) {return hctp_INVALID;}

typedef enum {
    hctp_OK = 0,
    hctp_WARN = -1,
    hctp_INVALID = -2,
    hctp_ERROR = -3,
    hctp_FATAL = -4
} hctp_RESULT;

#endif
