#include "Currency.h"

bool CanUpgrade(int cost)
{
	if (cost < currentMoney)
	{
		currentMoney -= cost;
		printf("현재 소지금 : %d\n", currentMoney);
		return true;
	}
	else
	{
		printf("Game Over! 모든 돈을 사용했습니다.\n");
		isFail = true;
	}
}
