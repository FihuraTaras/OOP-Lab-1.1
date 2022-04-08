#pragma once
//#include <iostream>
//using namespace std;

class Line
{
private:
	double first;
	double second;
public:
	double GetFirst() { return first; }
	double GetSecond() { return second; }

	void SetFirst(double value) { first = value; }
	void SetSecond(double value) { second = value; }

	double function(double x) { return first * x + second; }

	bool Init(double first, double second);
	void Display() const;
	void Read();

	/*void Init(double first, double second)
	{
		this->first = first;
		this->second = second;
		Display(this);
	}*/
};

//void Display(Line* line) 
//{
//	cout << line->GetFirst() << " " << line->GetSecond();
//}

