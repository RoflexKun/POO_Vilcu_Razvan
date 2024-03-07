#include <bits/stdc++.h>
using namespace std;
int sum=0;
char num[300];
int main()
{
    FILE* ptr = fopen("ini.txt", "r");
    while(fgets(num, 12, ptr))
    {
       int n = atoi(num); 
       sum+=n;
    }
    cout << sum;
}