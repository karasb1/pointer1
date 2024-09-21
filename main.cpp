#include <iostream>
using namespace std;

int main()
{
	int* a = new int;
	int* b = new int;
	cin >> *a;
	cin >> *b;
	cout << *a << "--->";
	int c = *a;
	*a = *b;
	cout << *a << endl;
	cout << *b << "--->";
	*b = c;
	cout << *b << endl;
	return 0;
}