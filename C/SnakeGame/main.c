#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"

void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = false;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

bool Gameover = false;
int CurrentScore = 0;
int PlayTime = 0;
int RandomX = 34;
int RandomY = 18;

int QuestItemPosX = 26;
int QuestItemPosY = 11;
bool isQuest = false;

bool isCrash = false;

int main()
{
	SetConsoleSize(100, 50);

	ShowBorder();
	CreateRandomSeed();
	setCursorPos(RandomX, RandomY);
	printf("��");
	//setCursorPos(QuestItemPosX, QuestItemPosY);
	//printf("��");


	// �÷��̾ �����Ҷ� �����Ѵ�.
	// �÷��̾ ��輱 �ȿ� �׸��� �ʹ�.

	int playerX = 10;
	int playerY = 6;

	//SetCursorPos(playerX, playerY);
	//printf("��"); // ���� Ŀ����ġ�� ""���ڸ� ����Ѵ�.
	setCursorVisible(false);

	// ������ �ٷ� ������� �ʵ��� Loop�� �����.
	// �ݺ������� ����Ǵ� �κ�
	while (1)
	{
		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			printf("  "); // ���� ��ġ �׸��� ����� �ڵ�
			// ȭ��ǥ �Է� �ν�
			if (GetAsyncKeyState(VK_UP) & 0x8000)	// ��
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 0;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)	// ��
			{
				playerY += 1;
				if (playerY >= 42)
				{
					playerY = 41;
				}
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)	// ��
			{
				playerX -= 2;
				if (playerX <= 0)
				{
					playerX = 2;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)// ��
			{
				playerX += 2;
				if (playerX >= 39)
				{
					playerX = 38;
				}
			}
			else
			{
				// x, y �� �ڸ� �״��
			}
		}

		//printf("���� ��ǥ ( %d , %d )", playerX, playerY); // �׽�Ʈ �ڵ�

		setCursorPos(playerX, playerY); // �÷��̾� ǥ�� �ڵ�
		printf("��"); // �� �Ӹ�



		// UI �ڵ�
		setCursorPos(0, 41);
		printf("score");
		setCursorPos(0, 42);
		printf("���� ���� : %d", CurrentScore);

		// �ð��� �����ϴ� �ڵ�
		PlayTime++;

		//int hour = PlayTime * 360;
		int minute = PlayTime / 60;
		int second = PlayTime % 60;

		//if (isQuest)
		//{
		//	setCursorPos(60, 3);
		//	printf("����Ʈ�� Ȱ��ȭ�Ǿ����ϴ�.");
		//}

		Sleep(50);


		// 1. wait inputkey
		// 2. playerX, playerY ���� ��ȭ��Ų��.
		// 3. �ش� ��ǥ�� Ŀ�� ��ġ�� �ٲٰ� printf

		// ĳ���Ͱ� Ư�� ��ġ�� �����ϸ� Gameover true ���ᰡ �ǵ��� ��������

		if (playerX == RandomX && playerY == RandomY) // �����۰� �÷��̾��� ��ġ�� ���� ��Ȳ
		{
			// 1. ������ ������.
			CurrentScore++;
			// 2. �������� ��ġ�� �ٲ��. ��ǥ�� �ٲ۴�.
			RandomX = ReturnPosX();
			RandomY = ReturnPosY();
			setCursorPos(RandomX, RandomY);
			printf("��");
		}

		if (playerX == 0 && playerY == 40)
		{
			isCrash = true;
		}

		if (isCrash)
		{
			break;
		}

		//if (playerX == QuestItemPosX && playerY == QuestItemPosY)
		//{
		//	isQuest = true;
		//}

		if (CurrentScore == 2)
		{
			setCursorPos(0, 44);
			printf("������ �����մϴ�.");
			break;
		}

	}

}