#include "Array.h"

template<class T>
Array<class T>::Array()
{
	List = new T**;
	Capacity = 0;
	Size = 0;
}

template<class T>
Array<class T>::~Array()
{
	for (auto i : List)
		delete[] i;
	Capacity = 0;
	Size = 0;
}

template<class T>
Array<class T>::Array(int capacity)
{
	List = new T**;
	Capacity = capacity;
	Size = 0;
}

template<class T>
Array<class T>::Array(const Array<T>& otherArray)
{
	try
	{
		if (Capacity < otherArray.Size)
			throw error;
		else
		{
			int counter = 0;
			for (auto i : otherArray*)
			{
				Temp = new T*;
				int cnt = 0;
				for (auto j : i)
				{
					Temp[cnt] = j;
					cnt++;
				}
				List[counter] = Temp;
			}
		}
		Size = counter;
	}
	catch (exception &e)
	{
		cout << e.what() << '\n';
	}
		
}

template<class T>
T& Array<class T>::operator [](int index)
{
	return List[index];
}

template<class T>
const Array<T>& Array<class T>::operator+=(const T& newElem)
{
	try {
		if (Size + 1 > Capacity)
		{
			throw error;
		}
		else
		{
			Size++;
			List[Size] = newElem;
		}
		return this;
	}
	catch (exception &e)
	{
		cout << e.what() << '\n';
		return this;
	}
}

template<class T>
const Array<T>& Array<class T>::Insert(int index, const Array<T> otherArray)
{
	try
	{
		if (index < 0 || index > Size || Size + 1 > Capacity)
			throw error;
		else
		{
			
			int cnt = 0;
			bool ok = false;
			temp = new T*;
			for (auto i : List*)
			{
				if (ok)
				{
					temp2 = new T*;
					temp2 = i;
					List[cnt] = temp;
					temp = temp2;
				}
				if (cnt == index)
				{
					ok = true;
					temp = i;
					List[cnt] = newElem;
				}
				cnt++;
			}
			Size++;
			List[Size] = temp;
			return this;
		}
		catch(exception &e)
		{
			cout << e.what() << '\n';
			return this;
		}
	}
}


template<class T>
const Array<T>& Array<class T>::Delete(int index)
{
	try
	{
		if (index < 0 || index > 0 || Size - 1 < 0)
			throw error;
		int cnt = 0;
		for (auto i : List*)
		{
			if (cnt >= index)
			{
				List[cnt] = List[cnt + 1];
			}
			cnt++;
		}
		delete List[Size];
		Size--;
		return this;
	}
	catch (exception &e)
	{
		cout << e.what() << '\n';
		return this;
	}
}

template<class T>
bool Array<class T>::operator=(const Array<T>& otherArray)
{
	try
	{
		Size = otherArray.size();
		for (auto i : otherArray*)
		{
			int cnt = 0;
			for (auto j : i)
			{
				List
			}
		}

	}
}
