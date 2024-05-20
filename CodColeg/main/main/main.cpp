#include <iostream>
#include <vector>

using namespace std;
template<typename T>
class Compare {
public:
    int CompareElements(T e1, T  e2) {
        if ((int)e1 > (int)e2)
            return 1;

        if ((int)e1 < (int)e2)
            return -1;

        return 0;
    }
};

template<class T>
class sortt {

public:
    void InsertSort(vector<T>& list, int listLength) {
        int i, j;
        T key; // trebuie sa fie de tip T
        Compare<T> obj;

        for (i = 0; i < listLength; i++) // trebuie pana la < listLength
        {
            key = list[i];
            j = i - 1;
            while (j >= 0 && (obj.CompareElements(list[j], key) > 0)) // Trebuie sa fie mai mare de 0 si sa fie . nu ->
            {
                list[j + 1] = list[j]; // trebuia facut asta
                j--;
            }
            list[j + 1] = key;
        }
    }

};

int main()
{
    vector<int> a = { 2, 3, 5, 1, 10, 8 };
    sortt<int> obj;
    int len = a.size();
    obj.InsertSort(a, len);
    for (auto i : a)
    {
        cout << i << " ";
    }
}