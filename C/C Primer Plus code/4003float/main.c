#include <stdio.h>

int main()
{
    float xiaoshu;
    printf("������һ����������");
    scanf("%f",&xiaoshu);
    printf("The input is %0.1f or %0.1e\n", xiaoshu, xiaoshu);
    printf("The input is %+0.3f or %0.3E\n", xiaoshu, xiaoshu);
    return 0;
}
