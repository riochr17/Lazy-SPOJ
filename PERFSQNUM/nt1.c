#include <stdio.h>
#include <stdlib.h>

long solution[1000000];
int counter = 0;

void push(long n) {
	solution[counter++] = n;
}

void print_solution() {
	if (counter == 0) {
		printf("No Solution\n");
		return;
	}
	printf("[");
	for (int i = 0; i < counter; i++) {
		printf("%ld", solution[i]);
		if (i < counter - 1) {
			printf(", ");
		}
	}
	printf("]\n");
}

void print_sequence(long n) {
	if (n == 0) {
		printf("Infinitely Many Solutions\n");
		return;
	}

	counter = 0;
	// initiate temp_sum -> 0, 1, 4, 9,..., - 8, 15, 24,... - ...
	// initiate i -> ~1~, 3, 5,... - 3, 5, 7,... - 5, 7, 9,... - ...
	// initiate step -> ~1~, 3, 5,...
	long temp_sum = 0, step = 3, i = step;
	while (step <= n) {
		temp_sum += i;
		i += 2;

		// break when sum of sequence greater than n
		if (temp_sum >= n) {

			// take the last step as quadratic solution
			if (temp_sum == n) {
				long position = (step - 1) / 2;
				push(position);
			}

			// next step
			temp_sum = 0;
			step += 2;
			i = step;
		}
	}

	print_solution();
}

int main() {
	int number_of_input;
	char* _1, _2;
	long n;

	scanf("%d", &number_of_input);
	while (number_of_input > 0) {
		number_of_input--;
		scanf("%s %s %ld", &_1, &_2, &n);
		print_sequence(n);
	}
	return 0;
}
