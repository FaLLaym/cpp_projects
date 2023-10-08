#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int wigth = 91;

	string product1 = "Папка";
	string product2 = "Бумага";
	string product3 = "Калькулятор";
	string prodType1 = "К";
	string prodType2 = "К";
	string prodType3 = "О";
	float OnePiecePrice1 = 4.75;
	float OnePiecePrice2 = 13.90;
	float OnePiecePrice3 = 411.00;
	int minAmount1 = 4;
	int minAmount2 = 10;
	int minAmount3 = 1;

	string descr = "К – канцтовары, О - оргтехника";

	char tmpC1[64];
	char tmpC2[64];

	printf("Введите товар1  тип товара1  цена за 1шт мин. кол-во штук1\n");
	scanf_s("%s %s %f %d", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &OnePiecePrice1, &minAmount1);
	product1 = tmpC1;
	prodType1 = tmpC2;

	printf("Введите товар2  тип товара2  цена за 1шт мин. кол-во штук2\n");
	scanf_s("%s %s %f %d", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &OnePiecePrice2, &minAmount2);
	product2 = tmpC1;
	prodType2 = tmpC2;

	printf("Введите товар3  тип товара3  цена за 1шт мин. кол-во штук3\n");
	scanf_s("%s %s %f %d", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &OnePiecePrice3, &minAmount3);
	product3 = tmpC1;
	prodType3 = tmpC2;

	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("|Прайс-лист                                                                               |\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	//                   23              12              21                        35
	printf("|Наименование товара  |Тип товара |Цена за 1 шт (грн)  |Минимальное количество в партии   |");
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	//Строка 1
	printf("|%s", product1.c_str());
	for (int i = 0; i < 22 - product1.size() - 1; i++)
		printf(" ");
	printf("|%s", prodType1.c_str());
	for (int i = 0; i < 11 - prodType1.size(); i++)
		printf(" ");
	printf("|%.2f", OnePiecePrice1);
	for (int i = 0; i < 20 - 1 - 3; i++)
		printf(" ");
	printf("|%d", minAmount1);
	for (int i = 0; i < 34 - 1; i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	//Строка 2
	printf("|%s", product2.c_str());
	for (int i = 0; i < 22 - product2.size() - 1; i++)
		printf(" ");
	printf("|%s", prodType2.c_str());
	for (int i = 0; i < 11 - prodType2.size(); i++)
		printf(" ");
	printf("|%.2f", OnePiecePrice2);
	for (int i = 0; i < 20 - 1 - 4; i++)
		printf(" ");
	printf("|%d", minAmount2);
	for (int i = 0; i < 34 - 2; i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	//Строка 3
	printf("|%s", product3.c_str());
	for (int i = 0; i < 22 - product3.size() - 1; i++)
		printf(" ");
	printf("|%s", prodType3.c_str());
	for (int i = 0; i < 11 - prodType3.size(); i++)
		printf(" ");
	printf("|%.2f", OnePiecePrice3);
	for (int i = 0; i < 20 - 1 - 5; i++)
		printf(" ");
	printf("|%d", minAmount3);
	for (int i = 0; i < 34 - 1; i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	//descr     12
	printf("|Примечание: %s", descr.c_str());
	for (int i = 0; i < wigth - 14 - descr.size(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("\n");

}

