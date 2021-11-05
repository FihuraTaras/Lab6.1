// Lab 6_1.cpp 
//Taras Fihura

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Arr1(int* pс, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
	{
		pс[i] = Low + rand() % (High - Low + 1);
	}
}

void Print(int* pс, const int size)
{
	for (int i = 0; i < size; i++)

		cout << setw(4) << pс[i];
	cout << endl;
}

int Num(int* pc, const int size, int A)
{
	for (int i = 0; i < size; i++)
	{
		if (pc[i] % 2 == 0 || !(i % 8 == 0))
		{
			A++;
		}
	}
	return A;
}

int Sum(int* pc, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (pc[i] % 2 == 0 || !(i % 8 == 0))
			S += pc[i];
	return S;
}

void Arr2(int* pc, const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (pc[i] % 2 == 0 || !(i % 8 == 0))
		{
			pc[i] = 0;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ukr");
	srand((unsigned)time(NULL));

	const int size = 25;
	int с[size];
	int Low = 5;
	int High = 90;

	Arr1(с, size, Low, High);
	Print(с, size);
	cout << endl;

	cout << "  iлькiсть елементiв, що задовольн€ють вказаному критерiю = " << Num(с, size, 0) << "\n\n";
	cout << " —ума = " << Sum(с, size) << "\n\n";

	Arr2(с, size);
	Print(с, size);
	cout << endl;

	return 0;
}