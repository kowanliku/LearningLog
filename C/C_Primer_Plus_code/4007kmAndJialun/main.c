#include <stdio.h>
#define MTKM  1.609

int main()
{
    const float JLTS = 3.785;
    float mai, jialun;
    printf("������Ӣ���������ļ��أ�");
    scanf("%f %f", &mai, &jialun);
    float onemai = jialun / mai*JLTS;
    printf("ÿ�ٹ����ͺ�Ϊ��%0.1f��\n",onemai*MTKM*100);
    printf("ÿ�����ͺ�Ϊ��%0.1f��\n", onemai*MTKM);
    return 0;
}
