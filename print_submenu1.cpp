#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu1(FILE* fp) //����Ư����
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS seoul = { "3,632,164","4,845" };

	printf("<����Ư����>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "������			239,947\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "�߶���			132,993\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n",seoul.total);
	printf("����ڼ�		%s\n", seoul.death);
}
