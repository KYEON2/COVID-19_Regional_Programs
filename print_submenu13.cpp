#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu13(FILE* fp) //����ϵ�
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS jeonbuk = { "600,842","875" };

	printf("<����ϵ�>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "��â��    		14,543\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "���ȱ�    		5,657\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", jeonbuk.total);
	printf("����ڼ�		%s\n", jeonbuk.death);
}
