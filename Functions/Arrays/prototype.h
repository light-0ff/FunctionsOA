#pragma once
#include<iostream>
using namespace std;

const int ROWS = 4;	//Количество строк двумерного массива
const int COLS = 5;	//Количество элементов строки

void FillRand(double Arr[], const int n);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
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
