#include "isogram.h"
#include "ctype.h"
#include <string>
#include <iostream>

using namespace std;

namespace isogram {
	bool is_isogram(string word) {
		word = to_lowercase(word);
		int first_occurrence = 0;
		int last_occurrence = 0;
		for (int i = 0; i < word.length(); i++) {
			if (!isalpha(word[i]))
				continue;
			first_occurrence = word.find(word[i]);
			last_occurrence = word.rfind(word[i]);
			if (first_occurrence != last_occurrence) {
				return false;
			}
		}
		
		return true;
	}

	string to_lowercase(string word) {
		string lowercase_word = "";
		for (int i = 0; i < word.length(); i++) {
			lowercase_word += tolower(word[i]);
		}
		return lowercase_word;
	}
}  // namespace isogram
