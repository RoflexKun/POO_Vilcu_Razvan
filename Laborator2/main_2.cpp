#include <bits/stdc++.h>
using namespace std;

class Students
{
    int count;
    string Name;
    double gradeMath;
    double gradeEnglish;
    double gradeHistory;
    double average;
public:
    void Init();
    string getName();
    void setName(string s);
    double getGM();
    void setGM(double x);
    double getGE();
    void setGE(double x);
    double getGH();
    void setGH(double x);
    void averageGrade();
    int compareName(string s, string t);
    int compareGM(double a, double b);
    int compareGE(double a, double b);
    int compareGH(double a, double b);
    int compareAverage(double a, double b);
};

void Students::Init()
{
    this->count = 0;
}

string Students::getName()
{
    return Name;
}

void Students::setName(string s)
{
    Name = s;
}

double Students::getGM()
{
    return gradeMath;
}

void Students::setGM(double x)
{
    gradeMath = x;
}

double Students::getGE()
{
    return gradeEnglish;
}

void Students::setGE(double x)
{
    gradeEnglish = x;
}
 
 double Students::getGH()
{
    return gradeHistory;
}

void Students::setGH(double x)
{
    gradeHistory = x;
}

void Students::averageGrade()
{
    average = (gradeMath+gradeEnglish+gradeHistory)/3;
}

int Students::compareName(string s, string t)
{
    if(s == t)
        return 0;
    else if(s > t)
        return 1;
    else 
        return -1;
}

int Students::compareGM(double a, double b)
{
    if(a == b) 
        return 0;
    else if(a > b)
        return 1;
    else 
        return -1;
}

int Students::compareGE(double a, double b)
{
    if(a == b) 
        return 0;
    else if(a > b)
        return 1;
    else 
        return -1;
}

int Students::compareGH(double a, double b)
{
    if(a == b) 
        return 0;
    else if(a > b)
        return 1;
    else 
        return -1;
}
int Students::compareAverage(double a, double b)
{
    if(a == b) 
        return 0;
    else if(a > b)
        return 1;
    else 
        return -1;
}

int main()
{
    Students A, B;
    A.setName("Alex");
    B.setName("Luci");
    A.setGM(7.3);
    A.setGE(8);
    A.setGH(5);
    B.setGM(7.3);
    B.setGE(8);
    B.setGH(5);
    A.averageGrade();
    B.averageGrade();
    cout << A.getName();
    cout << A.compareName(A.getName(), B.getName());
    cout << A.compareAverage(A.averageGrade(), B.averageGrade());

}