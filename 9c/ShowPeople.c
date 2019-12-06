#include <stdio.h>
#include <string.h>
#include "kuruc20-2.h"

void ShowPeople(People data)
{
    char sex[16];

    printf("–¼‘O:%s\n", data.name);
    printf("”N—î:%d\n", data.age);

    if (data.sex == 1)
    {
        strcpy(sex, "’j«");
    }
    else
    {
        strcpy(sex, "—«");
    }

    printf("«•Ê:%s\n", sex);
    printf("\n");
}