/* ��дһ�����򣬰�������Ϊ�ַ�����ȡ��ֱ������EOF����ó����ӡÿ�������ַ�����ASCII�����ʮ����ֵ��
 * ע����ASCII�����пո��ַ�ǰ����ַ��ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ���
 * ����Ǵ�ӡ�ַ��ǻ��з����Ʊ������ֱ��ӡ\n��\t������ʹ�ÿ����ַ����š�
 * ���磬ASCII��l��Ctrl+A��������ʾΪAA��ע��A��ASC��ֵ��Ctrl+A��ֵ��64��
 * �������Ǵ�ӡ�ַ�Ҳ�������ƵĹ�ϵ����ȥÿ������һ�����з�ʱ�Ϳ�ʼһ������֮�⣬ÿ�д�ӡ10��ֵ��
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE * fp;
    fp = fopen("d:\\123.txt","r");
    if(fp == NULL)
    {
        printf("���ļ�ʧ�ܣ�\n");
        exit(1);
    }
    int count = 0;
    while((ch = getc(fp)) != EOF)
    {
        if  (ch == '\n')
        {
            printf("\\n=%d\n", ch, ch);
            count = 0;
        }
        else if(ch == '\t')
            printf("\\t=%d\t", ch);
        else if (ch < 32)
            printf("%c%c=%d\t", ch+64, ch+64, ch);
        else
            printf("%c=%d\t", ch, ch);
        count++;
        if(count == 10)
        {
            putchar(10);
            count = 0;
        }
    }


    return 0;
}
