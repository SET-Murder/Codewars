
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

std::string spinWords(const std::string& str);

void main() {
	printf(spinWords("Hello my friend").c_str());
}

std::string spinWords(const std::string &str) {
	std::stringstream ss(str);
	std::string words;
	std::string result;
	while (ss >> words) {
		if(words.length()>=5) {
			std::reverse(words.begin(), words.end());
		}
		result.append(words).append(" ");
	}
	result.erase(result.length() - 1);
	
	return result;
}