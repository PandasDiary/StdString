#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "StringHeader.h"
using namespace std;

String :: String(char *str1)
{
	c = strlen(str1);
	str = new char[c + 1];
	str = str1;
}
String :: String()
{
	c = 0;
	str = new char[c + 1];
	str = "\0";
}
String :: String(const String &str2)
{
	c = str2.c;
	str = new char[c + 1];
	str = str2.str;
}
String :: ~String()
{
	//delete[] str;
}
String& String::operator = (const String &str2)
{
	if (this == &str2)
	{
		return(*this);
	}
	if (this->str != str2.str)
	{
		this->str = new char[c + 1];
		strcpy(this->str, str2.str);
		this->c = str2.c;
		return (*this);
	}
}
String String::operator+(const String &str2)
{
	char* temp;
	int k;
	k = this->c + str2.c;
	temp = new char[k + 1];
	strcpy(temp, this->str);
	strcat(temp, str2.str);
	return(String(temp));
}
String& String::operator+=(const String &str2)
{
	char* temp;
	temp = new char[this->c + 1];
	temp = this->str;
	this->c += str2.c;
	this->str = new char[this->c + 1];
	strcpy(this->str, temp);
	strcat(this->str, str2.str);
	return(*this);
}
char& String :: operator[](int n)
{
	try
	{
		if ((n < this->c) && (n >= 0))
		{
			return(this->str[n]);
		}
		else
			throw "Ошибка: Выход за пределы строки";
	}
	catch (char *str)
	{
		cerr << str << endl;
	}
	//return NULL;

}
char String::operator[](int n) const
{
	try
	{
		if ((n < this->c) && (n >= 0))
		{
			return(this->str[n]);
		}
		else
			throw "Ошибка: Выход за пределы строки";
	}
	catch (char *str)
	{
		cerr << str << endl;
	}
	return NULL;
}
String::operator char* () const
{
	return str;
}
