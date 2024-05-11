#ifndef GENDER_H
#define GENDER_H

enum gender_t
{
    GENDER_MALE,
    GENDER_FEMALE
};

char *gender_to_text (enum gender_t mhs_gender);

#endif