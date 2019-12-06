#ifndef _DEFINE_PEOPLE_
#define _DEFINE_PEOPLE_
typedef struct
{
    char name[256];
    int age;
    int sex;
} People;

#endif

void InputPeople(People *data);
void ShowPeople(People data);