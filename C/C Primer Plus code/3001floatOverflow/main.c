#include <stdio.h>

int main(void)
{
    float f;
    long double d;
    printf("������һ��floatС�����������ֵ\n");
    scanf("%f",&f);
    printf("������һ��doubleС�����������ֵ\n");
    scanf("%lf",&d);
    printf("float=%f;double=%.10f\n", f, d);
    return 0;
}
