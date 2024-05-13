#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <queue>
using namespace std;
ifstream fin("sample.txt");

class Sort
{
public:
    bool operator()(pair<string, int>& q1, pair<string, int>& q2)
    {
        if (q1.second != q2.second)
            return q1.second < q2.second;
        else
            return q1.first > q2.first;
    }
};

int main()
{
    map<string, int> myMap;
    string temp_string;
    getline(fin, temp_string);
    string temp = "";
    string separators = ".,!? ";
    for (int i = 0; i < temp_string.size(); i++)
    {
        if ((temp_string[i] >= 'a' && temp_string[i] <= 'z') || (temp_string[i] >= 'A' && temp_string[i] <= 'Z'))
        {
            temp += temp_string[i];
        }
        else
        {
            if (temp != "")
            {
                for (auto& j : temp)
                    j = tolower(j);
                if (myMap[temp] == NULL)
                {
                    myMap[temp] = 1;
                }
                else
                    myMap[temp] += 1;
            }   
            temp = "";
        }
    }

    for (auto &i : myMap)
    {
        cout << i.first << ":" << i.second << '\n';
    }
    
    /*
    * 
    * Solutia 1
    map<int, priority_queue<string>> myMap_sorted;
    for (auto& i : myMap)
    {
        myMap_sorted[i.second].push(i.first);
    }

    for (auto& i : myMap_sorted)
    {
        cout << i.first << ": ";
        while (!i.second.empty())
        {
            cout << i.second.top() << " ";
            i.second.pop();
        }      
        cout << '\n';
    }
    */
    priority_queue<pair<string, int>, vector<pair<string, int>>, Sort > myQueue(myMap.begin(), myMap.end());
    while (!myQueue.empty())
    {
        cout << myQueue.top().first << " => " << myQueue.top().second << '\n';
        myQueue.pop();
    }
    

}
