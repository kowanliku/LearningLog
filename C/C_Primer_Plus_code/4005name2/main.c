#include <stdio.h>
#include <string.h>

int main()
{
    char xing[10];
    char ming[10];
    printf("��ֱ�����������������");
    scanf("%s %s", xing, ming);
    printf("%s %s\n", xing, ming);
    printf("%*d %*d\n", strlen(xing), strlen(xing), strlen(ming), strlen(ming));
    printf("%s %s\n", xing, ming);
    printf("%-*d %-*d\n", strlen(xing), strlen(xing), strlen(ming), strlen(ming));
    return 0;
}
