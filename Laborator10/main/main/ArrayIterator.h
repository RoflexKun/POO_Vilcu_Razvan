#pragma once
#include <iostream>
#include <exception>

using namespace std;

class myexception : public exception
{
    virtual const char* what() const throw()
    {
        return "Out of bounds";
    }
} error;

template<class T>
class ArrayIterator
{
private:
    T* List;
    int Current; // mai adaugati si alte date si functii necesare pentru iterator
public:
    ArrayIterator();
    ArrayIterator& operator ++ ()
    ArrayIterator& operator -- ()
    {
        try
        {
            if (Current == 0)
                throw error;
            else
                Current--;
        }
        catch (exception &e)
        {
            cout << e.what << '\n';
        }
    }
    bool operator= (ArrayIterator<T>&);
    bool operator!=(ArrayIterator<T>&);
    T* GetElement();
};

