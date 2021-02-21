
#include <cstdio>
#include <regex>
#include <string>
#include <vector>

int countSmileys(std::vector<std::string> arr);

void main() {
	printf("%d", countSmileys({ ":)", ":(", ":D", ":O", ":;" }));
}

int countSmileys(std::vector<std::string> arr)
{
	int count = 0;
	for (const std::string& potentialFace : arr) {
		count += std::regex_match(potentialFace, std::regex("([:]|[;])([-]|[~])?([)]|[D])"));
	}
	
	return count;
}