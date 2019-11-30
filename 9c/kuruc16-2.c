#include <stdio.h>

// structure

typedef struct
{
    char name[100];
    int age;
    char sex;
} student;

void printstudentinfo(student[]);
void inputstudentinfo(student[]);

int main(void)
{
    student students[3];
    inputstudentinfo(students);
    printstudentinfo(students);
    return 0;
}

void inputstudentinfo(student array[])
{
    printf("*** input student info ***\n");
    int counter = 0;
    do
    {
        printf("input name:");
        scanf("%s", &array[counter].name);
        printf("input age:");
        scanf("%d", &array[counter].age);
        printf("input sex(1:men 2:women 3:other):");
        scanf("%s", &array[counter].sex);
        counter++;
    } while (counter < 3);
    return;
}

void printstudentinfo(student array[])
{
    printf("*** print student info ***\n");
    for (int i = 0; i < 3; i++)
    {
        printf("index = %d\n", i + 1);
        printf("name = %s\n", array[i].name);
        printf("age = %d\n", array[i].age);
        printf("sex = %c\n", array[i].sex);
    }
    return;
}