#include "difference_of_squares.h"

namespace difference_of_squares {
	int square_of_sum(int value) {
		int sum = 0;
		for (int i = 0; i <= value; i++) {
			sum += i;
		}
		return (int)pow(sum, 2);
	}

	int sum_of_squares(int value) {
		int sum = 0;
		for (int i = 0; i <= value; i++) {
			sum += pow(i,2);
		}
		return sum;
	}

	int difference(int value) {
		return square_of_sum(value) - sum_of_squares(value);
	}
}  // namespace difference_of_squares
