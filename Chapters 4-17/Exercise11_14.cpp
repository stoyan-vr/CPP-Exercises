#ifndef MYSTRING.h
#define MYSTRING.h

class MyString
{
public:
  MyString();
  MyString(const char* cString);
  char at(int index) const;
  int length() const;
  void clear();
  bool empty() const;
  int compare(const MyString& s) const;
  int compare(int index, int n, const MyString& s) const;
  void copy(char s[], int index, int n);
  char* data() const;
  int find(char ch) const;
  int find(char ch, int index) const;
  int find(const MyString& s, int index) const;
	
private:
  int size, capacity;
	char value[];
};

MyString::	
MyString::	
MyString::	
MyString::	
MyString::	
MyString::	
MyString::	