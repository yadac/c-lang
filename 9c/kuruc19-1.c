#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int *heap; // pointer val

    // int型のバイト数を10個分取得して
    // ポインタ変数に先頭アドレスを代入
    // malloc関数が返すアドレスは、void型のポインタなのでキャスト
    heap = (int *)malloc(sizeof(int) * 10);
    if (heap == NULL)
        exit(0);

    // 配列はアドレスの先頭、[]でずらして値を代入
    for (i = 0; i < 10; i++)
    {
        heap[i] = i;
    }

    printf("%d\n", heap[5]);
    free(heap);

    return 0;
}