#include "Currency.h"

bool CanUpgrade(int cost)
{
	if (cost < currentMoney)
	{
		currentMoney -= cost;
		printf("���� ������ : %d\n", currentMoney);
		return true;
	}
	else
	{
		printf("Game Over! ��� ���� ����߽��ϴ�.\n");
		isFail = true;
	}
}
