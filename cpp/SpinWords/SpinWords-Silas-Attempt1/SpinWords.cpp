
#include <iostream>
#include <string>

std::string spinWords(const std::string& str);

void main() {
	std::cout << spinWords("Hello My Friend!");
}

std::string spinWords(const std::string& str){
	std::string toParse = str;
	std::string toReturn = "";
	int pos = 0;
	std::string word;
	while ((pos = toParse.find(' ')) != std::string::npos) {
		word = toParse.substr(0, pos);
		if(word.length()>=5) {
			std::reverse(word.begin(), word.end());
		}
		toReturn.append(word).append(" ");
		toParse.erase(0, pos + 1);
	}
	if (toParse.length() >= 5) {
		std::reverse(toParse.begin(), toParse.end());
	}
	toReturn.append(toParse);

	return toReturn;
}// spinWords
