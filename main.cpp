#include <iostream>
using namespace std;

int main()
{
	int* first_number = new int;
	int* second_number = new int;
	string* op = new string;
	cout << "Enter the first number: ";
	cin >> *first_number;
	cout << "Enter the second number: ";
	cin >> *second_number;
	cout << "Enter the operation: ";
	cin >> *op;
	if (*op == "+")
	{
		cout << *first_number + *second_number;
	}
	else if (*op == "-")
	{
		cout << *first_number - *second_number;
	}
	else if (*op == "/")
	{
		cout << *first_number / *second_number;
	}
	else if (*op == "*")
	{
		cout << *first_number * *second_number;
	}

	return 0;
}