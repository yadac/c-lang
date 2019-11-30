#include <stdio.h>
#include <string.h>

int main(void)
{

    int len, i;
    char str1[256], str2[] = "dragonquest";

    scanf("%s", str1);

    // len = strlen(str2);

    // for (i = 0; i < len + 1; i++)
    // {
    //     if (str1[i] != str2[i])
    //         break;
    // }

    // if (i == len + 1)
    // {
    //     printf("same\n");
    // }
    // else
    // {
    //     printf("different\n");
    // }

    if (strcmp(str1, str2) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}