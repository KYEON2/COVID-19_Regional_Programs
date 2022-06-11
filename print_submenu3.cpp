#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu3(FILE* fp) //대구광역시 
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS daegu = { "763,523","1,336" };

	printf("<대구광역시>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "남구			58,238\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "중구			31,911\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", daegu.total);
	printf("사망자수		%s\n", daegu.death);
}
