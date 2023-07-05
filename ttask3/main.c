#include <stdio.h>
#include <math.h> // Ця бібліотека потрібна тут для використання функції 'pow()', яка дозволяє обчислювати степінь числа
#include <locale.h> // Ця бібліотека тут для підключення української мови

int main() {
    // Наступні команди теж потрібні для коректного відображення української мови
setlocale(LC_ALL, "");
system("chcp 1251");
system("cls");
    int p;
    printf("Введіть кількість розрядів p: ");
    scanf("%d", &p);

    // Обчислення кількості чисел з p розрядів
    int totalNumbers = pow(2, p);

    // Обчислення кількості чисел, де три однакові цифри не стоять поруч
    int excludedNumbers = totalNumbers - (p - 2);

    printf("Кількість чисел: %d\n", excludedNumbers);

    return 0;
}
