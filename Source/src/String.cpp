#include"String.h"

StringComand::StringComand(const char* inString)
{
	text = inString;
	size = static_cast<int>(text.size());
};
StringComand::~StringComand()
{
	
}
StringComand::StringComand()
{
	size = static_cast<int>(text.size());
}

bool StringComand::operator == (StringComand inString)
{
	if (sizeof(inString.text) != sizeof(text))
		return(false);

	if (inString.text == text)
		return(true);

	return(false);
}
void StringComand::operator=(const char* comandIn)
{
	text = comandIn;
	size = static_cast<int>(text.size());
}
void StringComand::operator[](const char* commandIn)
{
	text = commandIn;
	size = static_cast<int>(text.size());
}
char StringComand::operator[](int nummber)
{
	return text[nummber];
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
	delete[] intArry;
}