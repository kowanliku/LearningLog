//�ı����룬ֻ�������еĿո�
#include <stdio.h>
#define SPACE ' '

int main()
{
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);
    return 0;
}


//getchar()��ʼ�����һ���ַ������һ��һ����ȡ�ģ�
