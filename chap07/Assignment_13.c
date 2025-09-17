/*****************************************************************************************************
   * ���ϸ�: assign_13.c

   * ����: ��Ʈ OR �����ڸ� �̿��ϸ� �� �̹����� ��ĥ �� �ִ�. ũ�Ⱑ ���� 2���� unsigned char �迭��
		   ��Ʈ OR ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. unsigned char �迭 2���� ũ�Ⱑ 16�� 
		   �迭�� �����ϰ� ������ ������(0~255)�� ä���, ��Ʈ OR ���� ����� ������ �迭�� ���� �����ؼ� 
		   ����Ͻÿ�.

   * �ۼ���: �̻�

   * ��¥: 2025. 09. 16.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>\
#include <time.h>   

void bit_or_images(unsigned char img1[], unsigned char img2[], unsigned char img3[], int size);
void print_image(unsigned char img[], int size, const char* name);
int assign_13(void);

int main()
{
    assign_13();
    return 0;
}

// �� �̹��� �迭�� OR �����Ͽ� ����ϴ� �Լ�
int assign_13(void)
{
    unsigned char image1[16];
    unsigned char image2[16];
    unsigned char image3[16];

    srand((unsigned int)time(NULL)); 

    // image1, image2�� ����(0~255)�� ä��
    for (int i = 0; i < 16; i++)
    {
        image1[i] = rand() % 256;
        image2[i] = rand() % 256;
    }

    // OR ���� ����
    bit_or_images(image1, image2, image3, 16);

    // ���
    print_image(image1, 16, "image1");
    print_image(image2, 16, "image2");
    print_image(image3, 16, "image3");

    return 0;
}

// ��Ʈ OR ���� ����
void bit_or_images(unsigned char img1[], unsigned char img2[], unsigned char img3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        img3[i] = img1[i] | img2[i];
    }
}

// �迭 ��� �Լ�
void print_image(unsigned char img[], int size, const char* name)
{
    printf("%s: ", name);
    for (int i = 0; i < size; i++)
    {
        printf("%02X ", img[i]); 
    }
    printf("\n");
}
