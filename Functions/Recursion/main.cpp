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
int Fib(int n)
{
	//return Fib(n - 1) + Fib(n - 2);
	if (n < 1) return 0;
	if (n == 1) return 1;
	static int a = 0;
	static int buff = 1;
	std::cout << a << "\t";
	a = a + buff;
	buff = a - buff;
	return Fib(n - 1);
}
void Fib_2(int n, int a = 0, int b = 1);

//#define FACTORIAL
//#define POWER
#define FIB_2
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
#ifdef FIB_2
	std::cout << "До какого числа выводить ряд : "; std::cin >> n;
	Fib_2(n);

#endif // Fib_2
	//std::cout << "До какого числа выводить ряд : "; std::cin >> n;
//	std::cout << endl << Fib(n);
	/*
	cout << "Введите количество выводимых чисел : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << Fib(i) << "\t";
}
	cout << endl;

	cout << "Выберете число из уже выведенного ряда: "; cin >> n;
	for (int i = 0; i < n*n; i++)
	{
		cout << Fib(i) << "\t";
		if (Fib(i) == n) break;
	}
	*/

}
void Fib_2(int n, int a, int b)
{
	if (a > n)
	{
		cout << endl;
		return;
	}
	std::cout << a << "\t";
	return Fib_2(n, b, a + b);
}