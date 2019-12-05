#include <stdio.h>
#define EXCISETAX 0.03 /* ‚±‚±‚Å’è”‚ğéŒ¾ */

enum
{
    STATE_NORMAL,
    STATE_POISON,
    STATE_CURSE,
};

int main(void)
{
    int price, status;
    printf("–{‘Ì‰¿Ši:");
    scanf("%d", &price);
    price = (int)((1 + EXCISETAX) * price); /* ’è”g—p */
    printf("Å‰¿Ši:%d\n", price);

    status = STATE_CURSE;
    printf("STATUS = %d\n", status);
    return 0;
}