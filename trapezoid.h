#pragma once

struct Trapezoid
{
	int footing1; //��������� 1
	int footing2; //��������� 2
	int height; //������
};

Trapezoid getTrapezoid(int a, int b, int c);
Trapezoid setTrapezoid(Trapezoid F4);
float areaTrapezoid(Trapezoid F4);
void printTrapezoid(Trapezoid F4);