#include <stdio.h>

//int get_num(void);	// 함수 선언. void는 있어도 되고 없어도 됨.
//
int main(void)
{
	int result;
	result = get_num();			// 함수 호출, 반환값은 result에 저장함
	printf("반환값 : %d\n", result);	// 반환값 출력
	return 0;
}
//
//int get_num(void)	// 매개변수가 없고 반환형만 있음
//{
//	int num;	// 키보드 입력값을 저장할 변수
//	printf("양수 입력 : ");		// 입력 안내 메시지
//	scanf("%d", &num);		// 키보드 입력
//
//	return num;		// 입력한 값 반환
//}
int get_num(void)	// 함수 선언. void는 있어도 되고 없어도 됨.
{
	int num;
	printf("양수 입력 : ");
	scanf("%d", &num);

	while (num < 0)  // 음수가 입력되면 입력 과정 반복함
	{
		printf("양수를 입력하세요!\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}
	return num;
}

