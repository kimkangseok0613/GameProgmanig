#pragma once

// money System header ����
// Upgrade System header ����

#include <stdio.h>   // ����� �Լ��� �����ϴ� ���
#include <stdbool.h> // bool type �߰�
#include <conio.h>   // _getch() �Է� ���� ���� ����� �Լ��� �����ϴ� ���
#include <Windows.h> // system("cls") ������ �ܼ� �Լ� ���ԵǾ� �ִ� ���
#include <stdlib.h>  // rand() ����ϱ� ���� ���
#include <time.h>    // time() ����ϱ� ���� ���
#include "Random.h"	 // ���׷��̵� ���� ��ȭ�� ���� ����� ���� ���
#include "Currency.h"// �ڽ�Ʈ �Լ� ����� ���� ����� ���� ���

void ShowMenu();   // 1. ��ȭ�ϴ�. 2. ���¸� �����ش�.

// ShowMenu�� ���� ���� �Լ�

void Upgrade();
void ShowStatus();

// ������ ���� ����
// ��ǥ�� �޼��ߴ°�?  - success	 ����

bool IsGameClear(); // ������ ����

// �������� ���� ����ߴ°�? - fail ����

// ���� ����

// extern ���� ������ ��𰣿� �����Ѵ�.
// Play.c ���� ������ ����.

extern int CurrentLevel;
extern int TargetLevel;
extern bool isClear;
extern bool isFail;