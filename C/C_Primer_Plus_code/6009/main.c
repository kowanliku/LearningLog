#include <stdio.h>

int main()
{
    int s, x, pfh=0;
    printf("�����������������ո��������");
    scanf("%d %d", &s, &x);
    while(s < x)
    {
    for(int i = s; i <= x; pfh=pfh+i*i, i++);
    printf("��������������޵�ƽ��Ϊ��%d �� %d ��Ϊ��%d\n", s*s, x*x, pfh);
    printf("��������룬����<=�����˳���");
    scanf("%d %d", &s, &x);
    pfh = 0;
    }
    printf("Done\n");
    return 0;
}
