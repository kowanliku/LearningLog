#include <stdio.h>

int main()
{
    int day;
    int monay = 0;
    int i = 0;
    printf("��������Ҫ�����������");
    scanf("%d",&day);
    while(i < day)
    {
    i ++;
    monay = i * i + monay;
    }
    printf("��%d�����׬��%dԪ\n",day ,monay);
    return 0;
}
