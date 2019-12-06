#include <stdio.h>
#include "kuruc20-2.h"

void InputPeople(People *data)
{
    printf("名前:");
    scanf("%s", data->name);
    printf("年齢:");
    scanf("%d", &data->age);
    printf("性別(1-男性、2-女性):");
    scanf("%d", &data->sex);
    printf("\n");
}