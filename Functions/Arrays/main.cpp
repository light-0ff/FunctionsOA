#include "prototype.h"
// все шаблоны(Т) нужно обявлять
#include "FillRand.cpp"
#include "Print.cpp"
#include "Sort.cpp"
#include "Stat.cpp"

// шаблонны(Т) + разделение по файлам
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];
	cout << "== int ==" << endl;
	FillRand(Arr, n);
	Print(Arr, n);
	cout << "Сумма элементов масива:\t" << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое:\t" << Avg(Arr, n) << endl;
	cout << "Максимальное значение:\t" << maxValueIn(Arr, n) << endl;
	cout << "Минимальное значение:\t" << minValueIn(Arr, n) << endl;

	double Brr[n];
	cout << endl << "== double ==" << endl;
	FillRand(Brr, n);
	Print(Brr, n);
	cout << "Сумма элементов масива:\t" << Sum(Brr, n) << endl;
	cout << "Среднее арифметическое:\t" << Avg(Brr, n) << endl;
	cout << "Максимальное значение:\t" << maxValueIn(Brr, n) << endl;
	cout << "Минимальное значение:\t" << minValueIn(Brr, n) << endl;

	int Crr[ROWS][COLS];
	cout << endl << "== 2D Массив ==" << endl;
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	cout << "Сумма элементов масива:\t" << Sum(Crr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое:\t" << Avg(Crr, ROWS, COLS) << endl;
	cout << "Максимальное значение:\t" << maxValueIn(Crr, ROWS, COLS) << endl;
	cout << "Минимальное значение:\t" << minValueIn(Crr, ROWS, COLS) << endl;
}


