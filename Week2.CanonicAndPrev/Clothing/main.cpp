// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Clothing.h"
#include "main.h"

using namespace std;

void getAllByColor(Clothing *arr, size_t length, const char *colour)
{
	for (size_t i = 0; i < length; i++)
	{
		if (!strcmp(arr[i].getColour(), colour))
		{
			arr[i].print();
			cout << endl;
		}
	}
}

void getAllByType(Clothing *arr, size_t length, const char *type)
{
	for (size_t i = 0; i < length; i++)
	{
		if (!strcmp(arr[i].getType(), type))
		{
			arr[i].print();
			cout << endl;
		}
	}
}

void getAllCheaperThan(Clothing *arr, size_t length, double price)
{
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i].getPrice() < price)
		{
			arr[i].print();
			cout << endl;
		}
	}
}

void getAllMoreExpensiveThan(Clothing *arr, size_t length, double price)
{
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i].getPrice() > price)
		{
			arr[i].print();
			cout << endl;
		}
	}
}

void sortByPriceHighToLow(Clothing *arr, size_t length)
{
	int j;
	Clothing temp;
	for (size_t i = 0; i < length; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j].getPrice() < temp.getPrice())
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	Clothing clothes[5] = { {"dress", "red", 200, 30} ,{"trouser" , "black", 100, 34} ,{"cardigan", "purple", 15, 40} ,
							{"dress", "black", 150, 28} ,{"trouser", "gray", 125, 32} };

	Clothing aPiece;
	Clothing newPiece(aPiece);
	Clothing newnew = aPiece;

	cout << "Red:" << endl;
	getAllByColor(clothes, 5, "red");
	cout << endl << "Black:" << endl;
	getAllByColor(clothes, 5, "black");
	cout << endl << "Gray:" << endl;
	getAllByColor(clothes, 5, "gray");
	cout << endl << "Purple:" << endl;
	getAllByColor(clothes, 5, "purple");
	cout << endl << "Green:" << endl;
	getAllByColor(clothes, 5, "green");
	cout << endl << endl;
	
	cout << endl << "Dress:" << endl;
	getAllByType(clothes, 5, "dress");
	cout << endl << "Trouser:" << endl;
	getAllByType(clothes, 5, "trouser");
	cout << endl << "Cardigan:" << endl;
	getAllByType(clothes, 5, "cardigan");
	cout << endl << "Jumper:" << endl;
	getAllByType(clothes, 5, "jumper");
	cout << endl << endl;
	
	cout << endl << "Cheaper than 125:" << endl;
	getAllCheaperThan(clothes, 5, 125);
	
	cout << endl << "More expensive than 125:" << endl;
	getAllMoreExpensiveThan(clothes, 5, 125);
	
	cout << endl << "Sorted: " << endl;
	sortByPriceHighToLow(clothes, 5);
	for (size_t i = 0; i < 5; i++)
	{
		clothes[i].print();
		cout << endl;
	}

	cin.get();
	return 0;
}

