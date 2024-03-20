#include <iostream>

using namespace std;

void random_init(int*, int, int, int);
void user_init(int*, int);
string convert_to_string(int*, int);

void logic(int*, int, string&, string&);

int main() {

	int min, max;
	int size;
	int choice;

	do {
		system("cls");
		cout << "Input size of vector: ";
		cin >> size;
		cout << "Select initialization (1 or 2): \n1) user_init \n2) random_init \n";
		cin >> choice;
	} while (size <= 0 || choice < 1 || choice > 2);

	int* vector = new int[size];

	if (choice == 1) {
		user_init(vector, size);
	}
	else {
		cout << "Input range of values (min, max): ";
		cin >> min >> max;
		random_init(vector, size, min, max);
	}

	cout << "Vector elements: " << convert_to_string(vector, size) << endl;

	string loc_min = "";
	string loc_max = "";

	logic(vector, size, loc_min, loc_max);

	cout << "loc_min - " << loc_min << endl;
	cout << "loc_max - " << loc_max << endl;

	delete[] vector;

	return 0;
}