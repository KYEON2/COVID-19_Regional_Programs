#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu12(FILE* fp) //��û����
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS chungnam = { "716,305","957" };

	printf("<��û����>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "����     		15,178\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "ȫ����     		32,845\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", chungnam.total);
	printf("����ڼ�		%s\n", chungnam.death);
}