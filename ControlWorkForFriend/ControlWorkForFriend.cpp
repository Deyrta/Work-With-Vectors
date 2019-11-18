#include "pch.h"
#include <iostream>
#include <stdint.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введiть значення n:";
	cin >> n;
	int **A; // Матриця А
	int **B; // Матриця B
	int **C; // Матриця C
	A = new int*[n];
	B = new int*[n];
	C = new int*[n];
	for (int i = 0; i < n; i++)
		A[i] = new int[n];
	for (int i = 0; i < n; i++)
		C[i] = new int[n];
	for (int i = 0; i < n; i++)
		B[i] = new int[n];
	cout << "Введiть A";
	for (int i = 0; i < n; ++i)  // Ввід матриці А
		for (int j = 0; j < n; ++j)
		{
			cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << "=";
			cin >> A[i][j];
		}

	cout << "Введiть B";
	for (int i = 0; i < n; ++i)  // Ввід матриці B
		for (int j = 0; j < n; ++j)
		{
			cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << "=";
			cin >> B[i][j];
		}
	cout << "Введiть С";
	for (int i = 0; i < n; ++i)  // Ввід матриці C
		for (int j = 0; j < n; ++j)
		{
			cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << "=";
			cin >> C[i][j];
		}
	int x, y;
	cout << "Введiть значення х i у: ";
	cin >> x;
	cin >> y;
	int **vectorA;
	int **vectorB;
	vectorA = new int*[n];
	vectorB = new int*[n];
	for (int i = 0; i < n; i++)
		vectorA[i] = new int[n];
	for (int i = 0; i < n; i++)
		vectorB[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			vectorA[i][j] = A[i][j] * x + C[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			vectorB[i][j] = B[i][j] * y + B[i][j];
	cout << "Вектор рiвний = (А,B) \nА = \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << vectorA[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "B = \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << vectorB[i][j] << "\t";
		}
		cout << "\n";
	}

	return 0;
}