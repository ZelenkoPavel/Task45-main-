#include <iostream>
#include <string>

using namespace std;

void logic(int* vector, int size, string& loc_min, string& loc_max) {
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			if (*(vector + i) > *(vector + i + 1)) {
				loc_max += to_string(*(vector + i)) + " ";
			}
			else if (*(vector + i) < *(vector + i + 1)) {
				loc_min += to_string(*(vector + i)) + " ";
			}
		}
		else if (i > 0 && i < size - 1) {
			if (*(vector + i) > *(vector + i + 1) &&
				*(vector + i) > *(vector + i - 1)) {
				loc_max += to_string(*(vector + i)) + " ";
			}
			else if (*(vector + i) < *(vector + i + 1) &&
				*(vector + i) < *(vector + i - 1)) {
				loc_min += to_string(*(vector + i)) + " ";
			}
		}
		else {
			if (*(vector + i) > *(vector + i - 1)) {
				loc_max += to_string(*(vector + i)) + " ";
			}
			else if (*(vector + i) < *(vector + i - 1)) {
				loc_min += to_string(*(vector + i)) + " ";
			}
		}
	}
}