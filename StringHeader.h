#ifndef H_STRINGHEADER
#define H_STRINGHEADER
class String
{
private:
	int c;
	char* str;
public:
	String(char *str1);
	String();
	String(const String &str2);
	~String();
	String& operator = (const String &str2);
	String operator+(const String &str2);
	String& operator+=(const String &str2);
	char& operator[](int n);
	char operator[](int n) const;
	operator char* () const;
};
#endif
