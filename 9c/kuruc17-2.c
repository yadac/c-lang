#include <stdio.h>

// argc = number of arguments
// argv = pointer val to char[]
int main(int argc, char *argv[])
{
    // if a.exe xxx then, argc = 2, argv[0] = a.exe, argv[1] = xxx
    printf("argc = %d\n", argc);
    printf("argv[0] = %s\n", argv[0]);
    if (argc > 1)
    {
        argc--;

        printf("%s\n", argv[argc]);
        FILE *file;
        file = fopen(argv[argc], "w+");
        fclose(file);
    }

    // 画面の表示を止めるための処理。
    // 実行待ちになり、適当なキーで終わります。
    // fflush(stdin);
    // getchar();

    return 0;
}