#include <stdio.h>
#include "kuruc20-2.h"

void InputPeople(People *data)
{
    printf("���O:");
    scanf("%s", data->name);
    printf("�N��:");
    scanf("%d", &data->age);
    printf("����(1-�j���A2-����):");
    scanf("%d", &data->sex);
    printf("\n");
}