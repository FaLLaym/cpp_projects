#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char n;

    printf("¬ведите любой символ: ");
    scanf_s("%c", &n);

    switch (n) {
    case '1': case '2': case '3': {printf("2"); break; }
    case '4': {printf("3"); break; }
    case '5': {printf("4"); break; }
    default: {printf("1"); break; }
    }

    double x, y, z;

    printf("\n¬ведите значени€ x, y, z: "); // -0,02235 2,23 15,221
    scanf_s("%lf %lf %lf", &x, &y, &z);

    double res_p1 = abs(x - y);
    double res_p2 = x + y;
    double res_p3 = atan(x) + atan(z);
    double res_p4 = pow(x, 6);
    double res_p5 = pow(log(y), 2);
    double res_p6 = pow(res_p1, res_p2);

    double res_1 = exp(res_p1) * res_p6;
    double res_2 = res_p3;

    double res1 = res_1 / res_2;
    double res2 = pow(res_2, 1 / 3);

    double res = res1 + res2;

    printf("–езультат вычислений: %lf", res);

    return 0;
}