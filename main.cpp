/*
	[평가항목 1] : 과제 설명

	컴퓨터프로그래밍 평과과제 (배점 25점)
	학과 : 컴퓨터공학부
	학번 : 202201186
	이름 : 노기연

	과제 주제 : covid-19 관련 처리를 하는 프로그램을 구현

	프로그램 설명 : 'covid19' 프로그램은 대한민국 정부가 공식으로 만든 '코로나바이러스감염증-19' 홈페이지에서 
	2022.06.08까지의 코로나바이러스 확진 환자 발생 현황이 기록된 텍스트 자료를 바탕으로 사용자에게 
	지역별 코로나바이러스 발생 현황을 보여주는 프로그램입니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include  "covid19.h" // [평가 항목 8] : 다중 소스 파일 사용

int main(void)
{
	int select,answer,district = 0;
	FILE* fp;         // [평가항목 4] : 포인터 사용
	
	if ((fp = fopen("코로나바이러스19 지역별 발생현황-20220608.txt", "rt")) == NULL)    // [평가항목 7] : 파일 입출력
	{
		fprintf(stderr, "코로나바이러스19 지역별 발생현황-20220608.txt을 열 수 없습니다.");
		exit(1);
	}

	print_mainmenu();
	printf("감염현황을 알고싶은 시도의 번호를 입력하세요: ");
	scanf("%d", &select);
	printf("\n");

	switch (select)
	{
	case 1: // 서울특별시
		// 총확진자와 사망자를 보여준다.
		print_submenu1(fp);
		break;

	case 2: // 부산광역시
		print_submenu2(fp);
		break;

	case 3: // 대구광역시 
		print_submenu3(fp);
		break;

	case 4: // 인천광역시
		print_submenu4(fp);
		break;

	case 5: // 광주광역시
		print_submenu5(fp);
		break;

	case 6: // 대전광역시
		print_submenu6(fp);
		break;

	case 7: // 울산광역시
		print_submenu7(fp);
		break;

	case 8: // 세종특별자치시
		print_submenu8(fp);
		break;

	case 9: // 경기도
		print_submenu9(fp);
		break;

	case 10: // 강원도
		print_submenu10(fp);
		break;

	case 11: // 충청북도
		print_submenu11(fp);
		break;

	case 12: // 충청남도
		print_submenu12(fp);
		break;

	case 13: // 전라북도
		print_submenu13(fp);
		break;

	case 14: // 전라남도
		print_submenu14(fp);
		break;

	case 15: // 경상북도
		print_submenu15(fp);
		break;

	case 16: // 경상남도
		print_submenu16(fp);
		break;

	case 17: // 제주특별자치도
		print_submenu17(fp);
		break;

	default:
		printf("\n잘못된 번호를 입력하였습니다\n>>");
		break;
	}

	fclose(fp);

	return 0;
}