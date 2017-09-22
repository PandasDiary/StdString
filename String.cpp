#include <iostream>
#include <locale.h>
#include "StringHeader.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	const char* a;
	String str;
    String str1("hello");
	String str2(" world");
	str = str1 + str2;
	str1 += str2;
	str1[1] = 'j';
	a = (const char*)str1;
	cout << a << endl;
	cout << str1[0] << endl;
	cout << str << endl;
	cout << str1 << endl;
	system("pause");
	return;
}