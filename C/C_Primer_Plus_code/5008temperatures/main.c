//�Լ�д�Ĵ��벻���׼����㣬��һdouble��ôʶ�����ĸ���ڶ���ôͬʱ������ֵ��Temperatures������������ĸ�˳��벻��Ҫ��ô��
//���������ϳ��ĵ�������⣬��������������е㲻һ����
#include <stdio.h>
//#include <stdlib.h>

void Temperatures(double tem)
{
    const double w0 = 5.0 / 9.0, w1 = 32.0;
    double k = 273.16;
    printf("%.2lf\n", tem);
    printf("%.2lf\n", w0 * (tem -w1));
    printf("%.2lf\n", k + w0 * (tem -w1));
}

int main()
{
    double tem;
    printf("input tem:");
    while(scanf("%lf", &tem) == 1)
    {
        printf("tem f=%lf,tem c=%f\n", tem, tem);
        Temperatures(tem);
        printf("input again:");
    }
    return 0;
}
