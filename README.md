# cfg-visualizer
Control flow graph visualizer with Python API using radare2 developed for [UCSD CSE 142L](https://github.com/CSE142/Home/tree/master).

Follow instructions on how to install radare2 [here](https://rada.re/n/radare2.html). 

`environment.yml` provides a conda environment with all dependencies.

Example assignment [here](https://github.com/CSE142/fa21-CSE142L-compiler-starter/blob/main/Lab.pdf).

## Example CFG
An example with a small loop. Green edges indicate the "taken" branch and red edges indicate the "not taken" branch.
```c++
int loop() {
	int i;
	int arr[5] = {};

	for (i = 0; i < 5; i++) {
		arr[i] = i;
	}
	return arr[0];
}
```

![example](test-cfg.png)
