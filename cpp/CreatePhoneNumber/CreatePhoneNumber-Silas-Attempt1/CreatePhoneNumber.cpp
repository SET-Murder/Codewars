
#include <cstdio>
#include <sstream>
#include <string>

std::string createPhoneNumber(const int arr [10]);

void main() {
	printf(createPhoneNumber(new int[]{0,1,2,3,4,5,6,7,8,9}).c_str());
}

std::string createPhoneNumber(const int arr [10]) {

	std::ostringstream oss;
	for (int i = 0; i < 10; ++i) {
		oss << arr[i];
	}

	std::string phoneNumber = oss.str();
	phoneNumber.insert(6, "-");
	phoneNumber.insert(3, "-");
	phoneNumber.insert(3, ")");
	phoneNumber.insert(0, "(");
	
	return phoneNumber;
}