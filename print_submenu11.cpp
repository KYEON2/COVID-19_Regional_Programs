#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu11(FILE* fp) //충청북도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS chungbuk = { "556,208","728" };

	printf("<충청북도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "괴산군     		9,816\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "충주시     		72,170\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", chungbuk.total);
	printf("사망자수		%s\n", chungbuk.death);
}
