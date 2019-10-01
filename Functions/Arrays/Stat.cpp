#include "prototype.h"

template<typename T>double Avg(T Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
template<typename T>double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
////////////////////////////////////////////////////////////////////////////////
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
////////////

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
////////////////////////////////////////////////////////

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