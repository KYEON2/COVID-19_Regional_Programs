#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu11(FILE* fp) //��û�ϵ�
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS chungbuk = { "556,208","728" };

	printf("<��û�ϵ�>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "���걺     		9,816\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "���ֽ�     		72,170\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", chungbuk.total);
	printf("����ڼ�		%s\n", chungbuk.death);
}
