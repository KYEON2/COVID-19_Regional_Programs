#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_mainmenu(void)
{
	const char* list[17] = { // [평가항목 6] : 포인터 활용
			"1.서울특별시",
			"2.부산광역시",
			"3.대구광역시",
			"4.인천광역시",
			"5.광주광역시",
			"6.대전광역시",
			"7.울산광역시",
			"8.세종특별자치시",
			"9.경기도",
			"10.강원도",
			"11.충청북도",
			"12.충청남도",
			"13.전라북도",
			"14.전라남도",
			"15.경상북도",
			"16.경상남도",
			"17.제주특별자치도"
	};
	
	printf("\n  MENU");
	printf("\n-----------------------\n");
	printf("%s\n", list[0]);
	printf("%s\n", list[1]);
	printf("%s\n", list[2]);
	printf("%s\n", list[3]);
	printf("%s\n", list[4]);
	printf("%s\n", list[5]);
	printf("%s\n", list[6]);
	printf("%s\n", list[7]);
	printf("%s\n", list[8]);
	printf("%s\n", list[9]);
	printf("%s\n", list[10]);
	printf("%s\n", list[11]);
	printf("%s\n", list[12]);
	printf("%s\n", list[13]);
	printf("%s\n", list[14]);
	printf("%s\n", list[15]);
	printf("%s\n", list[16]);
	printf("-----------------------\n");
}