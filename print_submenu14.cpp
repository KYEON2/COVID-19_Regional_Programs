#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu14(FILE* fp) //전라남도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS jeonnam = { "596,646","470" };

	printf("<전라남도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "강진군			9,269\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "화순군			21,246\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", jeonnam.total);
	printf("사망자수		%s\n", jeonnam.death);
}