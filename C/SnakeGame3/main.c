#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define WIDTH 20
#define HEIGHT 10
#define MAX_LENGTH 100

typedef struct {
    int x, y;
} Position;

Position snake[MAX_LENGTH];
int length = 1;
int score = 0;
Position food;
Position specialFood;
int foodCount = 0;
int hasSpecialFood = 0;

void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setup() {
    length = 1;
    snake[0].x = WIDTH / 2;
    snake[0].y = HEIGHT / 2;
    score = 0;
    foodCount = 0;
    hasSpecialFood = 0;
    food.x = rand() % WIDTH;
    food.y = rand() % HEIGHT;
}

void draw() {
    system("cls");

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    for (int y = 0; y < HEIGHT; y++) {
        printf("#");
        for (int x = 0; x < WIDTH; x++) {
            int isSnake = 0;
            for (int i = 0; i < length; i++) {
                if (snake[i].x == x && snake[i].y == y) {
                    printf("O");
                    isSnake = 1;
                    break;
                }
            }
            if (!isSnake) {
                if (x == food.x && y == food.y)
                    printf("F");
                else if (hasSpecialFood && x == specialFood.x && y == specialFood.y)
                    printf("S");
                else
                    printf(" ");
            }
        }
        printf("#\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    printf("Score: %d\n", score);
}

void input(char* dir) {
    if (_kbhit()) {
        char key = _getch();
        if (key == 'w' && *dir != 's') *dir = 'w';
        if (key == 's' && *dir != 'w') *dir = 's';
        if (key == 'a' && *dir != 'd') *dir = 'a';
        if (key == 'd' && *dir != 'a') *dir = 'd';
    }
}

void logic(char dir) {
    Position prev = snake[0], temp;

    if (dir == 'w') snake[0].y--;
    if (dir == 's') snake[0].y++;
    if (dir == 'a') snake[0].x--;
    if (dir == 'd') snake[0].x++;

    for (int i = 1; i < length; i++) {
        temp = snake[i];
        snake[i] = prev;
        prev = temp;
    }

    if (snake[0].x == food.x && snake[0].y == food.y) {
        score += 10;
        food.x = rand() % WIDTH;
        food.y = rand() % HEIGHT;
        length++;
        foodCount++;

        if (foodCount % 5 == 0) {
            specialFood.x = rand() % WIDTH;
            specialFood.y = rand() % HEIGHT;
            hasSpecialFood = 1;
        }
    }

    if (hasSpecialFood && snake[0].x == specialFood.x && snake[0].y == specialFood.y) {
        score += 50;
        hasSpecialFood = 0;
    }

    if (snake[0].x < 0 || snake[0].x >= WIDTH || snake[0].y < 0 || snake[0].y >= HEIGHT) {
        printf("Game Over!\n");
        exit(0);
    }

    for (int i = 1; i < length; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
            printf("Game Over!\n");
            exit(0);
        }
    }
}

int main() {
    srand(time(0));
    char dir = 'd';
    setup();

    while (1) {
        draw();
        input(&dir);
        logic(dir);
        Sleep(100);
    }
    return 0;
}
