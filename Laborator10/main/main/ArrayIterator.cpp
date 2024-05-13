#include "ArrayIterator.h"

template<class T>
ArrayIterator<class T>::ArrayIterator()
{
	ArrayIterator::Current = 0;
}

ArrayIterator& ArrayIterator::operator ++ ()
{
	this->Current++;
	return Current;
}

template<class T>
bool ArrayIterator<class T>::operator=(ArrayIterator<T>& newList)
{
	try
	{
		if (newList == nullptr)
			throw error;
		delete List;
		List = newList;
		return true;
	}
	catch(exception &e)
	{
		cout << e.what() << '\n';
		return false;
	}
}

template<class T>
bool ArrayIterator<class T>::operator!=(ArrayIterator<T>& newArray)
{
	return List != newArray;
}