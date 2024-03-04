#include <iostream>
using namespace std;
int negative_el(int* array, int size);
int max_el(int* array, int size);
int min_el(int* array, int size);
int min_max(int* array, int size);
string convert_array_string(int* array, int size);
void rand_init(int* array, int size, int min, int max);

int main() {

	int size = 0;
	do {
		cout << "Input number: ";
		cin >> size;

	} while (size < 1);
	int* array = new int[size];
	rand_init(array, size, -10, 20);
	

	cout << "\nNegative elements: " << negative_el(array, size);
	cout << "\nBetween min and max: " << min_max(array, size);
	cout << convert_array_string(array, size);
	delete[] array;
	return 0;
}