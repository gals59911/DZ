﻿#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;
	float fA, fB, fC;
	double eps = 0.000001;
	a = 0;
	b = 2;
	while (b - a > eps)
	{
		c = (a + b) / 2;
		fA = 0.25 * pow(a, 3) + a - 1.2502;
		fB = 0.25 * pow(b, 3) + b - 1.2502;
		fC = 0.25 * pow(c, 3) + c - 1.2502;
		if (fA * fC < 0) { b = c; }
		else if (fC * fB < 0) { a = c; }
		else { cout << "Что-то не то" << endl; }
	}
	cout << a << b << endl;
}