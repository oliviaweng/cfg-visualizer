#include <iostream>

unsigned int *baseline_int(unsigned long int size) {
	unsigned int *array = new unsigned int[size];
	for(unsigned int i = 0; i < size; i++) {
		array[i] = 0;
	}

	for (unsigned int j = 0; j < 3; j++) {
		for(unsigned int i= 0 ; i < size; i++) {
			array[i] += i*j;
		}
	}
	return array;
}

int main() {
    unsigned long int size = 10;
    unsigned int *array = new unsigned int[size];

    array = baseline_int(size);

    for (int i = 0; i < size; i++) {
        std::cout << array[i] << "\n";
    }

    return 0;
}