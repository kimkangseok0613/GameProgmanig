#include "Random.h"
#pragma once

// 1~100 �� ������ ��ȯ
int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 100 + clock());

	return (rand() % 100) + 1;
}

bool CheckRandomFunc(int percent) // 70
{
	int randValue = ReturnRandomValue(); // 1~100 �������� ��ȯ

	if (randValue <= percent)
	{
		printf("�����Ͽ����ϴ� : %d\n", randValue);
		return true;
	}
	else
	{
		printf("�����Ͽ����ϴ� : %d\n", randValue);
		return false;
	}
}
