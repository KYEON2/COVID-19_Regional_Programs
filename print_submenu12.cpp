#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu12(FILE* fp) //충청남도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS chungnam = { "716,305","957" };

	printf("<충청남도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "계룡시     		15,178\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "홍성군     		32,845\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", chungnam.total);
	printf("사망자수		%s\n", chungnam.death);
}