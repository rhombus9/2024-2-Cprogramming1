#include <stdio.h> // ������� ����



//�Լ� ����
int func(int x) {
	return 3 * x + 4;
}

int main(void) //main �Լ��� ����
{
	/*
	�� �Լ� �������� �ϳ��� ���ڿ��� ����Ѵ�.
	���ڿ��� ����ͷ� ��µȴ�.
	*/
	printf("Hello world! \n");	//���ڿ��� ���
	printf("%d\n", func(3));
	printf("%d is my point \n", 100); //print �Լ�
	printf("\n");

	printf("�������� 02-01\n"); //�������� 02-01
	printf("ȫ�浿\nȫ �� ��\nȫ  ��  ��\n");
	printf("\n");

	printf("�������� 02-02\n"); //�������� 02-02
	printf("�̸�: ������\n");
	printf("�ּ�: ���ѹα�, ����Ư����\n");
	printf("��ȭ��ȣ: 010-2894-2229\n");
	printf("\n");

	printf("���� Ȯ�� ����\n"); //���� Ȯ�� ����
	printf("C���α׷��� 1���� ����\n�̸�: ������\n�й�: %d\n", 202410882);
	return 0;	// 0�� ��ȯ
}	//main �Լ��� ��

