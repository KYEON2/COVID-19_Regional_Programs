#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu14(FILE* fp) //���󳲵�
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS jeonnam = { "596,646","470" };

	printf("<���󳲵�>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "������			9,269\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "ȭ����			21,246\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", jeonnam.total);
	printf("����ڼ�		%s\n", jeonnam.death);
}