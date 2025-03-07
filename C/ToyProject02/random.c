#include "random.h"

void CreateRandomSeed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX() // 2 ~ 38
{
	// ¦���� �������� ��ȯ�ؾ� �Ѵ�.
	// 1. ������ ���ڸ� �̴´� - rand() A���� B����
	// 2. 1 ~ 20 x 2 (¦��)
	// �����ϱ� ��������� �����Ѵ�.
	// �� �ڵ� �߿� �� ȿ������ �ڵ带 ����Ѵ�.

	int randValue = rand() % 38 + 1; // 1 ~ 38

	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY() // 1 ~ 18
{
	int randValue = rand() % 18 + 1;
	return randValue;
}
