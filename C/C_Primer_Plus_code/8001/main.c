//���һ������ͳ�ƴ����뵽�ļ���βΪֹ���ַ�����
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    int count = 0;
    FILE * fp;
    fp = fopen("d:\\123.txt", "rb");

    if(fp == NULL)
    {
        printf("���ļ�ʧ�ܣ�����ԭ��\n");
        exit(1);
    }

    while((ch = getc(fp)) != EOF)
    {
        //putchar(ch);
        count++;
    }
    printf("�ַ�����%d\n", count);

    fclose(fp);
    return 0;
}
