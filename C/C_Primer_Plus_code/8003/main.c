/* ��дһ�����򣬰�������Ϊ�ַ�����ȡ��ֱ������EOF��
 * ���䱨�������еĴ�д��ĸ������Сд��ĸ������
 * ����Сд��ĸ����ֵ�������ģ���д��ĸҲ����ˡ�
 * ���������ʹ��ctypc.h���еĺ��ʵĺ��������ִ�Сд��
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() //����ʲô�� ����Сд��ĸ����ֵ�������ģ���д��ĸҲ����ˡ�
{
    int upper=0, lower=0, other=0;
    char ch;

    FILE * fp;
    fp = fopen("d:\\123.txt","r");
    if( fp == NULL)
    {
        printf("���ļ�����\n");
        exit(1);
    }

    while((ch = getc(fp)) != EOF)
    {
        /*if(ch>=65 && ch<=90) //��ĿҪ����ctypc.h
            upper++;
        if(ch>=97 && ch<122)
            lower++;*/
        if(isupper(ch))
            upper++;
        else if(islower(ch))
            lower++;
        else
            other++;
    }
    printf("��ȡ�ĸ��ַ�����д��ĸ=%d��Сд��ĸ=%d,����=%d,�ܹ�=%d\n", upper, lower, other, upper+lower+other);

    return 0;
}
