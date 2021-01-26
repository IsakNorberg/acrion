#include"String.h"

String::String(const char* inString)
{
	size = 0; 
	for (int i = 0; inString[i] != '\0'; i++)
	{
		size++;
	}
	string = inString;
	
};
String::~String()
{
	delete(string);
}
String::String()
{
	size = 1;
}

bool String::operator == (String inString)
{
	

	if (sizeof(inString.string) != sizeof(string))
		return(false);

	for (int i = 0; i < size; i++)
		if (inString.string[i] != string[i])
			return(false);
	return(true);
	
};
//const char* String::operator[](int index)
//{
//	const char* returnPointer = &string[index];
//	return(returnPointer);
//}
int String::getSize()
{
	return(size);
}
String String::toLower()
{
	
	int* intArry = new int[size];
	for (int i = 0; i < size; i++)
	{
		
		intArry[i] = static_cast<int>(string[i]);
		if (intArry[i] >= 65 && intArry[i] <= 90)
			intArry[i] = intArry[i] + 32;
	}
	String returnString[] = static_cast<const char*>(intArry);
	delete(intArry);
}