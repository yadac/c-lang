#include <stdio.h>
#include <string.h>
#include "kuruc20-2.h"

void ShowPeople(People data)
{
    char sex[16];

    printf("���O:%s\n", data.name);
    printf("�N��:%d\n", data.age);

    if (data.sex == 1)
    {
        strcpy(sex, "�j��");
    }
    else
    {
        strcpy(sex, "����");
    }

    printf("����:%s\n", sex);
    printf("\n");
}