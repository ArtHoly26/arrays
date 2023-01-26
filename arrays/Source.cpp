#include <iostream>

using namespace std;


int main()

{
	setlocale(LC_ALL, "Rus");
	const int  n = 5;
	int arr[n];
	int sum = 0, averege, sum1 = 0, min, max;

	cout << "Введите элементы: ";
	for (int i = 0; i < n; i++) cin >> arr[i];            // ввод данных

	for (int i = 0; i < n; i++) cout << arr[i] << "\t";   // вывод данных

	cout << endl;

	for (int i = 0; i < n; i++) sum =sum + arr[i];       // сумма элементов массива
		
	cout << "Сумма:" << sum << endl;

	for (int i = 0; i < n; i++) sum1 +=arr[i];          // среднее арифметическое

	averege = sum1 / n;
	
	cout << "Среднее арифметическое равно:" << averege << endl;
	
	min = arr[0];                                       // минимальное
	for (int i = 0; i < n; i++)                    
	{
		if (min < arr[i]);
		else min = arr[i];
	}
	cout << "Минимальное число:"<<min << endl;


	max = arr[0];                                       // максимальное
	for (int i = 0; i < n; i++)
	{
		if (max > arr[i]);
		else max = arr[i];
	}
	cout << "Максимальное число:" << max << endl;
}