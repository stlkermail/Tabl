#include <iostream>
//#include <windows.h>

using namespace std;
//#define FOR 
//#define SIMPLE_NUMBERS        // Таблица умножения
//#define MULTIPLICATION_TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR
	int n;                                                        // количество итераций
	cout << "Введите ко-во  итераций: "; cin >> n;

	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";                                       // shift + F5   вывход из отладчика
	}
#endif // FOR

#ifdef SIMPLE_NUMBERS
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << " :\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)
			{
				cout << " ";
			}
			cout << i << "\t" << j << endl;
		}
	}
#endif // SIMPLE_NUMBERS

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << right;
			cout << i * j;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

}