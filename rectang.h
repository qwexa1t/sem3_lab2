#pragma once

struct Rectang
{
	int length; //длина
	int width; //ширина
};

Rectang getRectang(int a, int b);
Rectang setRectang(Rectang F2);
int areaRectang(Rectang F2);
void printRectang(Rectang F2);