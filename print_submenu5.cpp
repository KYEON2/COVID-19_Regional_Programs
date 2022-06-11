#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu5(FILE* fp) //광주광역시
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS guangju = { "533,825","557" };

	printf("<광주광역시>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "광산구			161,328\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "서구			108,925\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", guangju.total);
	printf("사망자수		%s\n", guangju.death);
}