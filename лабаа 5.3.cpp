// лабаа 5.3.cpp 

#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	double rg = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = s(sqrt(r + 1) - pow(s(sqrt(r - 1) + 1), 2));
		cout << r << " " << z << endl;
		r += rg;
	}
	return 0;
}
double s(const double x, const double k);
{
	if (abs(x) >= 1)
		return (1 + (x * x)) + (sqrt(abs(sin(x)))) / pow(sin * sin) * 2 * (x * x) + 1;);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (x * i) / (i * i) + (x * k) / (k * k);
			a *= R;
			S += a;
		} while (i < 5);
		return S;
	}

}
	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

double s(const double x, const double k)
{
	return 0.0;
}
