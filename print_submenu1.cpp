#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu1(FILE* fp) //서울특별시
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS seoul = { "3,632,164","4,845" };

	printf("<서울특별시>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "강남구			239,947\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "중랑구			132,993\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n",seoul.total);
	printf("사망자수		%s\n", seoul.death);
}
