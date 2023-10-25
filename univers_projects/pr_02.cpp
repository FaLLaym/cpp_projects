#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x = 1.825 * (pow(10, 2));
    double y = 18.225;
    double z = -3.298 * (pow(10, -2));

    double tmpRes_0 = y / x;
    double tmpRes_1 = pow(x, tmpRes_0);
    double tmpRes_2 = pow(tmpRes_0, 1 / 3);
    double tmpRes_3 = y - x;
    double tmpRes_4 = cos(y);
    double tmpRes_5 = z / tmpRes_3;
    double tmpRes_6 = 1 + pow(tmpRes_3, 2);

    double res1 = abs(tmpRes_1 - tmpRes_2);
    double res2 = (tmpRes_4 - tmpRes_5);
    double res3 = (tmpRes_3 * res2) / tmpRes_6;

    double finalResult = res1 + res3;
    printf("The answer is: %lf", finalResult);
    return 0;
}