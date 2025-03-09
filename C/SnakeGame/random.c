#include "random.h"

void CreateRandomSeed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX() // 2 ~ 38
{
	// 짝수인 랜덤값을 반환해야 한다.
	// 1. 랜덤한 숫자를 뽑는다 - rand() A범위 B범위
	// 2. 1 ~ 20 x 2 (짝수)
	// 구현하기 쉬운것으로 구현한다.
	// 두 코드 중에 더 효율적인 코드를 사용한다.

	int randValue = rand() % 38 + 1; // 1 ~ 38

	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY() // 1 ~ 18
{
	int randValue = rand() % 18 + 1;
	return randValue;
}
