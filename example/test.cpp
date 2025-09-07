// Test file to push through r2 disassembelr to create x86 cfg

# include <iostream>

int loop() {
	int i;
	int arr[5] = {};

	for (i = 0; i < 5; i++) {
		arr[i] = i;
	}
	return arr[0];
}

int main() {
	int ret;

	ret = loop();
	std::cout << "Num = " << ret << "\n";
	return 0;
}
