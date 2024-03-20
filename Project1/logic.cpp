


bool logic(int* vector, int size) {

	for (int i = 0; i < size; i++) {
		if (i == 0) {
			if (*(vector + i) > *(vector + i + 1) ||
				*(vector + i) < *(vector + i + 1)) {
				return true;
			}
		}
		else if (i > 0 && i < size - 1) {
			if (*(vector + i) > *(vector + i + 1) &&
				*(vector + i) > *(vector + i - 1)) {
				return true;
			}
			else if (*(vector + i) < *(vector + i + 1) &&
				*(vector + i) < *(vector + i - 1)) {
				return true;
			}
		}
		else {
			if (*(vector + i) > *(vector + i - 1) ||
				*(vector + i) < *(vector + i - 1)) {
				return true;
			}
		}
	}

	return false;
}