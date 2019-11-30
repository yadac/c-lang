#include <stdio.h>

int main(void)
{
    int i1, i2, i3;
    // printf("%p\n", &i1);
    // printf("%p\n", &i2);
    // printf("%p\n", &i3);

    int array[] = {1, 2, 3};
    // printf("%p\n", array);
    // printf("%p\n", &array[0]);
    // printf("%p\n", &array[1]);

    char str[256] = "yosuke";
    // scanf("%s", &str[6]); // 6 = eos
    // printf("%s", str);

    int *p = NULL; // pointer type to int
    int i;
    p = &i; // address of i
    i = 999;
    printf("i address = %p\n", &i);
    printf("p address = %p\n", p);        // address
    printf("p address value = %d\n", *p); // 999, * means normal mode

    return 0;
}