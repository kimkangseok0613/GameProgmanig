#include "Play.h"

// 강화 게임에 필요한 전역 변수들
// 게임 목표
int CurrentLevel = 8;
int TargetLevel = 10;
bool isClear = false;

// 방해 요인 - 재화
int currentMoney = 10000;
int UpgradeCost = 500;
bool isFail = false;

void ShowTitle()
{
	printf("게임이 실행중입니다...........\n");
	printf("====================================================\n");
	printf("====================================================\n");
	printf("====================================================\n");

	printf("           무기 강화하기         \n\n");
}

void ShowManual()
{
	// 1. 조작 방법
	printf("조작 방법\n");
	printf("키보드 입력 및 엔터키를 눌러서 선택한다.\n");
	printf("입력 조건 이외의 키를 입력할 시에 재선택을 해야합니다. \n\n");
	// 2. 게임 목표
	printf("게임 목표\n");
	printf("무기 10강 만들기\n\n");
	// 3. 방해 요소
	printf("게임 플레이 요소\n");
	printf("1. 제한된 소지금으로 목표를 달성해야 합니다.\n");
	printf("2. 특정 무기레벨에서 강화 하강이 존재합니다.\n");
	printf("3. 특정 레벨에서 무기가 파괴됩니다.\n\n");
}

void GameLogic()  // EnforceWeapon.h
{
	while (1)
	{
		// 메뉴 선택 화면
		ShowMenu();

		// 게임을 클리어 했거나 게임오버인 경우

		if (isClear || isFail)
		{
			break;
		}
	}

	if (isClear)
	{
		// 게임을 클리어했습니다.
		printf("Game Clear!\n");
	}

	if (isFail)
	{
		// 게임오버가 되었습니다.
		printf("Game Over!\n");
	}

}

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();
}