﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <cstring>
#include <windows.h>
#include <ctype.h>
#include "square.h"
#define PI 3.14

int main()
{
	setlocale(LC_ALL, "Russian");
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;

	do
	{
		printf("\n Программа для вычисления площади различных фигур");
		printf("\n Выберите фигуру: ");
		printf("\n 1) Квадрат");
		printf("\n 2) Прямоугольник");
		printf("\n 3) Треугольник");
		printf("\n 4) Трапеция");
		printf("\n 5) Круг");
		printf("\n 6) Завершить программу");
		printf("\n\n Введите номер фигуры: ");
		while (scanf("%d", &N) != 1 || N <= 0 || N > 6)
		{
			while (getchar() != '\n');
			printf("\n Вы ввели Неверный номер. Повторите попытку.\n");
			printf("\n Введите номер фигуры: ");
		}
		switch (N)
		{
		case 1:
			printf("\n Вы выбрали квадрат \n");
			Square F1; //Создаем первую фигуру
			printf("\n Пример \n");
			F1 = getSquare(2); // Инициализация квадрата
			printSquare(F1); //Вывод площади квадрата на экран
			printf("\n\n Введите данные: \n\n"); 
			F1 = setSquare(F1); //Установка значений
			printSquare(F1);
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		
		}

	} while (N != 6);
}