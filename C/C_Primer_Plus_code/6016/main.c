//�м伸���п�����
#include <stdio.h>

int main()
{
    int i;
    double money = 1000000;
    for(i =0; money > 100000; i++ )
    {
        money += money * 0.08;
        money -= 100000;
        printf("��%02d�����ʣ���%9.2lf\n", i+1, money);
    }
    printf("��%d�����ȡ�߱������Ϣ=%.2lf�����Ϊ�㡣\n", i+1, money+money*0.08);
    return 0;
}
