#include <stdio.h>

int main() {
    int A[] = {3, 7, -2, 8, 5, 9, 1, 4, -6, 10}; 
    int n = sizeof(A) / sizeof(A[0]); // Получение количества элементов в массиве A
    int s = 0; // Переменная для хранения суммы положительных элементов
    int i;

    for (s = 0, i = 0; i < n && A[i] > 0; i++) {
        s = s + A[i];
    }

    printf("Сумма положительных элементов в массиве A: %d\n", s);

    return 0;
}