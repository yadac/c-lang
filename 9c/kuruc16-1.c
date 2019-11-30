#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;
    char name[64];
    double weight;
} student;

void setname(student array[]);

int main(void)
{
    student array[10];
    student data;
    student data2;
    array[0] = data;
    array[1] = data2;
    array[0].year = 2018;
    array[1].year = 2020;
    setname(array);
    printf("year = %d\n", array[0].year);
    printf("name = %s\n", array[0].name);
    printf("weight = %f\n", array[0].weight);
    printf("year = %d\n", array[1].year);
    printf("name = %s\n", array[1].name);
    printf("weight = %f\n", array[1].weight);
    return 0;
}

void setname(student array[])
{
    strcpy(array[0].name, "mario");
    array->weight = 1.23;

    strcpy(array[1].name, "yosuke");
    (array + 1)->weight = 2.33; // address + 1
}
