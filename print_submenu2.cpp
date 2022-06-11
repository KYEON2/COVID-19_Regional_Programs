#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu2(FILE* fp) //부산광역시
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS busan = { "1,096,561","2,150" };

	printf("<부산광역시>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "강서구			48,011\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "해운대구		117,394\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", busan.total);
	printf("사망자수		%s\n", busan.death);
}