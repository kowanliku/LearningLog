/* ��дһ��������ʾһ���˵���Ϊ���ṩ�ӷ����������˷��������ѡ�
 * �������ѡ��󣬸ó���������������Ȼ��ִ����ѡ��Ĳ�����
 * �ó���Ӧ��ֻ���������ṩ�Ĳ˵�ѡ�
 * ��Ӧ��ʹ��float���͵�������������û�δ����������Ӧ�������������롣
 * �ڳ���������У�����û�����0��Ϊ�ڶ��������ó���Ӧ����ʾ�û�����һ���µ�ֵ��
 * һ�����͵ĳ�������Ӧ��������ʾ��
 * Enter the operation of your choice:
 * a. add        s. subtract
 * m. multiply   d. divide
 * q. quic
 *
 */
#include <stdio.h>

int main()
{
    float a=0, b=0, res=0;
    char ch=0;

    while(ch != 'q')
    {
        printf("��ʹ��C���׼�����:\n");
        printf("a. �ӷ�        s.����\n");
        printf("m. �˷�        d.����\n");
        printf("q. �˳�\n");
        ch = getchar();
        if(ch == 'a'|| ch == 's' ||ch == 'm' || ch == 'd');
        else
            continue;
        if(ch == '\n')
            getchar();
        printf("�������һ������ֵ:");
        while(scanf("%f", &a) != 1)
        {
            while(getchar() != '\n')
                printf("���������������һ������ֵ:");
        }
        printf("������ڶ�������ֵ��");
        while(scanf("%f", &b) != 1)
        {
            while(getchar() != '\n')
                printf("��������������ڶ�������ֵ:");
        }
        printf("ch=%c\n",ch);
        do
        {
            if(ch == 'd' && b == 0)
            {
                printf("��������ȥ������������:");
                scanf("%f", &b);
                while(getchar() != '\n');
            }
            else
                break;
        }while(1);
        switch (ch)
        {
        case 'a':res=a+b;
            break;
        case 's':res=a-b;
            break;
        case 'm':res=a*b;
            break;
        case 'd':res=a/b;
            break;
        }
        printf("��������%.2f\n\n", res);
        getchar();
        res = 0;
    }
    return 0;
}

