#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char s[40];
    printf("������һ���ַ�����");
    scanf("%s", s);
    i = strlen(s);
    printf("�ַ���=%d\n", i);
    for(i--; i >= 0; i--)       //��һ��i--������Ԫ�ش�0��ʼĩλ��1
    {
        printf("%c", s[i]);
    }
    putchar(10);
    return 0;
}
