#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu9(FILE* fp) //경기도
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS gyeonggi = { "4,943,924","6,234" };

	printf("<경기도>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "가평군	        	20,400\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "화성시	        	352,467\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", gyeonggi.total);
	printf("사망자수		%s\n", gyeonggi.death);
}