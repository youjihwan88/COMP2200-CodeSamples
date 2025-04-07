#ifndef USERDATA_H
#define USERDATA_H

typedef enum
{
    SEX_MALE,
    SEX_FEMALE,
    SEX_UNKNOWN
} sex_t;

typedef struct
{
    unsigned short id;
    unsigned char age;
    sex_t sex;
} user_data_t;

#endif /* USERDATA_H */
