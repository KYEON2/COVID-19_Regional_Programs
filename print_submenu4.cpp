#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu4(FILE* fp) //��õ������
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS incheon = { "1,075,395","1,396" };

	printf("<��õ������>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "��ȭ��			20,098\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "�߱�			54,830\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", incheon.total);
	printf("����ڼ�		%s\n", incheon.death);
}