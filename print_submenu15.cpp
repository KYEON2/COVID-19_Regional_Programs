#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu15(FILE* fp) //경상북도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS gyeongbuk = { "781,624","1,375" };

	printf("<경상북도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "경산시			89,586\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "포항시북구		80,563\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", gyeongbuk.total);
	printf("사망자수		%s\n", gyeongbuk.death);
}
