#include "record.h"
#define _CRT_SECURE_NO_WARNINGS

void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");
	// fputc
	//fputc('a', fp);
	//fputc('\n', fp);
	//fputc('a', fp);
	//fputc('a', fp);

	// fputs - ���ڿ��� �����Ѵ�.
	//fputs("a\naa", fp);

	// fprintf 
	fprintf(fp, "%d %d %s", 1, 100, "Alice");
	fclose(fp);
}

void FileSave(const char* fileName, Rank rank[], int count)
{
	FILE* fPtr = fopen(fileName, "w");

	for (int i = 0;i < count;i++)
	{
		fprintf(fPtr, "%d %d %s\n", rank[i].order, rank[i].length, rank[i].name);
	}

	fclose(fPtr);
}

void FileLoadTemp()
{
	FILE* fp2 = fopen("Rank.txt", "r");

	if (fp2 == NULL)
	{
		printf("���� ���� ����\n");
		return;
	}

	//char mstring[12];
	//fgets(mstring, 12, fp2);
	//printf("%s\n", mstring);

	int order = 0;
	int score = 0;
	char name[MAXLENGTH];

	fscanf(fp2, "%d %d %s", &order, &score, name);

	printf("���� : %d, ���� : %d, �̸� : %s\n", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;

	FILE* fPtr = fopen(fileName, "r");

	if (fPtr == NULL)
	{
		printf("���� ���� ����\n");
		return;
	}

	while (fscanf(fPtr, "%d %d %49s", &rank[count].order, &rank[count].length, &rank[count].name) != EOF) //������ ������ ���� �о���� �ڵ�
	{
		count++;
	}

	fclose(fPtr);

	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// countȽ����ŭ �ݺ��ϴ� �ڵ尡 �ʿ��ϴ�.
	//printf("%d, %d, %s\n", rank[0].order, rank[0].score, rank[0].name);
	//printf("%d, %d, %s\n", rank[1].order, rank[1].score, rank[1].name);

	// �׵θ��� �����.
	printf("+------+------+------------------+\n");
	printf("| ���� | ���� |       �̸�       |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0;i < count;i++)
	{
		printf("| %-4d | %-4d | %-16s |\n", rank[i].order, rank[i].length, rank[i].name);
	}

	// �׵θ��� �����.
	printf("+------+------+------------------+\n");

}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXPLAYER)
	{
		rank[*order].order = *order + 1;
		rank[*order].length = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1);
		rank[*order].name[MAXLENGTH - 1] = '\0';
		(*order)++;
	}
	else
	{
		printf("�ִ� �÷��̾� ������� �ʰ��Ͽ����ϴ�.\n");
	}
}

int LoadRanks(const char* fileName, Rank rank[])
{
	int count = 0;

	FILE* fptr = fopen(fileName, "r");

	if (fptr == NULL)
	{
		printf("���� ���� ����\n");
		return;
	}

	while (1) // ������ ������ ���� �о���� �ڵ� 
	{
		if (fscanf(fptr, "%d %d %s", &rank[count].order, &rank[count].length, rank[count].name) == EOF)
		{
			break;
		}

		count++;
	}
	fclose(fptr);

	return count;
}

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXPLAYER)
	{
		printf("���ο� �÷��̾��� �̸��� �Է��ϼ��� : \n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("������ �Է��ϼ��� : \n");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore);
	}
}

void DeleteRankData(Rank rank[], int* order, int count)
{
	if (count < 0)
	{
		printf("��ŷ�� �����Ͱ� ��ϵǾ� ���� �ʽ��ϴ�.\n");
		return;
	}
	if (count >= *order)
	{
		printf("�߸��� �ε����Դϴ�.\n");
		return;
	}

	for (int i = 0;i < *order - 1;i++)
	{
		rank[i] = rank[i + 1];
	}
	(*order)--;

}

int FindMaxIndex(Rank rank[], int size)
{
	int index = 0;
	// Rank������ �ȿ��� ������ ���� ū �ε����� ã�Ƽ� index������ �����ϰ� ��ȯ�Ѵ�.

	int maxValue = rank[0].length; // ó�� �����͸� �о������ ���� ū ���� �翬�� ù��° �����ʹ�.

	for (int i = 1; i < size; i++)
	{
		if (rank[i].length > maxValue)
		{
			maxValue = rank[i].length;
			index = i;
		}
	}
	return index;
}