#include <stdio.h>
#define EXCISETAX 0.03 /* �����Œ萔��錾 */

enum
{
    STATE_NORMAL,
    STATE_POISON,
    STATE_CURSE,
};

int main(void)
{
    int price, status;
    printf("�{�̉��i:");
    scanf("%d", &price);
    price = (int)((1 + EXCISETAX) * price); /* �萔�g�p */
    printf("�ō����i:%d\n", price);

    status = STATE_CURSE;
    printf("STATUS = %d\n", status);
    return 0;
}