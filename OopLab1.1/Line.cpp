#include "Line.h"
#include <iostream>
using namespace std;

bool Line::Init(double first, double second)
{
	SetSecond(second);
	if (first != 0)
	{
		SetFirst(first);
		return true;
	}
	else {
		return false;
	}
}

void Line::Read()
{
	double a, b;
	do {
		cout << "Input parameters" << endl;
		cout << "A: "; cin >> a;
		cout << "B: "; cin >> b;
	} while (!Init(a, b));
}

void Line::Display() const
{
	cout << endl;
	cout << "first: " << first;
	cout << "second: " << second;
}
