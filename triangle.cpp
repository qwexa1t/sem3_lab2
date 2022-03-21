#define _CRT_SECURE_NO_WARNINGS
#include "triangle.h"
#include <stdio.h>
#include<math.h>

Triangle getTriangle(int a, int b)
{
	Triangle F3;
	F3.footing = a;
	F3.height = b;
	return F3;
}
Triangle setTriangle(Triangle F3)
{
	printf(" Введите Основание:");
	scanf("%d", &F3.footing);
	printf(" Введите Высоту:");
	scanf("%d", &F3.height);
	return F3;
}
float areaTriangle(Triangle F3)
{
	float area;
	area = 0.5 * F3.footing * F3.height;
	return area;
}
void printTriangle(Triangle F3)
{
	printf("\n Основание - %d", F3.footing);
	printf("\n Высота - %d", F3.height);
	printf("\n Площадь - %.2f\n", areaTriangle(F3));
}
