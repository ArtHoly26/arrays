#include <iostream>

using namespace std;


void FillArray(int* const arr,const int size)
{
	for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}

void PrintArray(int* const arr , const int size)
{
	for (int i = 0; i < size; i++) cout <<arr[i]<< "\t";
}

int main()
{
	int size = 10;
	int* arr = new int[size];
	int* brr = new int[size];

	FillArray(arr, size);
	FillArray(brr, size);
	PrintArray(arr, size);
	cout << endl;
	PrintArray(brr, size);
	cout << endl;

	delete[] arr;

	arr = new int[size];

	for (int i = 0; i < size; i++) arr[i] = brr[i];

	PrintArray(arr, size);
	cout << endl;
	PrintArray(brr, size);
	cout << endl;

	delete[] arr;
	delete[] brr;
}