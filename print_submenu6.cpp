#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu6(FILE* fp) //����������
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS daejeon = { "512,606","700" };

	printf("<����������>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "�����			52,833\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "�߱�			82,449\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", daejeon.total);
	printf("����ڼ�		%s\n", daejeon.death);
}