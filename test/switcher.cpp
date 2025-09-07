#include <cstdlib>
#include <unistd.h>
#include<cstdint>

#define CLINK extern "C"
#define OPT(a) __attribute__(a)

#define NO_OPT __attribute__((optimize(0)))

extern "C" {
uint64_t * NO_OPT ifelse(uint64_t * array,
			   unsigned long int size) {
	if (size == 0) {
		return NULL;
	} else {
		return array;
	}
}

uint64_t * NO_OPT loop(uint64_t * array,
		       unsigned long int size) {
	for(uint i = 0; i < size; i++) {
		array[i] = 0;
	}
	return array;
}

uint64_t * NO_OPT switcher(uint64_t * array,
			   unsigned long int size) {
	switch (size) {

	case 0:
		return &array[1];
		break;
	case 1:
		return &array[4];
		break;
	case 2:
		return &array[5];
		break;
	case 3:
		return &array[2];
		break;
	case 4:
		return &array[11];
		break;
	case 5:
		return &array[10];
		break;
	}
	
	return array;
}

}

int main(int argc, char *argv[])
{

	return 0;
}