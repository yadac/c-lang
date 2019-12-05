// const define
// macro
// area of triangle

#include <stdio.h>

int isolympicyear(int);

enum
{
    OLYMPIC_YEAR,
    NOT_OLYMPIC_YEAR,
};

int main(void)
{

    int year;
    printf("input year:");
    scanf("%d", &year);
    if (isolympicyear(year) == OLYMPIC_YEAR)
    {
        printf("olympic year!\n");
    }
    else
    {
        printf("*not* olympic year!\n");
    }
    return 0;
}

int isolympicyear(int y)
{
    int ret = NOT_OLYMPIC_YEAR;
    if (y % 4 == 0)
        ret = OLYMPIC_YEAR;
    return ret;
}