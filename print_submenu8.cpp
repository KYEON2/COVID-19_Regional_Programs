#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu8(FILE* fp) //세종특별자치시
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS sejong = { "139,176","35" };

	printf("<세종특별자치시>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "세종			139,061\n") == 0)
		{
			printf("%s", buffer);
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", sejong.total);
	printf("사망자수		%s\n", sejong.death);
}