#include <stdio.h>
int main(void)
{
	int i, j; // 반복 횟수를 세기 위한 제어 변수
	for (j = 0; j < 3; j++) // j가 0부터 2까지 증가하면서 3번 반복
	{
		for (i = 0; i < 5; i++) // i가 0부터 4까지 증가하면서 5번 반복
		{
			printf("*"); // 별을 출력하는 출력문
		}
		printf("\n");  // 별을 5번 출력한 후 줄을 바꿈
	}
	return 0;
	// 규칙) 각 반복문이 서로 독립적인 제어 변수를 사용해야 함.
}