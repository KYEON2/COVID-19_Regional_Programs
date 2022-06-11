#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu13(FILE* fp) //전라북도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS jeonbuk = { "600,842","875" };

	printf("<전라북도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "고창군    		14,543\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "진안군    		5,657\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", jeonbuk.total);
	printf("사망자수		%s\n", jeonbuk.death);
}
