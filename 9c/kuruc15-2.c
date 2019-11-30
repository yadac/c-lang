#include <stdio.h>

void func(int *pvalue);
int getaverage(int array[], int size);

int main(void)
{
    int value = 10;
    // printf("before value = %d\n", value);
    // printf("&value = %p\n", &value);
    // func(&value);
    // printf("after value = %d\n", value);

    int array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
    int size = sizeof array / sizeof array[0];
    int average = getaverage(array, size);
    printf("average = %d\n", average);
}

void func(int *pvalue)
{
    *pvalue += 10;
}

// array is byref, just top of address
int getaverage(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        // array always byref even without *
        // []�̖����́A�P�ɁA�z�񖼂Ƃ����A�h���X�ɑ����Z���s���Ă��邾��
        // �����̒��Ŏg�p����[]�́A�A�h���X�ɑ����Z���鉉�Z�q�ł�
        // sum += array[i];

        // pointer calculation
        sum += *(array + i);
    }
    return (int)(sum / size);
}
