#include <stdio.h>

int main()
{
    float shengao;
    char name[10];
    printf("��ֱ�����������������ߣ�Ӣ�磩:");
    scanf("%s %f", name, &shengao);
    printf("%s, you are %0.3f feet tall\n", name, shengao/12);
    return 0;
}
