#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	sort(&s[0],&s[s.length()]);
	int c=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			continue;
		}
		c++;
	}
	if(c%2)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";
}
