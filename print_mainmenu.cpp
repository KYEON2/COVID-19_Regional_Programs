#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_mainmenu(void)
{
	const char* list[17] = { // [���׸� 6] : ������ Ȱ��
			"1.����Ư����",
			"2.�λ걤����",
			"3.�뱸������",
			"4.��õ������",
			"5.���ֱ�����",
			"6.����������",
			"7.��걤����",
			"8.����Ư����ġ��",
			"9.��⵵",
			"10.������",
			"11.��û�ϵ�",
			"12.��û����",
			"13.����ϵ�",
			"14.���󳲵�",
			"15.���ϵ�",
			"16.��󳲵�",
			"17.����Ư����ġ��"
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