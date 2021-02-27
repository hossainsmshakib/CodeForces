#include <bits/stdc++.h>
#include <string>
typedef long long ll;
using namespace std;
 
 int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,a=0,b=0;
    while(i<n)
    {
        if(s[i]=='A')
            a++;
        else
            b++;
        i++;
    }
    if(a>b)
        cout<<"Anton";
    else if(a<b)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
