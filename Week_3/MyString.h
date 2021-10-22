#pragma once

#include <iostream>

using namespace std;
class MyString
{
	char* str;
	int size;
public:
	MyString() {
		size = 0;
		str = new char[1];
		str[0] = '\0';
	}
	~MyString() {
		if (str != NULL)
		{
			size = 0;
			delete str;
			str = NULL;
		}
	}

	friend istream& operator>>(istream&, MyString&);
	friend ostream& operator<<(ostream&, const MyString&);

	int length();
	char* subString(const int&, const int&);

	char* operator+(const MyString&);
	char* operator+(const char*);
	friend char* operator+(const char*, const MyString&);

	char* insert(const int&, const MyString&);
	char* erase(const int&, const int&);
	char* replace(const int&, const int&, const MyString&);
	bool find(const int&, const MyString&);
};
