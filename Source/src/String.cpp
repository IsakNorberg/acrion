#include"String.h"

StringComand::StringComand(const char* inString)
{
	size = text.size();
	text = inString;
	
};
StringComand::~StringComand()
{
	
}
StringComand::StringComand()
{
	size = 1;
}

bool StringComand::operator == (StringComand inString)
{
	

	if (sizeof(inString.text) != sizeof(text))
		return(false);

	for (int i = 0; i < size; i++)
		if (inString.text[i] != text[i])
			return(false);
	return(true);
	
}
void StringComand::operator=(const char* comandIn)
{
	text = comandIn;
}
;

int StringComand::getSize()
{
	return(size);
}
void StringComand::toLower()
{
	
	int* intArry = new int[size];
	for (int i = 0; i < size; i++)
	{
		
		intArry[i] = static_cast<int>(text[i]);
		if (intArry[i] >= 65 && intArry[i] <= 90)
		{
			intArry[i] = intArry[i] + 32;
			text[i] = static_cast<char>(intArry[i]);
		}
	}
	
	delete(intArry);
	
}