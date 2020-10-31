#include "Array.h"
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>
//#define DEBUG

using namespace std;

template<typename T> // шаблон функции дл€ работы с числовыми данными (пара чисел) 
T Multiply(T a, T b) {
	return a * b;
}

template<typename T> // шаблон функции дл€ работы с числовыми данными (массив чисел) 
T Multiply(T* arr, int n) {
	T product = 1;
	for (int i = 0; i < n; i++)
		product *= arr[i];
	return product;
}

template<typename T>
void fillMassive(T*& A, int& size) {
	cout << "¬ведите размер массива: ";
	cin >> size;
	A = new T[size];
	for (int i = 0; i < size; i++)
		cin >> A[i];
}


string SameSymbols(const string s1, const string s2) { // * - чтобы вернулась цела€ строка, а не один символ!!!!
	string res = "";

	for (int i = 0; i < s1.length(); i++)
		for (int j = 0; j < s2.length(); j++)
			if (s1[i] == s2[j])
			{
				res += s1[i];
				break;
			}
	return res;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#ifdef DEBUG

	int n;
	double* arr;
	fillMassive(arr, n);

	Array<double> a(arr, n);
	cout << "—реднее значение: " << a.Avg() << endl;
	cout << "”множение двух элементов: " << Multiply(6, 7) << endl;

	int m;
	int* arr_1;
	fillMassive(arr_1, m);
	cout << "”множение элементов массива: " << Multiply(arr_1, m) << endl;
	delete[] arr;
	delete[] arr_1;

#endif // DEBUG
	string firstRow;
	cout << "¬ведите строку 1: " << endl;
	cin >> firstRow;

	string secondRow;
	cout << "¬ведите строку 2: " << endl;
	cin >> secondRow;

	cout << SameSymbols(firstRow, secondRow);

	return 0;
}