// header-file
// source-file

#include <stdio.h>
#include <stdlib.h>
#include "kuruc20-2.h"

int main(void)
{
    int datasize = 10;
    People *heap = (People *)malloc(sizeof(People) * datasize);

    InputPeople(&heap[0]);
    ShowPeople(heap[0]);
    free(heap);
    return 0;
}