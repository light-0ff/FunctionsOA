#include "prototype.h"
// ��� �������(�) ����� ��������
#include "FillRand.cpp"
#include "Print.cpp"
#include "Sort.cpp"
#include "Stat.cpp"

// ��������(�) + ���������� �� ������
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];
	cout << "== int ==" << endl;
	FillRand(Arr, n);
	Print(Arr, n);
	cout << "����� ��������� ������:\t" << Sum(Arr, n) << endl;
	cout << "������� ��������������:\t" << Avg(Arr, n) << endl;
	cout << "������������ ��������:\t" << maxValueIn(Arr, n) << endl;
	cout << "����������� ��������:\t" << minValueIn(Arr, n) << endl;

	double Brr[n];
	cout << endl << "== double ==" << endl;
	FillRand(Brr, n);
	Print(Brr, n);
	cout << "����� ��������� ������:\t" << Sum(Brr, n) << endl;
	cout << "������� ��������������:\t" << Avg(Brr, n) << endl;
	cout << "������������ ��������:\t" << maxValueIn(Brr, n) << endl;
	cout << "����������� ��������:\t" << minValueIn(Brr, n) << endl;

	int Crr[ROWS][COLS];
	cout << endl << "== 2D ������ ==" << endl;
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	cout << "����� ��������� ������:\t" << Sum(Crr, ROWS, COLS) << endl;
	cout << "������� ��������������:\t" << Avg(Crr, ROWS, COLS) << endl;
	cout << "������������ ��������:\t" << maxValueIn(Crr, ROWS, COLS) << endl;
	cout << "����������� ��������:\t" << minValueIn(Crr, ROWS, COLS) << endl;
}


