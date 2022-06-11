#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu17(FILE* fp) //제주특별자치도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS jeju = { "236,353","182" };

	printf("<제주특별자치도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "서귀포시		56,972\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "제주시		179,208\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s\n", buffer);
				break;
			}
			
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", jeju.total);
	printf("사망자수		%s\n", jeju.death);
}
