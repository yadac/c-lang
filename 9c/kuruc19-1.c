#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int *heap; // pointer val

    // int�^�̃o�C�g����10���擾����
    // �|�C���^�ϐ��ɐ擪�A�h���X����
    // malloc�֐����Ԃ��A�h���X�́Avoid�^�̃|�C���^�Ȃ̂ŃL���X�g
    heap = (int *)malloc(sizeof(int) * 10);
    if (heap == NULL)
        exit(0);

    // �z��̓A�h���X�̐擪�A[]�ł��炵�Ēl����
    for (i = 0; i < 10; i++)
    {
        heap[i] = i;
    }

    printf("%d\n", heap[5]);
    free(heap);

    return 0;
}