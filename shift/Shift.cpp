#include <iostream>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Rus");
	int const n = 10;
	int arr[n]{ 0,1,2,3,4,5,6,7,8,9 };
	int time1 = arr[0];  
	int time2 = arr[1];  
	int time3 = arr[2];  

	for (int i = 0; i < n; i++) cout << arr[i];
	cout << "\n";

	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];      // Сдвиг влево на 1

	arr[n - 1] = time1;

	for (int i = 0; i < n; i++) cout << arr[i];                 //Вывод 
	cout << "\n";

	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];      // Сдвиг влево на 1

	arr[n - 1] = time2;

	for (int i = 0; i < n; i++) cout << arr[i];                  //Вывод 
	cout << "\n";

	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];      // Сдвиг влево на 1

	arr[n - 1] = time3;

	for (int i = 0; i < n; i++) cout << arr[i];                  //Вывод 
	cout << "\n";

	for (int i = n-1; i > 0; i--) arr[i] = arr[ i - 1 ];     // Сдвиг влево на 1

	arr[0] = time3;

	for (int i = 0; i < n ; i++) cout<<arr[i];                   //Вывод 
	cout << "\n";

	for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];     // Сдвиг вправо на 1

	arr[0] = time2;

	for (int i = 0; i < n; i++) cout << arr[i];                  //Вывод 
	cout << "\n";

	for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];     // Сдвиг вправо на 1

	arr[0] = time1;
	 
	for (int i = 0; i < n; i++) cout << arr[i];                  //Вывод 
	cout << "\n";



}



















	/*for (int i = 0; i < n; i++) cout << arr[i];

	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
	cout << "\n";

	arr[n - 1] = time1;

	for (int i = 0; i < n; i++) cout << arr[i];
	cout << "\n";

	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];

	arr[n - 1] = time2;

	for (int i = 0; i < n; i++) cout << arr[i];
	cout << "\n";

	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];

	arr[n - 1] = time3;

	for (int i = 0; i < n; i++) cout << arr[i];
	cout << "\n";*/



	