/*֮ǰ������д�����ƽ�ѭ�����棬ͷ��д���ˣ�����Сʱд����������������һ�±���д�Ĵ��룬����������һ��˼·��
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
���Ϊ����������
��һ��(�������Ŀո�)��
OOOO
OOO
OO
O
�ڶ�����˳����ĸ����
    A
   AB
  ABC
 ABCD
ABCDE
ȥ���ո�
A
AB
ABC
ABCD
ABCDE
��������������ĸ����

A
BA
CBA
DCBA
ʹ��һ����ѭ�������У�ƽ�е�������ѭ��j1 j2 j3�ֱ��Ӧһ������*/

#include<stdio.h>
int main(void)
{
    int j1, j2, j3, i;
    char s = 'A', x;
    printf("��������A��ͷ����������ײ����ĸ����д����");
    for (scanf("%c", &x), x += 1-s, i = 0; i < x; putchar(10), i++)
    {
        for(j1 = i; j1 < x-1; printf(" "), j1++);
        for(s = 'A', j2 = 0; j2 <= i; printf("%c", s), s++, j2++);
        for(s -= 2, j3 = 0; j3 < i; printf("%c", s), s--, j3++);
    }
    return 0;
}
