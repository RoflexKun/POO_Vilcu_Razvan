#include "NumberList.h"
#include <bits/stdc++.h>
using namespace std;

class NumberList
{
    int numbers[10];
    int count;
public:
    void Init();          // count will be 0
    void Add(int x);      // adds X to the numbers list and increase the data member count.
                          // if count is bigger or equal to 10, the function will return false
    void Sort();          // will sort the numbers vector
    void Print();         // will print the current vector
};

void NumberList::Init()
{
    this->count = 0;
}

void NumberList::Add(int x)
{
    this->count++;
    this->numbers[count] = x;
}

void NumberList::Sort()
{
    for(int i=1;i<count;i++)
        for(int j=i+1;j<=count;j++)
            if(numbers[i] > numbers[j])
                {
                    int aux = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = aux;
                }
}

void NumberList::Print()
{
    for(int i=1;i<=count;i++)
        std::cout << numbers[i] << " ";
}

int main()
{
    NumberList numbers[10];
    NumberList A;
    A.Init();
    A.Add(2);
    A.Add(1);
    A.Add(8);
    A.Add(7);
    A.Print();
    cout << '\n';
    A.Sort();
    A.Print();
    cout << '\n';

}