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
void reverse(int* arr, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << arr[*size - 1 - i] << " ";
	}
}





int main()
{
	srand(time(0));
	int* size = new int;
	cout << "Enter the size of the array: ";
	cin >> *size;
	int* arr = create_array(size);
	print_array(arr, size);
	reverse(arr, size);

	return 0;
}