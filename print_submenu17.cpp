#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu17(FILE* fp) //����Ư����ġ��
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS jeju = { "236,353","182" };

	printf("<����Ư����ġ��>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "��������		56,972\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "���ֽ�		179,208\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s\n", buffer);
				break;
			}
			
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", jeju.total);
	printf("����ڼ�		%s\n", jeju.death);
}
