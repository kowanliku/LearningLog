/* ��дһ�������ȡ���룬ֱ��#������������ei���ֵĴ�����
 * �˳������Ҫ��סǰһ���ַ��͵�ǰ���ַ��������硰Receive your eieio award.���������������
 */
#include <stdio.h>

int main()
{
    int ei_count = 0;
    char ch;
    char pre_ch='a';
    printf("���������ei��һ�����֣�����#�˳�����");
    while((ch = getchar()) != '#')
    {
        if(ch == 'i')
            if(pre_ch == 'e')
            {
                ei_count++;
                pre_ch = 'a';
            }
        if(ch == 'e')
            pre_ch = ch;
    }
    printf("ei����%d�Ρ�", ei_count);
    return 0;
}

