#include"Stack.hpp"
#include<string>

bool paren(string s)
{
	Stack<char> S;
	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case'(':case'[':case'{':S.push(s[i]); break;
		case')':if ((S.empty()) || ('(' != S.pop())) return false; break;
		case']':if ((S.empty()) || ('[' != S.pop())) return false; break;
		case'}':if ((S.empty()) || ('{' != S.pop())) return false; break;
		default:break;
		}
	}
	return S.empty();
}

int main()
{
	string s;
	cin >> s;
	cout << paren(s);
}