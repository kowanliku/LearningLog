/* ��дһ�����򣬰�������Ϊ�ַ�����ȡ��ֱ������EOF��
 * ���䱨��ÿ�����ʵ�ƽ����ĸ������Ҫ���հ��ַ���Ϊ�����е���ĸ��
 * ʵ���ϣ�������Ҳ��Ӧ�ü��㣬�����ڲ��ؿ�����һ��(����������ú�һЩ�����Կ���ʹ��ctype.hϵ���е�ispunct()��������
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int count=0, word=0, punct=0;
    char ch;
    float a=0;

    FILE * fp;
    fp = fopen("d:\\123.txt", "r");
    if(fp == NULL)
    {
        printf("���ļ�����\n");
        exit(1);
    }

    while((ch = getc(fp)) != EOF)
    {
        if(isalpha(ch))
            word++;

        if(word>1 && (ch==' ' || ch==',' || ch=='.' || ch=='!' || ch=='\n'))//��ʱ�����⼸�ֽ����ķ����㵥�ʰɣ�1����ĸ����
        {
            count++;
            a = (a+word)/2;
            word = 0;
        }

        if(ispunct(ch))
        {
            punct++;
            word = 0;
        }

        if(ch == '\n')  //����ܵ��ʺ���ֱ�ӻس������
            word = 0;

    }
    printf("����=%d��ƽ��������=%.0f��������=%d\n", count, a, punct);
    return 0;
}
