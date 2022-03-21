#pragma once

struct Triangle
{
	int footing; //основание
	int height; //Высота
};

Triangle getTriangle(int a, int b);
Triangle setTriangle(Triangle F3);
float areaTriangle(Triangle F3);
void printTriangle(Triangle F3);