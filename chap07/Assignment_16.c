/*****************************************************************************************************
   * ���ϸ�: assign_16.c

   * ����: ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ã�� �ε����� �����ϴ� find_array
		   �Լ��� �ۼ��Ͻÿ�. Ű ���� ã�� �� ������ -1�� �����Ѵ�.

   * �ۼ���: �̻�

  * ��¥: 2025. 09. 16.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_array(int arr[], int size, int key);
int assign_16(void);

int main()
{
    assign_16();
    return 0;
}

// �迭���� Ű ���� ã�� �ε����� ����ϴ� �Լ�
int assign_16(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int key;
    int index;

    // �迭 ���
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ű �� �Է�
    printf("ã�� ��? ");
    scanf("%d", &key);

    
    index = find_array(arr, 10, key);

    if (index != -1)
    {
        printf("%d�� %d��° �����Դϴ�.\n", key, index);
    }
    else
    {
        printf("%d�� �迭�� �����ϴ�.\n", key);
    }

    return 0;
}

// �迭���� Ű ���� ã�� �ε������� ��ȯ (������ -1)
int find_array(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; //ã���� �ε��� ��ȯ
        }
    }
    return -1; // �� ã���� -1
}
