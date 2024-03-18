#include "Math.h";
#include <iostream>

using namespace std;
int main()
{
	cout << Math::Add(5, 3) << '\n';
	cout << Math::Add(4, 6, 7) << '\n';
	cout << Math::Add(7.3, 4.5) << '\n';
	cout << Math::Add(67.98, 23.56, 1.2) << '\n';
	cout << Math::Mul(5, 3) << '\n';
	cout << Math::Mul(4, 6, 7) << '\n';
	cout << Math::Mul(7.3, 4.5) << '\n';
	cout << Math::Mul(67.98, 23.56, 1.2) << '\n';
	cout << Math::Add(4, 5,4,3,2) << '\n';
	cout << Math::Add("sa", "lut") << '\n';
	return 0;
}


