/*19.Создайте структуру Прямая с элементами a, b – коэффициенты уравнения
y=ax+b. Для M заданных прямых определить k1 – количество прямых,
параллельных оси ОХ, и k2 – количество прямых, параллельных оси ОY.*/

#include <stdio.h>

// Определение структуры Прямая
struct Line {
    float a; // Коэффициент a
    float b; // Коэффициент b
};

// Функция для определения количества прямых, параллельных оси ОХ
// Если в уравнении a = 0, то прямая паралельна оси x
int countLinesOX(struct Line lines[], int M) {
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (lines[i].a == 0) {
            count++;
        }
    }
    return count;
}

// Функция для определения количества прямых, параллельных оси ОY
// Если в уравнении a не равно 0 и b = 0, то прямая паралельна оси y
int countLinesOY(struct Line lines[], int M) {
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (lines[i].a != 0 && lines[i].b == 0) {
            count++;
        }
    }
    return count;
}

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