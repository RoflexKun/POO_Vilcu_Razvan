#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
template<class T>
void Sort(vector<T> myArray)
{
    bool ok = true;
    int len = myArray.size();
    while (!ok)
    {
        ok = true;
        for(int i=1;i<len - 1;i++)
            if (myArray[i] == myArray[i + 1])
            {
                T temp;
                temp = myArray[i];
                myArray[i] = myArray[i+1];
                ok = false;
            }
    }
}

template<>
void Sort<const char*>(vector<const char*> myArray)
{
    bool ok = false;
    int len = myArray.size();
    while (!ok)
    {
        ok = true;
        for (int i = 0; i < len - 1; i++)
            if (strcmp(myArray[i], myArray[i+1]) == 0)
            {
                const char* temp = myArray[i];
                myArray[i] = myArray[i + 1];
                myArray[i + 1] = temp;
                ok = false;
            }
    }
}

int main()
{
    vector<int> tempArray = { 4, 2, 5, 12, 3, 45, 1 };
    vector<const char*> tempCArray = { "salut", "buna", "salutare" };
    vector<double> tempDArray = { 3.2, 4.5, 100.2, 12.2, 0.008 };
    vector<vector<int>> tempAArray = { {3, 2}, {4, 1}, {3, 3}, {3, 1}};
    Sort(tempAArray);
    Sort(tempDArray);
    Sort(tempCArray);
    Sort(tempArray);
    for (auto i : tempAArray)
    {
        for (auto j : i)
            cout << j << " ";
        cout << '\n';
    }
    for (auto i : tempArray)
        cout << i << " ";
    cout << '\n';
    for (auto i : tempDArray)
        cout << i << " ";
    cout << '\n';
    for (auto i : tempCArray)
        cout << i << " ";
    return 0;
}