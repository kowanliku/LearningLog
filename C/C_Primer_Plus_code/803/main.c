#include <stdio.h>
#include <stdlib.h>             //Ϊ��ʹ��exit����

int main()
{
    int ch;
    FILE * fp;
    char fname[50];                     //���ڴ���ļ���

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");             //���ļ��Թ���ȡ
    if(fp == NULL)                      //���ļ�ʧ�ܵĴ���ʽ
    {
        printf("Failed to open file. Bye\n");
        exit(1);                        //��ֹ����
    }

    while((ch = getc(fp)) != EOF)       //getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
        putchar(ch);
    fclose(fp);                         //�ر��ļ�
    return 0;
}
