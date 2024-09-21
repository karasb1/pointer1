#include <iostream>
using namespace std;

int main()
{
	int* a = new int;
	int* b = new int;
	cin >> *a >> *b;
	if (*a > *b)
	{
		cout << *a;
	}
	else
	{
		cout << *b;
	}
}