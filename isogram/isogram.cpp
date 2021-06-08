#include "isogram.h"
#include <string>
#include <boost/algorithm/string.hpp>
#include <boost/range/algorithm/count.hpp>

using namespace std;
using namespace boost::algorithm;

namespace isogram {
	bool is_isogram(string word) {
		to_lower(word);
		for (char letter : word) {
			if (isalpha(letter) && boost::count(word, letter) > 1) {
				return false;
			}
		}
		return true;
	}
}  // namespace isogram
