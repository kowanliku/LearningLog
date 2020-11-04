/* 1988��United States Federal Tax Schedule�ǽ���������ġ�����Ϊ4�࣬ÿ���������ȼ�����������ժҪ����Ԫ��ΪӦ��˰�����롣

����	                ˰��
����	            ǰ17850��Ԫ��15%���������ְ�28%
����	            ǰ23900��Ԫ��15%���������ְ�28%
�ѻ飬����	    ǰ29750��Ԫ��15%���������ְ�28%
�ѻ飬����	    ǰ14875��Ԫ��l5%���������ְ�28%

���磬��20000��ԪӦ��˰����ĵ����Ӷ�Ͷ���Ӧ��˰��0.15��17 850��Ԫ+0.28����20 000��Ԫ-17 850��Ԫ����
��дһ���������û�ָ��˰�������Ӧ��˰���룬Ȼ�����˰��ʹ��ѭ���Ա��û����Զ�����롣

��������
4�����͵Ľ�˰ѡ��
����˰�𣬴�ӡ���롢˰��˰������
 */

#include <stdio.h>
#define FIRST_TAX 0.15
#define TAIL_TAX 0.28

int main()
{
    double income=0, taxes=0, discount=0 ;
    char choice;
    while(income >= 0)
    {
        printf("1.����        2.����        \n3.�ѻ�        4.����\n");
        printf("��ѡ��˰���ͣ�");
        choice = getchar();
        getchar();                      //�����и��ӣ�����getchar��scanf֮����Ҫgetchar�Ե�һ���س�
        switch (choice)
        {
        case '1':
            discount = 17850;
            break;
        case '2':
            discount = 23900;
            break;
        case '3':
            discount = 29750;
            break;
        case '4':
            discount = 14875;
        }
        printf("���������루���븺ֵ�˳���:");
        scanf("%lf", &income);
        if(income>discount)
            taxes = discount * FIRST_TAX + ((income - discount)*TAIL_TAX);
        else
            taxes = income * FIRST_TAX;
        printf("����=%.2lf,Ӧ��˰��=%.2lf,˰������=%.2lf\n\n", income, taxes, income - taxes);
        getchar();                      //�����и��ӣ�ѭ���׻��и�getchar
    }
    return 0;
}
