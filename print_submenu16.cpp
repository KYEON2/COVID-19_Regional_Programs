#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu16(FILE* fp) //��󳲵�
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS gyeongnam = { "1,093,512","1,250" };

	printf("<��󳲵�>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "������      		83,820\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "��õ��     		9,774\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", gyeongnam.total);
	printf("����ڼ�		%s\n", gyeongnam.death);
}