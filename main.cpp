/*
	[���׸� 1] : ���� ����

	��ǻ�����α׷��� ������� (���� 25��)
	�а� : ��ǻ�Ͱ��к�
	�й� : 202201186
	�̸� : ��⿬

	���� ���� : covid-19 ���� ó���� �ϴ� ���α׷��� ����

	���α׷� ���� : 'covid19' ���α׷��� ���ѹα� ���ΰ� �������� ���� '�ڷγ����̷���������-19' Ȩ���������� 
	2022.06.08������ �ڷγ����̷��� Ȯ�� ȯ�� �߻� ��Ȳ�� ��ϵ� �ؽ�Ʈ �ڷḦ �������� ����ڿ��� 
	������ �ڷγ����̷��� �߻� ��Ȳ�� �����ִ� ���α׷��Դϴ�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include  "covid19.h" // [�� �׸� 8] : ���� �ҽ� ���� ���

int main(void)
{
	int select,answer,district = 0;
	FILE* fp;         // [���׸� 4] : ������ ���
	
	if ((fp = fopen("�ڷγ����̷���19 ������ �߻���Ȳ-20220608.txt", "rt")) == NULL)    // [���׸� 7] : ���� �����
	{
		fprintf(stderr, "�ڷγ����̷���19 ������ �߻���Ȳ-20220608.txt�� �� �� �����ϴ�.");
		exit(1);
	}

	print_mainmenu();
	printf("������Ȳ�� �˰���� �õ��� ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &select);
	printf("\n");

	switch (select)
	{
	case 1: // ����Ư����
		// ��Ȯ���ڿ� ����ڸ� �����ش�.
		print_submenu1(fp);
		break;

	case 2: // �λ걤����
		print_submenu2(fp);
		break;

	case 3: // �뱸������ 
		print_submenu3(fp);
		break;

	case 4: // ��õ������
		print_submenu4(fp);
		break;

	case 5: // ���ֱ�����
		print_submenu5(fp);
		break;

	case 6: // ����������
		print_submenu6(fp);
		break;

	case 7: // ��걤����
		print_submenu7(fp);
		break;

	case 8: // ����Ư����ġ��
		print_submenu8(fp);
		break;

	case 9: // ��⵵
		print_submenu9(fp);
		break;

	case 10: // ������
		print_submenu10(fp);
		break;

	case 11: // ��û�ϵ�
		print_submenu11(fp);
		break;

	case 12: // ��û����
		print_submenu12(fp);
		break;

	case 13: // ����ϵ�
		print_submenu13(fp);
		break;

	case 14: // ���󳲵�
		print_submenu14(fp);
		break;

	case 15: // ���ϵ�
		print_submenu15(fp);
		break;

	case 16: // ��󳲵�
		print_submenu16(fp);
		break;

	case 17: // ����Ư����ġ��
		print_submenu17(fp);
		break;

	default:
		printf("\n�߸��� ��ȣ�� �Է��Ͽ����ϴ�\n>>");
		break;
	}

	fclose(fp);

	return 0;
}