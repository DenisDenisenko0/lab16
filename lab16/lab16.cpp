#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // Бібліотека вводу/виводу
#include <Windows.h> // Бібліотека для української локалізації в консольному рядку
#include <time.h> // Бібліотека для rand()
#define SIZE 99

int main() {
    SetConsoleOutputCP(1251); // Встановлення української локалізації
    SetConsoleCP(1251); // Встановлення української локалізації

    // Ввід користувачем розмірності матриці
    printf("Введіть розмір масиву (M x N): ");
    int N, M;
    scanf("%d %d", &M, &N);

    // Оголошення матриці з максимальною розмірністю 99 на 99
    int numbers [SIZE][SIZE];

    int value = 1; // Оголошення "лічильника" елементів матриці

    for (int i = 0; i < M; i++) {
        // Якщо рядок парний заповнюємо зліва направо
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                numbers[i][j] = value++;
            }
        }
        // Якщо рядок непарний заповнюємо справа наліво
        else {
            for (int j = N - 1; j >= 0; j--) {
                numbers[i][j] = value++;
            }
        }
    }

    // Виведення матриці у консоль
    printf("Заповнена змійкою матриця: \n");
    printf("\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("[%0.2d]", numbers[i][j]);
        }
        printf("\n");
    }

    return 0; // Закінчення програми
}