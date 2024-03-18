#pragma once
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <initializer_list>
#include <string>
#include <cstring>
#include <string.h>
class Sort
{
    int a[1005];
    int n= 20;
    int maxi=100;
    int mini=5;
    
public:
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
    Sort(int n, int mini, int maxi)
    {
        srand(time(NULL));
        for (int i = 0; i < n; i++)
        {
            a[i] = rand() % maxi + mini;
        }
    }
    Sort(int c[], int count)
    {
        for (int i = 0; i < count; i++)
            a[i] = c[i];
    }
    Sort(std::string s)
    {

    }
    Sort(int count, ...)
    {

    }
    Sort(std::initializer_list<int> b)
    {
        int count = 0;
        for (auto i = b.begin(); i < b.end(); i++)
        {
            a[count++] = *i;
        }
    }
};

