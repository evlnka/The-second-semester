#include "header.h"

int main() {
    int M; // Количество прямых
    printf("Введите количество прямых: ");
    if (scanf("%d", &M) != 1 || M <= 0) {
        printf("Ошибка: введите положительное целое число для количества прямых.\n");
        return 1;
    }

    // Создание массива структур Прямая
    struct Line lines[M];

    // Ввод коэффициентов уравнений прямых
    for (int i = 0; i < M; i++) {
        printf("Введите коэффициенты a и b для %d-ой прямой: ", i + 1);
        if (scanf("%f %f", &lines[i].a, &lines[i].b) != 2) {
            printf("Ошибка: введите два числа для коэффициентов a и b.\n");
            return 1;
        }
    }

    // Определение количества прямых, параллельных осям координат
    int k1 = countLinesOX(lines, M);
    int k2 = countLinesOY(lines, M);

    // Вывод результатов
    printf("Количество прямых, параллельных оси OX: %d\n", k1);
    printf("Количество прямых, параллельных оси OY: %d\n", k2);

    return 0;
}
