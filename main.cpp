#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int arr[10] = { 0, 3, 5, 2, 9, 6, 8, 1, 4, 7 };
int arr_len = sizeof(arr) / sizeof(arr[0]);


int main()
{
	cout << "ÅÅÐòÇ°£º" << endl;
	for (int i = 0; i < arr_len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "ÅÅÐòºó£º" << endl;
	for (int i = 0; i < arr_len - 1; i++)
	{
		for (int j = 0; j < arr_len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < arr_len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;

}