#pragma once
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

template<typename T>
class Array {
	T* arr;
	int n;
	T Sum() {
		T sum = 0;
		for (int i = 0; i < n; i++)
			sum += arr[i];
		return sum;
	}
public:
	T Avg() {
		return Sum() / n;
	}
	Array(T* arr, int n) {
		cout << "Конструктор\n";
		this->arr = arr;
		this->n = n;
	}
	~Array() {
		delete[] arr;
		cout << "Деструктор\n";
	}
};

