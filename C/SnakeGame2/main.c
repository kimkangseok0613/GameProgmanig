#include "main.h"
int main() {
    SetConsoleSize(100, 50);
    StartMenu();

    srand((unsigned)time(NULL));

    snake[0] = (Position){ WIDTH / 2, HEIGHT / 2 };
    snake[1] = (Position){ WIDTH / 2 - 1, HEIGHT / 2 };
    snake[2] = (Position){ WIDTH / 2 - 2, HEIGHT / 2 };

    spawnFood();

    while (1) {
        if (_kbhit()) {
            char key = _getch();
            if ((key == 'W' || key == 'w') && direction != 'S') direction = 'W';
            if ((key == 'S' || key == 's') && direction != 'W') direction = 'S';
            if ((key == 'A' || key == 'a') && direction != 'D') direction = 'A';
            if ((key == 'D' || key == 'd') && direction != 'A') direction = 'D';
        }

        moveSnake();
        if (checkCollision()) {
            gotoxy(WIDTH / 3, HEIGHT / 2);
            printf("Game Over! Final Score: %d\n", length - 3);
            break;
        }
        updateGame();
        render();
        Sleep(speed);
    }

    return 0;
}
