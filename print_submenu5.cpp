#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu5(FILE* fp) //���ֱ�����
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS guangju = { "533,825","557" };

	printf("<���ֱ�����>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "���걸			161,328\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "����			108,925\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", guangju.total);
	printf("����ڼ�		%s\n", guangju.death);
}