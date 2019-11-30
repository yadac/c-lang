#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("test.txt", "w");
    fclose(file);
    return 0;
}