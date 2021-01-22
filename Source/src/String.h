#pragma once
class String
{

public:	
	String();
	String(const char* inString);
private:
	int size; // size nog bra 
	const char* string;
public:
	
	~String(); 
		
	bool operator== (String inString);
	//const char* operator[] (int index);
	String toLower();
	int getSize();
};