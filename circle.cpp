#define _CRT_SECURE_NO_WARNINGS
#include "circle.h"
#include <stdio.h>
#include<math.h>
#define PI 3.14

�ircle get�ircle(int a)
{
	�ircle F5;
	F5.radius = a;
	return F5;
}
�ircle set�ircle(�ircle F5)
{
	printf(" ������� ������:");
	scanf("%d", &F5.radius);
	return F5;
}
float area�ircle(�ircle F5)
{
	float area;
	area = PI * F5.radius * F5.radius;
	return area;
}
void print�ircle(�ircle F5)
{
	printf("\n ������ - %d", F5.radius);
	printf("\n ������� - %.2f\n", area�ircle(F5));
}


