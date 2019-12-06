#include <stdio.h>
#include "sum.h"

int p = 3;

int main(void)
{
    int a = 1;
    int b = 2;
    int ans = sum(a, b);
    printf("answer = %d\n", ans);
    return 0;
}