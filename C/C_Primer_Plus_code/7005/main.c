/* ��switch������ϰ3
 * ��дһ�����򡣸ó����ȡ������ֱ������0��������ֹ�󣬳���Ӧ�ñ��������ż����������0���ܸ�����ż����ƽ��ֵ������������ܸ����Լ�������ƽ��ֵ��
 */
#include <stdio.h>

int main()
{
    int integer = 1 ;
    int odd=0, odd_sum=0, even=0, even_sum=0;
    printf("������������������0���������");
    while(integer != 0)
    {
        scanf("%d", &integer);
        //        if(integer%2 == 0)
        //        {
        //            even++;
        //            even_sum += integer;
        //        }
        //        else
        //        {
        //            odd++;
        //            odd_sum += integer;
        //        }

        switch (integer%2)
        {
        case  0:
            even++;
            even_sum += integer;
            break;
        case 1:
            odd++;
            odd_sum += integer;
        }
        printf("ż������=%d��ż�����=%d����������=%d���������=%d\n", even, even_sum, odd, odd_sum);

    }
    printf("Done!\n");
    return 0;
}
