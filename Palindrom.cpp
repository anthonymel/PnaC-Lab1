#include "stdafx.h"
#include "iostream"
#include <string>
#include <algorithm>
#include <conio.h>
#include <vector>
using namespace std;

bool IsPalindrom(string str)
{
	string s = str;
	reverse(s.begin(), s.end());
	if (str == s) return true;
	else return false;
}

bool IsPalindrom1(string str)
{
	int l = str.length();
	for (int i = 0; i < l; i++)
	{
		if (str[i] != str[l - i -1]) return false;
	}
	return true;
}

vector<string> PolindromFilter(vector<string> words, int minLength)
{
	string strout=" ";
	vector<string> output;
	for (int i = 0; i < words.size(); i++)
	{
		if (IsPalindrom(words[i]) & words[i].length() >= minLength) otput.push_back(words[i]);
	}
	return output;
}

int main()
{
	string str;
	vector<string> words{"weew", "bro", "code"};
	words.resize(100);
	int minLength = 4;
	char ch;
	cout << PolindromFilter(words, minLength) << endl;
	do {
		cin >> str;
		if (IsPalindrom1(str)) cout << "Palindrom" << endl;
		else cout << "No palindrom" << endl;
	} while (str != "exit");
	return 0;
}

