#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

bool Gameover = false;

int main()
{
	ShowBorder();

	// 플레이어가 시작할때 등장한다.
	// 플레이어를 경계선 안에 그리고 싶다.

	int playerX = 10;
	int playerY = 6;

	//SetCursorPos(playerX, playerY);
	//printf("□"); // 현재 커서위치에 ""문자를 출력한다.

	// 게임이 바로 종료되지 않도록 Loop를 만든다.
	// 반복적으로 실행되는 부분
	while (1)
	{
		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			printf("  "); // 이전 위치 그림을 지우는 코드
			// 화살표 입력 인식
			if (GetAsyncKeyState(VK_UP) & 0x8000)	// 상
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)	// 하
			{
				playerY += 1;
				if (playerY >= 19)
				{
					playerY = 18;
				}
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)	// 좌
			{
				playerX -= 2;
				if (playerX <= 0)
				{
					playerX = 2;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)// 우
			{
				playerX += 2;
				if (playerX >= 38)
				{
					playerX = 36;
				}
			}
			else
			{
				// x, y 그 자리 그대로
			}
		}

		//printf("현재 좌표 ( %d , %d )", playerX, playerY); // 테스트 코드
		
		setCursorPos(playerX, playerY);
		printf("□");

		Sleep(50);

		// 1. wait inputkey
		// 2. playerX, playerY 값을 변화시킨다.
		// 3. 해당 좌표로 커서 위치를 바꾸고 printf
		// 4. 
		//break;

		// 캐릭터가 특정 위치에 도달하면 Gameover true 종료가 되도록 만들어보세요

		if (playerX == 34 && playerY == 18)
		{
			Gameover = true;
		}

		if (Gameover)
		{
			break;
		}

	}

}