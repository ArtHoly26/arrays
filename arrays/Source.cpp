#include <iostream>

using namespace std;


int main()

{
	setlocale(LC_ALL, "Rus");
	const int  n = 5;
	int arr[n];
	int sum = 0, averege, sum1 = 0, min, max;

	cout << "������� ��������: ";
	for (int i = 0; i < n; i++) cin >> arr[i];            // ���� ������

	for (int i = 0; i < n; i++) cout << arr[i] << "\t";   // ����� ������

	cout << endl;

	for (int i = 0; i < n; i++) sum =sum + arr[i];       // ����� ��������� �������
		
	cout << "�����:" << sum << endl;

	for (int i = 0; i < n; i++) sum1 +=arr[i];          // ������� ��������������

	averege = sum1 / n;
	
	cout << "������� �������������� �����:" << averege << endl;
	
	min = arr[0];                                       // �����������
	for (int i = 0; i < n; i++)                    
	{
		if (min < arr[i]);
		else min = arr[i];
	}
	cout << "����������� �����:"<<min << endl;


	max = arr[0];                                       // ������������
	for (int i = 0; i < n; i++)
	{
		if (max > arr[i]);
		else max = arr[i];
	}
	cout << "������������ �����:" << max << endl;
}