#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	if (a > 0)// 조건식1): a가 0보다 크면 b에 1대입
	{
		b = 1;
	}
	else if (a >= 0) // 조건식2): a가 0이면 b에 2대입
	{
		b = 2;
	}
	else // 조건식3) a가 0보다 크지않고, 0도 아니면 b에 3대입
	{
		b = 3; 
	}

	printf("b : %d\n", b); // if문으로 결정된 b 값 출력
	return 0;
// 조건을 추가하는 경우 else if {}을 추가하면 됨
// 규칙 1: 실행할 문장이 두개 이상 : 중괄호를 반드시 사용
// 규칙 2: 조건식을 차례로 검사하므로 이전 조건의 결과가 반영됨
}