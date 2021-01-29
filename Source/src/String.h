#pragma once
#include <string>
class StringComand
{
	StringComand();
public:	
	
	StringComand(const char* inString);
private:
	int size; 
	std::string text;
public:
	
	~StringComand(); 
		
	bool operator== (StringComand inString);
	void operator= (const char* commandIn);
	void operator[] (const char* commandIn);
	char operator[] (int nummber);
	
	void toLower();
	int getSize();
};