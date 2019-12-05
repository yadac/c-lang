#include <stdio.h>

#define PRINT_TEMP printf("temp = %d\n", temp);
#define PRINTM(X) printf("%d\n", X);

int main(void)
{
    int temp = 100, temp2 = 200;
    PRINT_TEMP;
    temp++;
    PRINT_TEMP;
    temp++;
    PRINTM(temp);
    PRINTM(temp2);
    return 0;
}