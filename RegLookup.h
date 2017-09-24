#include <string>
#include <locale>
#include <algorithm>

class RegLookup
{
	public:

		std::string isRegValid(std::string regNum)
	{
		int index = regNum.length();
		bool result = false;
		int numCount = 0;
		int charCount = 0;
		if (index <= 0) result = false;
		for ( int i = 0; i < index; i++){
			if(std::isdigit(regNum[i])) numCount++;
			else
				if (std::isupper(regNum[i]) || std::islower(regNum[i])) charCount++;
		}
		if (numCount > 0 && charCount > 0)
			result = true;
		else
			result = false;
		if (result == true)
			return "Valid reg number";
		else
			return "Invalid reg number";
	}

};
