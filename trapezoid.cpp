#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid getTrapezoid(int a, int b, int c)
{
	Trapezoid F4;
	F4.footing1 = a;
	F4.footing2 = b;
	F4.height = c;
	return F4;
}
Trapezoid setTrapezoid(Trapezoid F4)
{
	printf(" ������� ������ ���������:");
	scanf("%d", &F4.footing1);
	printf(" ������� ������� ���������:");
	scanf("%d", &F4.footing2);
	printf(" ������� ������:");
	scanf("%d", &F4.height);
	return F4;
}
float areaTrapezoid(Trapezoid F4)
{
	float area;
	area = 0.5 *( F4.footing1 + F4.footing2) * F4.height;
	return area;
}
void printTrapezoid(Trapezoid F4)
{
	printf("\n  ������ ��������� - %d", F4.footing1);
	printf("\n  ������� ��������� - %d", F4.footing2);
	printf("\n  ������ - %d", F4.height);
	printf("\n ������� - %.2f\n", areaTrapezoid(F4));
}

