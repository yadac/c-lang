#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
}

int main(void)
{
    int a = 1;
    int b = 2;
    printf("a:%d, b:%d\n", a, b);
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
    return 0;
}
