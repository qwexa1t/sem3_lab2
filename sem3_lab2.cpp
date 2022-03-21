#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <cstring>
#include <windows.h>
#include <ctype.h>
#include "square.h"
#include "rectang.h"
#include "triangle.h"
#include "trapezoid.h"
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
			printf("\n Вы выбрали Прямоугольник \n");
			Rectang F2; //Создаем вторую фигуру
			printf("\n Пример \n");
			F2 = getRectang(2,4); // Инициализация прямоугольника
			printRectang(F2); //Вывод площади прямоугольника на экран
			printf("\n\n Введите данные: \n\n");
			F2 = setRectang(F2); //Установка значений
			printRectang(F2);
			break;
		case 3:
			printf("\n Вы выбрали Треугольник \n");
			Triangle F3; //Создаем третью фигуру
			printf("\n Пример \n");
			F3 = getTriangle(3, 5); // Инициализация тругольника
			printTriangle(F3); //Вывод площади треугольника на экран
			printf("\n\n Введите данные: \n\n");
			F3 = setTriangle(F3); //Установка значений
			printTriangle(F3);
			break;
		case 4:
			printf("\n Вы выбрали Трапецию \n");
			Trapezoid F4; //Создаем Четвертую фигуру
			printf("\n Пример \n");
			F4 = getTrapezoid(4, 2, 3); // Инициализация Трапеции
			printTrapezoid(F4); //Вывод площади Трапеции на экран
			printf("\n\n Введите данные: \n\n");
			F4 = setTrapezoid(F4); //Установка значений
			printTrapezoid(F4);
			break;
		case 5:
			
			break;
		
		}

	} while (N != 6);
}