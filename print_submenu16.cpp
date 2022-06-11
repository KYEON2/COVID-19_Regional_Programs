#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu16(FILE* fp) //경상남도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS gyeongnam = { "1,093,512","1,250" };

	printf("<경상남도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "거제시      		83,820\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "합천군     		9,774\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", gyeongnam.total);
	printf("사망자수		%s\n", gyeongnam.death);
}