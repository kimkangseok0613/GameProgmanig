#include "Random.h"
#pragma once

// 1~100 의 정수를 반환
int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 100 + clock());

	return (rand() % 100) + 1;
}

bool CheckRandomFunc(int percent) // 70
{
	int randValue = ReturnRandomValue(); // 1~100 랜덤으로 반환

	if (randValue <= percent)
	{
		printf("성공하였습니다 : %d\n", randValue);
		return true;
	}
	else
	{
		printf("실패하였습니다 : %d\n", randValue);
		return false;
	}
}
