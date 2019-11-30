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
        // []の役割は、単に、配列名というアドレスに足し算を行っているだけ
        // 数式の中で使用する[]は、アドレスに足し算する演算子です
        // sum += array[i];

        // pointer calculation
        sum += *(array + i);
    }
    return (int)(sum / size);
}
