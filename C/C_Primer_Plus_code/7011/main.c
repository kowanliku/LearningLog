/* ABC Mail Order Grocery���ʼ����ۼ���1.25��Ԫ/������˵��ۼ���0.65��Ԫ/�������ܲ����ۼ���0.89��Ԫ/����
 * ������������֮ǰ������Ϊ100��Ԫ�Ķ����ṩ5%�Ĵ����Żݡ���5�������µĶ�����ȡ3.50��Ԫ�������װж���ã�
 * ����5��������20���Ķ�����ȡ1O.OO��Ԫ�������װж���ã�20�������ϵ����䣬��8��Ԫ������ÿ������0.1��Ԫ��
 * ��д������ѭ����ʹ��switch��䣬�Ա������a����Ӧ�����û���������ĳ��ʼ�������
 * bΪ��˵İ�����cΪ���ܲ��İ�������q�����û��˳��������̡�
 * Ȼ���������ܷ��á��ۿۺ�������ã����������ѵĻ������Լ�������
 * ������Ӧ����ʾ���еĹ�����Ϣ��ÿ���ķ��á������İ������ö���ÿ���߲˵ķ��á��������ܷ��á��ۿۣ�
 * ����еĻ�����������ã��Լ����з��õ�������
 *
 *
 * ��     1.25��Ԫ/��
 * ���   0.65��Ԫ/��
 * ���ܲ� 0.89��Ԫ/��
 * ��100�ۿ�       5%(�˷�֮ǰ��
 * ����װж�ѣ�5�������£�3.50��Ԫ
 * ����װж�ѣ�����5������20����1O.OO��Ԫ
 * ����װж��(20��������,8��Ԫ������) ÿ������0.1��Ԫ��
 * ��ѭ����ʹ��switch���
 * a����Ӧ�����û���������ĳ��ʼ�������
 * bΪ��˵İ�����
 * cΪ���ܲ��İ�����
 * ��q�����û��˳��������̡�
 * �����ܷ��á��ۿۺ�������ã����������ѵĻ������Լ�������
 * ������Ϣ��ÿ���ķ��á������İ������ö���ÿ���߲˵ķ��á��������ܷ��á��ۿۣ��������,����
 * һ��ѭ������ѡ���߲ˣ�ѡ��ʱ�ʹ�ӡ��������Ϣ
 */
#include <stdio.h>

int main()
{
    float thistle_pri=1.25, beet_pri=0.65, carrot_pri=0.89;
    float thistle_pou=0, beet_pou=0, carrot_pou=0;

    float pound=0, freight=0, freight_20=0, discount=0, total=0, count=0, subtotal=0;
    char ch = '\0';
    while(ch != 'q')
    {
        printf("a.���ʼ�         b.���\nc.���ܲ�         q.�˳�\nx.��չ��ﳵ\n");
        printf("������Ҫѡ�����߲�Ʒ�֣�");
        ch =getchar();
        if(ch != 'x')
        {
            getchar();
            printf("���������:");
            scanf("%f", &count);
        }
        else
            printf("����չ��ﳵ��\n");
        switch (ch)
        {
        case 'a':
            thistle_pou += count;
            break;
        case 'b':
            beet_pou += count;
            break;
        case 'c':
            carrot_pou += count;
            break;
        case 'q':
            ch = 'q';
            break;
        case 'x':
            thistle_pou = 0;
            beet_pou = 0;
            carrot_pou = 0;
            freight = 0;
            pound = 0;
            freight_20 = 0;
            discount = 0;
            total = 0;
            subtotal = 0;
            break;
        }
        subtotal = thistle_pou*thistle_pri+beet_pou*beet_pri+carrot_pou*carrot_pri;
        pound = thistle_pou+beet_pou+carrot_pou;
        if(pound <= 5 && pound > 0)
            freight = 3.5;
        else if(pound > 5 && pound < 20)
            freight = 10;
        if(pound > 20 && subtotal > 8)
            freight_20 = (pound-20) * 0.1;
        if(subtotal > 100)
            discount = subtotal * 0.05;
        total = subtotal + freight + freight_20 - discount;
        putchar(10);

        printf("���     ��Ʒ       ����     ����     ���\n");
        printf(" 1.     ���ʼ�     %5.2f    %5.2f    %5.2f\n", thistle_pri, thistle_pou, thistle_pou*thistle_pri);
        printf(" 2.     ���       %5.2f    %5.2f    %5.2f\n", beet_pri, beet_pou, beet_pou*beet_pri);
        printf(" 3.     ���ܲ�     %5.2f    %5.2f    %5.2f\n", carrot_pri, carrot_pou, carrot_pou*carrot_pri);
        printf(" 4.     ����װж��                   %5.2f\n", freight+freight_20);
        printf(" 5.     �ۿ�                         %5.2f\n", discount);
        printf("        �ϼƣ�              %5.2f    %5.2f\n\n\n", pound, total);
        getchar();
    }
    return 0;
}
