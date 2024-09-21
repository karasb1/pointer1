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
int* copying_array(int* arr, int* arr2, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		arr2[i] = arr[i];
	}
	return arr2;
}





int main()
{
	srand(time(0));
	int* size = new int;
	cout << "Enter the size of the array: ";
	cin >> *size;
	int* arr = create_array(size);
	int* arr2 = create_array(size);
	print_array(arr, size);
	print_array(arr2, size);
	int* res = copying_array(arr, arr2, size);
	cout << "-----------------------------------------------------------" << endl;
	print_array(arr, size);
	print_array(arr2, size);

	return 0;
}