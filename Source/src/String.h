#pragma once
#include <string>
class StringComand
{

	int size; 
public:
	std::string text;
	~StringComand(); 
	StringComand();
	StringComand(const char* inString);

	bool operator== (StringComand inString);
	void operator= (const char* commandIn);
	void operator[] (const char* commandIn);
	char operator[] (int nummber);
	
	void toLower();
	int getSize();
};