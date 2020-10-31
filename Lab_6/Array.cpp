#include "Array.h"
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>
//#define DEBUG

using namespace std;

template<typename T> // ������ ������� ��� ������ � ��������� ������� (���� �����) 
T Multiply(T a, T b) {
	return a * b;
}

template<typename T> // ������ ������� ��� ������ � ��������� ������� (������ �����) 
T Multiply(T* arr, int n) {
	T product = 1;
	for (int i = 0; i < n; i++)
		product *= arr[i];
	return product;
}

template<typename T>
void fillMassive(T*& A, int& size) {
	cout << "������� ������ �������: ";
	cin >> size;
	A = new T[size];
	for (int i = 0; i < size; i++)
		cin >> A[i];
}


string SameSymbols(const string s1, const string s2) { // * - ����� ��������� ����� ������, � �� ���� ������!!!!
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
	cout << "������� ��������: " << a.Avg() << endl;
	cout << "��������� ���� ���������: " << Multiply(6, 7) << endl;

	int m;
	int* arr_1;
	fillMassive(arr_1, m);
	cout << "��������� ��������� �������: " << Multiply(arr_1, m) << endl;
	delete[] arr;
	delete[] arr_1;

#endif // DEBUG
	string firstRow;
	cout << "������� ������ 1: " << endl;
	cin >> firstRow;

	string secondRow;
	cout << "������� ������ 2: " << endl;
	cin >> secondRow;

	cout << SameSymbols(firstRow, secondRow);

	return 0;
}