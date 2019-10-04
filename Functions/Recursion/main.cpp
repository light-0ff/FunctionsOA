#include<iostream>
using namespace std;
/*
int Factorial(int n)
{
	if (n > 1)
		return n * Factorial(n - 1);
	else
		return 1;
}
*/
int factorial(int n)
{
	if (n == 0)	return 1;
	return n * factorial(n-1);
	/*
	int f = n * Factorial(n-1)
	return f;
	*/
}
double power(double a, int n)
{
	/*
	if (n == 0)	return 1;
	if (n > 0)return a * power(a, n - 1);
	else return 1 / a*power(a, n + 1);
	*/
	return n == 0 ? 1 : (n > 0) ? (a*power(a, n - 1)) : 1/a * power(a, n + 1);
}
void fibonachi(int n)
{
	static int a = 0;
	static int fibonachi = 1;
	if (n == 1)
	{
		cout << "0";
	break;
	}
	if (n == 2) cout << "1";
	else {
		fibonachi += a;
		cout << fibonachi;
	}
	a++;
}
//#define FACTORIAL
//#define POWER
void main()
{
	int n;
	setlocale(LC_ALL, "");
#ifdef FACTORIAL
	cout << "== Факториал ==" << endl;
	cout << "Введите число: "; cin >> n;
	cout << n << "! = " << factorial(n) << endl;
#endif // FACTORIAL
#ifdef POWER
	int stepen;
	cout << "== Возведение в степень ==" << endl;
	cout << "Введите число: "; cin >> n;
	cout << "Введите степень: "; cin >> stepen;
	cout << n << " ^ " << stepen << " = " << power(n, stepen);
#endif // POWER
	cout << "== Ряд Фибоначчи ==" << endl;
	cout << "Введите число: "; cin >> n;
	fibonachi(n);
}