#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu7(FILE* fp) //��걤����
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS ulsan = { "379,986","341" };

	printf("<��걤����>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "����			123,235\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "�߱�			70,569\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", ulsan.total);
	printf("����ڼ�		%s\n", ulsan.death);
}
