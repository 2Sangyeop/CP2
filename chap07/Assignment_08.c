/*****************************************************************************************************
   * ���ϸ�: assign_08.c

   * ����: ��ǰ ������ ����� ������ �迭�� ���Ͽ� ������(%)�� �Է¹޾� ���ε� ������ 
           ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ǰ ������ ����� �迭�� ũ��� 5�̰�, 
           ��ǰ ������ �Է¹޾Ƽ� ����Ѵ�. ���ε� ������ ������ �迭�� �����ؾ� �Ѵ�.

   * �ۼ���: �̻�

   * ��¥: 2025. 09. 16.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calc_discount(int price[], int discount_price[], int size, int rate);
int assign_08(void);

int main()
{
    assign_08();
    return 0;
}

// ��ǰ ���� �迭�� �Է¹ް� �������� ������ ����ϴ� �Լ�
int assign_08(void)
{
    int price[5];          // ���� ���� �迭
    int discount_price[5]; // ���ε� ���� �迭
    int rate;

    printf("��ǰ�� 5���� �Է��ϼ���:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &price[i]);
    }

    printf("������(%%)? ");
    scanf("%d", &rate);

    // ���
    calc_discount(price, discount_price, 5, rate);

    // ��� ���
    for (int i = 0; i < 5; i++)
    {
        printf("����: %d --> ���ΰ�: %d\n", price[i], discount_price[i]);
    }

    return 0;
}

// ���ε� ������ ����Ͽ� �迭�� �����ϴ� �Լ�
void calc_discount(int price[], int discount_price[], int size, int rate)
{
    for (int i = 0; i < size; i++)
    {
        discount_price[i] = price[i] * (100 - rate) / 100;
    }
}