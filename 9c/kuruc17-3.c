#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("argc = %d\n", argc);
    while (argc > 0)
    {
        argc--;
        printf("argc = %d\n", argc);

        if (argv[argc][0] == '-')
        {
            if (argv[argc][1] == 'a')
                printf("-a オプション\n");
            if (argv[argc][1] == 's')
                printf("-s オプション\n");
        }
    }

    return 0;
}