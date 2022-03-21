#define _CRT_SECURE_NO_WARNINGS
#include "circle.h"
#include <stdio.h>
#include<math.h>
#define PI 3.14

Ñircle getÑircle(int a)
{
	Ñircle F5;
	F5.radius = a;
	return F5;
}
Ñircle setÑircle(Ñircle F5)
{
	printf(" Ââåäèòå Ğàäèóñ:");
	scanf("%d", &F5.radius);
	return F5;
}
float areaÑircle(Ñircle F5)
{
	float area;
	area = PI * F5.radius * F5.radius;
	return area;
}
void printÑircle(Ñircle F5)
{
	printf("\n Ğàäèóñ - %d", F5.radius);
	printf("\n Ïëîùàäü - %.2f\n", areaÑircle(F5));
}


