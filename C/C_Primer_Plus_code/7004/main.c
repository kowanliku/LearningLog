/* ����if else����д�����ȡ���룬ֱ��#����һ����̾�Ŵ���ÿ����ţ���ԭ�е�ÿ����̾����������̾�Ŵ��棬��󱨸�����˶��ٴ������
 * if else����ֱ��#����
 * ��ű���̾���滻
 * ԭ��̾�����滻��������̾��
 * �����滻ִ�д���
 */
#include <stdio.h>

int main()
{
    int n=0;
    char ch;
    printf("���������!��.��һ�����֣�����#�˳�����");
    while((ch = getchar()) != '#')
    {
            if(ch == '!')
            {
                printf("%c%c", ch, ch);
                n++;
            }
            else if(ch == '.')
            {
                putchar('!');
                n++;
            }
            else
                putchar(ch);
    }
    printf("���滻%d�Σ�\n", n);
    return 0;
}
