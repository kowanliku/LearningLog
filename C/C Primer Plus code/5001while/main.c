#include <stdio.h>
#define Z_H 60

int main(void)
{
    int fen = 1, xiaoshi = 0;
    while(fen+xiaoshi)
    {
        printf("�������������");
        scanf("%d", &fen);
        xiaoshi = fen / Z_H;
        fen = fen % Z_H;
        printf("%dСʱ,%d����\n", xiaoshi, fen);
    }
    return 0;
}
