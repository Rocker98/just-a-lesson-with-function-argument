// less3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

struct Animal
{
	std::string nameAnimall;
};


int sumTo(const int x);
void printAnimalName(const Animal &);
void minmax(const int, const int, int &, int &);
int getLargerIndexOfArray(const int* arr, const int lenght);
const int& getElement(const int* arr, int index);

using namespace std;

int main()
{/*
	int userValue;
	cout << "Enter integer value: ";
	cin >> userValue;
	sumTo(static_cast<int>(userValue));

	Animal a{"Murka"};
	printAnimalName(a);
	

	int a, b, max, min;
	cout << "Enter first number :";
	cin >> a;
	cin.ignore();
	cout << "Enter second number :";
	cin >> b;
	cin.ignore();
	
	minmax(a, b, min, max);
	cout << "Max number is :" << max << " Min number is :" << min << endl;
	

	int mas[5]{ 1,1,2,5,2 };
	cout << "Larger is :" << getLargerIndexOfArray(mas,5)<<endl;
	*/
	int arr[]{ 2,7,8,4,1,2 };
	cout << getElement(arr, 4);
    return 0;
}

int sumTo(const int x)
{
	int y, score=0;
	for (y = 0; y <= x; y++)
	{
		score += y;
	}
	cout << "Sum is " << score << endl;
	return score;
}

void printAnimalName(const Animal &animal)
{
	cout << animal.nameAnimall<<endl;
}

void minmax(const int a, const int b, int &minOut, int &maxOut)
{
	if (a > b)
	{
		minOut = b;
		maxOut = a;
	}
	else if (a < b)
	{
		minOut = a;
		maxOut = b;

		}
	else
	{
		maxOut = minOut = a;
	}
}

int  getLargerIndexOfArray(const int * arr, const int lenght)
{
	int largerNumb = arr[0];
	for (int i = 0; i < lenght; i++)
	{
		if (arr[i + 1] > arr[i])
			largerNumb = arr[i + 1];
	}

	return largerNumb;
}

const int & getElement(const int * arr, int index)
{
	// TODO: вставьте здесь оператор return
	return arr[index];
}
