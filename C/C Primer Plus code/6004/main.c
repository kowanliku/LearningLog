#include<stdio.h>
/*
֮ǰ������д�����ƽ�ѭ�����棬ͷ��д���ˣ�����Сʱд����������������һ�±���д�Ĵ��룬����������һ��˼·��

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

ʹ��һ����ѭ�������У�ƽ�е�������ѭ���ֱ��Ӧһ������
*/

int main()
{
    int i;
    int j1, j2, j3;     //j1�ܿո�j2��˳����ĸ��j3��������ĸ
    char s = 'A';
    printf("��������A��ͷ����������ײ����ĸ����д����");
    char x;
    scanf("%c", &x);
    x = x - s + 1;      //xΪ������A��ͷ���������ĸ��Ҫ������
    printf("x=%d��\n", x);
    for (i = 0; i < x; i++)
    {
        for(j1 = i; j1 < x-1; j1++)
        {
            printf(" ");
        }
        s = 'A';
        for(j2 = 0; j2 <= i; j2++)
        {
            printf("%c", s);
            s++;
        }
        s -= 2;         //ԭ����Ҫ��1����j2ѭ����󻹼���1������j3ѭ��ǰ��2
        for(j3 = 0; j3 < i; j3++)
        {
            printf("%c", s);
            s--;
        }
        printf("\n");
    }
    return 0;
}

