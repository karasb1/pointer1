#include <iostream>
using namespace std;

int main()
{
	int* a = new int;
	cin >> *a;
	if (*a > 0)
	{
		cout << *a << " > 0";
	}
	else if (*a < 0)
	{
		cout << *a << " < 0";
	}
	else
	{
		cout << *a << " = 0";
	}
	delete a;
}