#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu15(FILE* fp) //���ϵ�
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS gyeongbuk = { "781,624","1,375" };

	printf("<���ϵ�>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "����			89,586\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "���׽úϱ�		80,563\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", gyeongbuk.total);
	printf("����ڼ�		%s\n", gyeongbuk.death);
}
