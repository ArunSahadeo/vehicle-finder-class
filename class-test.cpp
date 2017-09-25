#include <iostream>
#include <string>
#include "RegLookup.h"

int main()
{
	RegLookup regNumber;
    std::string regInput;
    std::cout << "Please enter a valid registration number: ";
    std::cin >> regInput;
	std::cout << regNumber.isRegValid(regInput) << std::endl;
}
