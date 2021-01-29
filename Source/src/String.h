#pragma once
#include <string>
class StringComand
{

public:	
	StringComand();
	StringComand(const char* inString);
private:
	int size; 
	
	std::string text;
public:
	
	~StringComand(); 
		
	bool operator == (StringComand inString);
	void operator= (const char* comandIn);
	
	void toLower();
	int getSize();
};