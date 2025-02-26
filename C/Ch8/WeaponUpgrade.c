#pragma once
#include "WeaponUpgrade.h"
#include "menu.h"

int weaponLV = 0;
int baseAttackPower = 10;
int weight = 5;
int currentAttackPower = 0;

void Upgrade()
{
	while (true)
	{
		int inputNumber = -1;
		scanf_s("%d", &inputNumber);	//'\n'
		while (getchar() != '\n');		// charactor 입력 버퍼

		if (inputNumber == 1)
		{
			printf("\n");
			printf("강화를 진행합니다.\n");

			// 현재 공격력
			// 무기의 레벨
			// 무기의 기본 공격력
			// 가중치

			// 강화를 무조건 성공하는 case

			weaponLV = weaponLV + 1;// 무기의 레벨을 1 상승시킵니다.
			currentAttackPower = baseAttackPower + weaponLV * weight;// 현재 공격력 = 기본 공격력 + 레벨 * 가중치
			printf("현재 무기의 현재 공격력 : %d\n현재 무기의 현재 레벨 : %d\n", currentAttackPower, weaponLV);// printf(현재 공격력, 레벨)
		}
		else if (inputNumber == 2)
		{
			printf("강화를 취소합니다.\n");
		}
		else if (inputNumber == 3)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");
		}
	}
}
