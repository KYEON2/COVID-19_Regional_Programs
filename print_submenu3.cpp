#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu3(FILE* fp) //�뱸������ 
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS daegu = { "763,523","1,336" };

	printf("<�뱸������>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "����			58,238\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "�߱�			31,911\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", daegu.total);
	printf("����ڼ�		%s\n", daegu.death);
}
