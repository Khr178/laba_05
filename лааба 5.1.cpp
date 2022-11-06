// Lab.5_1
// Варіант 8
#include <iostream>
#include <cmath>

using namespace std;
double g(const double a, const double b); // прототип
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = (g((s * s), t + 1))) + (g((t * t), s + 1))) / (1 + (g * g)) * ((s + t, (s * t)));
	cout << "с = " << c << endl;
	return 0;
}

double g(const double a, const double b); // визначення

{
	return ((sin(a * b)) / ((a * a) + (b * b)));
}

