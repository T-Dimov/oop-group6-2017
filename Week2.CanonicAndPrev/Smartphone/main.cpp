// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Smartphone.h"

using namespace std;

void sortArr(Smartphone * const arr, size_t size)
{
	int j;
	Smartphone temp;
	for (size_t i = 0; i < size; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j].getPrice() > temp.getPrice())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	Smartphone array[5] = { {"Lenovo K3 Note", 150, "Android 6.0"},{ "iPhone 7", 1500, "iOS" }, { "Google Pixel", 500, "Android 7.1" },
							{ "LG G6", 450, "Android 7.0" },{ "Motorola Moto X", 650, "Android 6.0" } };
	sortArr(array, 5);

	cin.get();
	return 0;
}

