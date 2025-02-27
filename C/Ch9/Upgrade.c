#include "Upgrade.h"

int weaponLV = 0;
int normalLv = 1;
int advancedLV = 0;

int baseAttackPower = 10;
int currentAttackPower = 0;

void ShowUpgradeMenu()
{
	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAttackPower);
	while (true)
	{
		printf("\n");
		printf("1.강화한다.\n");
		printf("2.고급 제련소 이용\n");
		printf("3.취소한다.\n");
		printf("\n");

		int inputNumber = 0;

		scanf_s("%d", &inputNumber);
		printf("\n");

		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			WeaponUpgrade();
		}
		else if (inputNumber == 2)
		{
			AdvancedWeaponUpgrade();
		}
		else if (inputNumber == 3)
		{
			printf("강화를 취소했습니다.\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");
		}
	}
}

void WeaponUpgrade()
{
	int weight = 5;

	weaponLV = normalLv + advancedLV + 1;
	currentAttackPower = currentAttackPower+ baseAttackPower + weaponLV * weight;

	weaponLV = normalLv + advancedLV;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAttackPower);
}

void AdvancedWeaponUpgrade()
{
	int weight =20;

	weaponLV = weaponLV + advancedLV + 1;
	currentAttackPower = currentAttackPower + baseAttackPower + weaponLV * weight;

	weaponLV = normalLv + advancedLV;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAttackPower);
}
