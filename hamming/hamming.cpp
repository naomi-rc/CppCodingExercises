#include "hamming.h"
#include <stdexcept>

using namespace std;

namespace hamming {
	int compute(string firstStrand, string secondStrand) {
		if (firstStrand.length() != secondStrand.length()) {
			throw domain_error("Sequences are of different lengths");
		}
		int errors = 0;
		for (int i = 0; i < firstStrand.length(); i++) {
			errors += (firstStrand[i] == secondStrand[i]) ? 0 : 1;
		}
		return errors;
	}
}  // namespace hamming
