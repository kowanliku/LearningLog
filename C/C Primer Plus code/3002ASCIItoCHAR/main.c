#include <stdio.h>

int main()
{
    char c;
    printf("������һ��ASCII�룺");
    scanf("%d",&c);
    printf("�������ASCII���Ӧ���ǣ�%c\n", c);
    for(c=33;c<126;c++)
    {
      printf("%3d=%c\t", c, c);
    }
    return 0;
}
