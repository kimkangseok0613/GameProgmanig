#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>

#define WIDTH 60
#define HEIGHT 30
#define MAX_LENGTH 100

void Clear(void)
{
    system("cls");
}

typedef struct {
    int x, y;
} Position;

void SetConsoleSize(int _col, int _lines)
{
    char setText[100];
    sprintf_s(setText, 100, "mode con cols=%d lines=%d", _col, _lines);
    system(setText);
}

Position snake[MAX_LENGTH];
int length = 3;
int speed = 120;
char direction = 'D';
Position food;

void gotoxy(int x, int y) {
    COORD coord = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawBorder() {
    for (int i = 0; i <= WIDTH; i++) {
        gotoxy(i, 0);
        printf("■");
        gotoxy(i, HEIGHT);
        printf("■");
    }
    for (int i = 0; i <= HEIGHT; i++) {
        gotoxy(0, i);
        printf("■");
        gotoxy(WIDTH, i);
        printf("■");
    }
}

void spawnFood() {
    food.x = (rand() % (WIDTH - 3)) + 1;
    food.y = (rand() % (HEIGHT - 2)) + 1;
}

void moveSnake() {
    for (int i = length - 1; i > 0; i--) {
        snake[i] = snake[i - 1];
    }

    switch (direction) {
    case 'W': snake[0].y--; break;
    case 'S': snake[0].y++; break;
    case 'A': snake[0].x--; break;
    case 'D': snake[0].x++; break;
    }
}

int checkCollision() {
    if (snake[0].x == 0 || snake[0].x == WIDTH || snake[0].y == 0 || snake[0].y == HEIGHT)
        return 1;

    for (int i = 1; i < length; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y)
            return 1;
    }
    return 0;
}

void StartMenu(void)
{
    while (true)
    {
        //Clear();
        gotoxy(15, 9);
        printf("Snake Game");
        gotoxy(10, 20);
        printf("please press any key");
        Sleep(1000);

        if (_kbhit())
            break;
    }
}

void updateGame() {
    if (snake[0].x == food.x && snake[0].y == food.y) {
        length++;
        
        Speed();
        
        spawnFood();
    }
}
int  Speed()
{
    if (speed > 50)
    {
        speed -= 10;
    }

}

int RecordingScore()
{
    // 최고점수를 기록해서 게임중에 표시
}


void render() {
    system("cls");
    drawBorder();
    gotoxy(food.x, food.y);
    printf("☆");

    for (int i = 0; i < length; i++) {
        gotoxy(snake[i].x, snake[i].y);
        printf(i == 0 ? "X" : "O");
    }

    gotoxy(0, HEIGHT + 1);
    printf("Score: %d", length - 3);
    gotoxy(0, HEIGHT + 2);
    printf("현재 속도: %d", speed);
}