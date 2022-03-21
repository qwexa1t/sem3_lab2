#pragma once

struct Trapezoid
{
	int footing1; //основание 1
	int footing2; //основание 2
	int height; //Высота
};

Trapezoid getTrapezoid(int a, int b, int c);
Trapezoid setTrapezoid(Trapezoid F4);
float areaTrapezoid(Trapezoid F4);
void printTrapezoid(Trapezoid F4);