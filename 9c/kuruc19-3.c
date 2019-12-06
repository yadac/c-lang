#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    int age;
    char sex;
} student;

void InputStudentInfo(student *);
void PrintStudentInfo(student *);

int main(void)
{
    int datasize = 10;
    int count = 0;
    student *heap = (student *)malloc(sizeof(student) * datasize);

    while (1)
    {
        InputStudentInfo(&heap[count]); // 配列の特定の要素、関数で値更新したいので参照渡し
        if (heap[count].age == -1)
            break;
        count++;
        if (count > datasize)
        {
            datasize += 10;
            heap = (student *)realloc(heap, sizeof(student) * datasize);
        }
    }

    for (int i = 0; i < count; i++)
    {
        PrintStudentInfo(&heap[i]); // 配列の特定の要素、関数で値更新しないので値渡し、構造体サイズ次第で遅い
    }

    free(heap);
    return 0;
}

void InputStudentInfo(student *sa)
{
    printf("\n");
    printf("name:");
    scanf("%s", sa->name);
    printf("age:");
    scanf("%d", &sa->age);
    printf("sex(1:men 2:women):");
    scanf("%s", &sa->sex);
    return;
}

void PrintStudentInfo(student *sa)
{
    printf("\n");
    printf("name = %s\n", sa->name);
    printf("age = %d\n", sa->age);
    printf("sex = %c\n", sa->sex);
    return;
}