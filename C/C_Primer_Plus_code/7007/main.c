/* ��д����Ҫ������һ���еĹ���Сʱ����Ȼ���ӡ�����ܶ˰���Լ������ʡ������¼��裺
 * a���������ʵȼ�=10.00��Ԫ/Сʱ
 * b���Ӱࣨ����40Сʱ��=1.5����ʱ��
 * c��˰��       ǰ300��ԪΪ15%
 *              ��һ��150��ԪΪ20%
 *              ���µ�Ϊ25%
 * ��#define���峣�������ع��ı����Ƿ���ϵ�ǰ��˰����
 */
#include <stdio.h>
#define HOUR 10.0
#define WORK_OV 1.5
#define TAXES_300 0.15
#define N_TAXES_150 0.2
#define TAXES_OT 0.25

int main()
{
    int work_h;
    float taxes, wage_total;
    printf("�����뱾�L����Сʱ��");
    scanf("%d", &work_h);
    if(work_h <= 40)
        wage_total = work_h * HOUR;
    else
        wage_total = 40 * HOUR + (work_h - 40) * WORK_OV;

    if(wage_total <= 300)
        taxes = wage_total * TAXES_300;
    else if(wage_total <= 450)
        taxes = 300 * TAXES_300 + (wage_total - 300) * N_TAXES_150;
    else //if(wage_total > 450)
        taxes = 300 * TAXES_300 + 150 * N_TAXES_150 + (wage_total - 450) * TAXES_OT;
    printf("�����ܶ%5.2f\n˰    ��%5.2f\n�� �� �ʣ�%5.2f\n", wage_total, taxes, wage_total - taxes);
    return 0;
}
