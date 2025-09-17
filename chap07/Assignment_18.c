/*****************************************************************************************************
   * ���ϸ�: assign_18.c

   * ����: ���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�. �ִ� 10����
           ������ ���Ҹ� ������ �� �ִ� ����(set)�� �����Ͻÿ�. ������ �Է¹޾� ������ ���ҷ� �߰��ϰ�, 
           �� ������ ������ ���ҵ��� ����Ͻÿ�.

   * �ۼ���: �̻�

   * ��¥: 2025. 09. 16.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_to_set(int set[], int* size, int value);
void print_set(int set[], int size);
int assign_18(void);

int main()
{
    assign_18();
    return 0;
}

int assign_18(void)
{
    int set[10];   // ���� ���� �迭
    int size = 0;  
    int value;

    while (size < 10)
    {
        printf("�迭�� �߰��� ����? ");
        if (scanf("%d", &value) != 1) break; // �߸��� �Է��̸� ����

        if (add_to_set(set, &size, value))
        {
            print_set(set, size);
        }
    }

    return 0;
}

// ���տ� ���� �߰� (�ߺ��̸� �޽��� ��� �� false ��ȯ)
int add_to_set(int set[], int* size, int value)
{
    for (int i = 0; i < *size; i++)
    {
        if (set[i] == value)
        {
            printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", i);
            return 0; // �ߺ�
        }
    }

    if (*size < 10)
    {
        set[*size] = value;
        (*size)++;
        return 1; // �߰�
    }
    else
    {
        printf("������ ���� á���ϴ�.\n");
        return 0; // ����
    }
}

// ���� ���
void print_set(int set[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", set[i]);
    }
    printf("\n");
}
