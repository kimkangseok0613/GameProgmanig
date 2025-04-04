#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RANKFILEPATH "Rank.txt"
#define MAXPLAYER 10
#define MAXLENGTH 50

typedef struct {
	int order;
	int length;
	char name[50];
}Rank;

void FileSaveTemp();

void FileSave(const char* fileName, Rank rank[], int count);

void FileLoadTemp();

int LoadRank(const char* fileName, Rank rank[]); // �޸��忡 ����� count�� �ҷ����� �Լ�

void PrintRanking(Rank rank[], int count); // count�� ��ŭ ��ŷ�� ����ϴ� �Լ�

void AddRank(Rank rank[], int* order, const char* name, int  score);

void AddRankData(Rank rank[], int* order);

void DeleteRankData(Rank rank[], int* order, int count);

int FindMaxIndex(Rank rank[], int size);
