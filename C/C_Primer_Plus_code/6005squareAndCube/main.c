#include <stdio.h>

int main()
{
    int star,end;
    printf("������Ҫ�������ʼ�������������(�ÿո�������");
    scanf("%d %d", &star, &end);
    printf("��ֵ\tƽ��\t����\t\n");
    for(int i = star; i <= end; i ++)
    {
        printf("%d\t%d\t%d\t\n", i, i*i, i*i*i);
    }
    return 0;
}
