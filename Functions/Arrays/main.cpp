#include<iostream>
using namespace std;

const int ROWS = 4;	//Количество строк двумерного массива
const int COLS = 5;	//Количество элементов строки

template<typename T>void FillRand(T Arr[], const int n);
template<typename T>void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T Arr[], const int n);
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T Arr[], const int n);
template<typename T>void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>int  Sum(T Arr[], const int n);
template<typename T>int Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T Arr[], const int n);
template<typename T>double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>int minValueIn(T Arr[], const int n);
template<typename T>int minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>int maxValueIn(T Arr[], const int n);
template<typename T>int maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);

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

template<typename T>void FillRand(T Arr[], const int n)
{
	//Заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}
template<typename T>void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}
/////////////////////////////////////////////////////////////////
template<typename T>void Print(T Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Вывод массива на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
	cout << endl;
	}
}
////////////////////////////////////////////////////////////////
template<typename T>void Sort(T Arr[], const int n)
{
	//Сортировка массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
////////////////////////////////////////////////////////////////
template<typename T>int  Sum(T Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}
template<typename T>int Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
///////////////////////////////////////////////////////////////
template<typename T>double Avg(T Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
template<typename T>double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
////////////////////////////////////////////////////////////
template<typename T>int minValueIn(T Arr[], const int n)
{
	T minValueIn = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < Arr[i + 1], Arr[i] < minValueIn)
		{
			minValueIn = Arr[i];
		}
	}
	return minValueIn;
}
template<typename T>int minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T minValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < minValueIn)
			{
				minValueIn = Arr[i][j];
			}
		}
	}
	return minValueIn;
}
template<typename T>int maxValueIn(T Arr[], const int n)
{
	T maxValueIn = 0;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > Arr[i + 1], Arr[i] > maxValueIn)
		{
			maxValueIn = Arr[i];
		}
	}
	return maxValueIn;
}
template<typename T>int maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T maxValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > maxValueIn)
			{
				maxValueIn = Arr[i][j];
			}
		}
	}
	return maxValueIn;
}