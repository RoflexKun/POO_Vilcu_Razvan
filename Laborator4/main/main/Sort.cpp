#include "Sort.h"
#include <iostream>
using namespace std;
void Sort::InsertSort(bool ascendent)
{
	int ok = 1;
	while (ok)
	{
		ok = 0;
		for(int i=0;i<n-1;i++)
			if (a[i] > a[i + 1] == ascendent)
			{
				int aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				i--;
				ok = 1;
			}
	}

}

void Sort::QuickSort(bool ascendent)
{

}

void Sort::BubbleSort(bool ascendent)
{

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j] == ascendent)
				swap(a[i], a[j]);
}

void Sort::Print()
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << '\n';
}

int Sort::GetElementFromIndex(int index)
{
	return a[index];
}