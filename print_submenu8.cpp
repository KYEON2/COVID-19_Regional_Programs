#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu8(FILE* fp) //����Ư����ġ��
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS sejong = { "139,176","35" };

	printf("<����Ư����ġ��>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "����			139,061\n") == 0)
		{
			printf("%s", buffer);
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", sejong.total);
	printf("����ڼ�		%s\n", sejong.death);
}