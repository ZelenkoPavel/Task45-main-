#include <iostream>
#include <string>

using namespace std;

void logic(int* vector, int size, int& quantity_local_min, int& quantity_local_max) {
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			if (*(vector + i) > *(vector + i + 1)) {
				quantity_local_max++;
			}
			else if (*(vector + i) < *(vector + i + 1)) {
				quantity_local_min++;
			}
		}
		else if (i > 0 && i < size - 1) {
			if (*(vector + i) > *(vector + i + 1) &&
				*(vector + i) > *(vector + i - 1)) {
				quantity_local_max++;
			}
			else if (*(vector + i) < *(vector + i + 1) &&
				*(vector + i) < *(vector + i - 1)) {
				quantity_local_min++;
			}
		}
		else {
			if (*(vector + i) > *(vector + i - 1)) {
				quantity_local_max++;
			}
			else if (*(vector + i) < *(vector + i - 1)) {
				quantity_local_min++;
			}
		}
	}
}