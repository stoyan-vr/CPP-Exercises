#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
public:
  MyString(const char ch, int size)
	{
		chars[0] = ch;
		this->size = size;
	}
	
	MyString(const char chars[], int size)
	{
		for (int i = 0; i < size; i++)
			this->chars[i] = chars[i];
		this->chars[size] = '\0';
		this->size = size;
	}
	
	MyString append(const MyString& s)
	{
		strcat(this->chars, s.chars);
		size += s.size;

		return *this;
	}


  MyString append(const MyString& s, int index, int n)
	{
		for (int i = index; i < index + n; i++)
			this->chars[size + i] = s.chars[i];
		size += n;
		
		return *this;
	}
		
  MyString append(int n, char ch)
	{
		for (int i = size; i < size + n; i++)
			chars[i] = ch;
		size += n;
		
		return *this;
	} 
	
  MyString assign(const char* chars)
	{
		int i = 0;
		while (chars[i] != '\0')
		{
			this->chars[i] = chars[i];
			i++;
		}
		this->chars[i] = '\0';
		size = i;
		return *this;
	}

/*			
MyString assign(const MyString& s, int index, int n);
MyString assign(const MyString& s, int n);
MyString assign(int n, char ch);
MyString substr(int index, int n) const;
MyString substr(int index) const;
MyString erase(int index, int n); */

  friend ostream& operator<<(ostream& out, const MyString& s)
  {
		out << s.chars << endl;
    return out;
  } 
	
	bool operator==(const MyString s)
	{
		if (s.size != size)
			return false;
	  for (int i = 0; i < size; i++)
			if (s.chars[i] != chars[i])
				return false;
			
		return true;
	}

private:
  char chars[100];
	int size;
}; 

int main()
{
	char s1[] = "abbc";
	char s2[] = "abc";
	MyString myString1(s1, 4);
	MyString myString2(s2, 3);
	cout << (myString1 == myString2) << endl;
	return 0;
}