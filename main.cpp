#include <iostream>
#include <ctime>
using namespace std;

int* create_array(int* size)
{
	int* arr = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		arr[i] = rand() % 50;
	}
	return arr;
}
void print_array(int* arr, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
int* sum_array(int* arr, int* size)
{
	int* sum = new int{ 0 };
	for (int i = 0; i < *size; i++)
	{
		*sum += arr[i];
	}
	return sum;
}





int main()
{
	srand(time(0));
	int* size = new int;
	cout << "Enter the size of the array: ";
	cin >> *size;
	int* arr = create_array(size);
	print_array(arr, size);
	int* res = sum_array(arr, size);
	cout << *res << endl;


	return 0;
}