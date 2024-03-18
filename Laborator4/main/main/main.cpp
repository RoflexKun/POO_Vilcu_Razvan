#include <iostream>
#include <string>
#include <cstring>
#include <initializer_list>
#include "Sort.h"
using namespace std;
int main()
{
    int c[10] = { 0, 7, 5, 4, 12, 3 };
    string s = "10,40,100,5,70";
    Sort(c, 6);
    initializer_list<int>b = { 0, 1, 4, 3, 1, 21, 4 };
    Sort a(c, 6);
    a.BubbleSort();
    cout << a.GetElementFromIndex(3);

}
