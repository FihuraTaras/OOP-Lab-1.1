// OopLab1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Line.h"

using namespace std;

int main()
{
    Line line;
    line.Read();
    cout << "Result is " << line.function(2) << endl;
    line.Display();
}

// // //