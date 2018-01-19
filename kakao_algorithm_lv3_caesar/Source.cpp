#include<iostream>
#include<string>
using namespace std;
bool uppercase(char c)
{
	return c >= 65 && c <= 90;
}
bool lowercase(char c)
{
	return c >= 97 && c <= 122;
}
string caesar(string s, int n)
{
	string answer = "";
	cout << s << endl;

	for (int i = 0; i < s.length(); i++)
	{
		if (uppercase(s[i]) || lowercase(s[i]))
		{

			if (uppercase(s[i]) && (s[i] + n > 90))
			{
				s[i] = (s[i] + n - 26);
			}
			else if ((lowercase(s[i])) && (s[i] + n > 122))
			{
				s[i] = (s[i] + n - 26);
			}
			else
				s[i] += n;
		}
	}
	answer = s;
	cout << answer << endl;
	//char(s[i] + n)
	return answer;
}

int main()
{
	string text = "neAMPbFvHtDhJdbmmZNiXj ZCh cFLyTPjQPkqfRJZjDnkaze";
	int testNo = 7;

	string testAnswer = caesar(text, testNo);

	cout << testAnswer;
}