#include <stdio.h>
//��ʮ���ơ��˽��ơ�ʮ��������ʽ���100
int main()
{
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    return 0;
}
