#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu9(FILE* fp) //��⵵
{
	char buffer[100]; // [���׸� 3] : �迭 ���
	STATUS gyeonggi = { "4,943,924","6,234" };

	printf("<��⵵>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "����	        	20,400\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "ȭ����	        	352,467\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("�� Ȯ���ڼ�		%s\n", gyeonggi.total);
	printf("����ڼ�		%s\n", gyeonggi.death);
}