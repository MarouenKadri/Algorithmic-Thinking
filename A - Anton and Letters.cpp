#include <iostream>
#include <map>
#include <cctype> // For std::isalnum
#include<string>

int main() {
	std::map<char, int> mp;
	std::string line;
	std::getline(std::cin, line); // Read the entire line into a string    

	for (char character : line) {
		if (std::isalnum(character)) { // Check if the character is alphanumeric
			mp[character]++;
		}
	}

	std::cout << mp.size(); 

	return 0;
}
