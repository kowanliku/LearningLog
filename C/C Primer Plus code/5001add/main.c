#include <stdio.h>

int main()
{
    int x;
    printf("������һ��������");
    scanf("%d", &x);
    int i = x;
    while(i <= x + 10)
    {
      printf("%d\t", i);
      i++;
    }
    return 0;
}
