/*����¶ȵ�����ȵ������İٷ���
 * Enter the list of daily low temperatures ����ÿ����¶�ֵ
 * Use Celsius, and enter q to quit ʹ�����϶ȣ�����q�˳�
 * days total: ��������
 * were below freezing. �������
 * No data entered! û����������
 */
#include <stdio.h>

int main()
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while(scanf ("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }
    if (all_days != 0)
        printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0*(float)cold_days / all_days);
    if (all_days == 0)
        printf("No data entered!\n");
    return 0;
}
