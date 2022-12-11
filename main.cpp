#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int arr_len = sizeof(arr) / sizeof(arr[0]);
int main()
{
	int* p = arr;
	for (int i = 0; i < arr_len; i++)
	{
		cout << *p << " ";
			p++;
	}
	cout << endl;


	system("pause");
	return 0;
}