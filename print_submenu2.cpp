#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu2(FILE* fp) //�λ걤����
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS busan = { "1,096,561","2,150" };

	printf("<�λ걤����>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "������			48,011\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "�ؿ�뱸		117,394\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", busan.total);
	printf("����ڼ�		%s\n", busan.death);
}