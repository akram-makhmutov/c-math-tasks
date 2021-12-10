#include <iostream>
using namespace std;

int reck(int n)
{
	int fact = 1;

	if (n == 0)
	{
		return fact;
		exit(0);
	}

	while (n != 1)
	{
		fact = fact * n;
		n = n - 1;
	}
	return fact;
}

int other_way(int n)
{
	int fact = 1;
	int b = n;
	int* mas = new int[n];

	if (n == 0)
	{
		return fact;
		exit(0);
	}

	for (int i = 0; i < n; i++)
	{

		mas[i] = fact;
		fact = mas[i] * m;
		m = m - 1;
	}
	return fact;
}


int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите n" << endl;
	cin >> n;
	cout << "Факториал числа " << n << " с использованием рекурсии " << reck(n) << endl;
	cout << "Факториал числа " << n << " без использования рекурсии " << other_way(n) << endl;
}
