#define _CRT_SECURE_NO_WARNINGS
#include "rectang.h"
#include <stdio.h>
#include<math.h>

Rectang getRectang(int a, int b)
{
	Rectang F2;
	F2.length = a;
	F2.width = b;
	return F2;
}
Rectang setRectang(Rectang F2)
{
	printf(" ¬ведите длину:");
	scanf("%d", &F2.length);
	printf(" ¬ведите ширину:");
	scanf("%d", &F2.width);
	return F2;
}
int areaRectang(Rectang F2)
{
	int area;
	area = F2.length * F2.width;
	return area;
}
void printRectang(Rectang F2)
{
	printf("\n ƒлина - %d", F2.length);
	printf("\n Ўирина - %d", F2.width);
	printf("\n ѕлощадь - %d\n", areaRectang(F2));
}
