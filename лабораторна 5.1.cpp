// лабораторна 5.1.cpp 

// Lab_05.1.cpp 
// < Копейка Христина > 
// Лабораторна робота № 5.1 
// "Функції, що містять арифметичний вираз" 
// Варіант 8 

#include <iostream> 
#include <cmath> 
using namespace std;

using namespace std;
double g(const double a, const double b); // прототип 
int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = (g(s, t + 1) * (s, t + 1)) + (g(t, s + 1) * (t, s + 1)) / (1 + (g((s + t), (s * t)))) * (g((s + t), (s * t)));
	cout << "с = " << c << endl;
	return 0;
}

double g(const double a, const double b) // визначення 
{
	return ((sin(a * b)) / ((a * a) + (b * b)));
};