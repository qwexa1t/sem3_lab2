#define _CRT_SECURE_NO_WARNINGS
#include "square.h"
#include <stdio.h>
#include<math.h>

Square getSquare(int a) 
{
	Square F1;
	F1.storona = a;
	return F1;
}
Square setSquare(Square F1)
{
	printf(" Введите сторону:");
	scanf("%d", &F1.storona);
	return F1;
}
int areaSquare(Square F1) 
{
	int area;
	area = F1.storona* F1.storona;
	return area;
}
void printSquare(Square F1) 
{
	printf("\n Сторона - %d", F1.storona);
	printf("\n Площадь - %d\n", areaSquare(F1));
}
