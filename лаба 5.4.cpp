// лаба 5.4.cpp 

#include <iostream>
#include <cmath>
using namespace std;
double P0(const int K, const int N)
{
	double p = 0;
	for (int i = K; i <= N; i++)
		p += (K / i + i / N);
	return p;
}
double P1(const int K, const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return (K / i + i / N) + P1(K, N, i + 1);
}
double P2(const int K, const int N, const int i)
{
	if (i < K)
		return 0;
	else
		return (K / i + i / N) + P2(K, N, i - 1);
}
double P3(const int K, const int N, const int i, double t)
{
	t = t + (K / i + i / N);
	if (i >= N)
		return t;
	else
		return P3(K, N, i + 1, t);
}
double P4(const int K, const int N, const int i, double t)
{
	t = t + (K / i + i / N);
	if (i <= K)
		return t;
	else
		return P4(K, N, i - 1, t);
}
int main()
{
	int K, N;
	cout << "K = "; cin >> K;
	cout << "N = "; cin >> N;

	cout << "(iter) P0 = " << P0(K, N) << endl;
	cout << "(rec up ++) P1 = " << P1(K, N, K) << endl;
	cout << "(rec up --) P2 = " << P2(K, N, N) << endl;
	cout << "(rec down ++) P3 = " << P3(K, N, K, 0) << endl;
	cout << "(rec down --) P4 = " << P4(K, N, N, 0) << endl;

	return 0;
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
