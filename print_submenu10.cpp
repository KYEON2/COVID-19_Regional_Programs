#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu10(FILE* fp) //������
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS gangwon = { "518,365","858" };

	printf("<������>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "������			68,020\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "Ⱦ����			11,665\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", gangwon.total);
	printf("����ڼ�		%s\n", gangwon.death);
}