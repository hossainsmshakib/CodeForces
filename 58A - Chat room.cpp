#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    size_t a = 0;
    while(a<s.length() && s[a] !='h')
        ++a;
    ++a;
    while(a<s.length() && s[a] !='e')
        ++a;
    ++a;
    while(a<s.length() && s[a] !='l')
        ++a;
    ++a;
    while(a<s.length() && s[a] !='l')
        ++a;
    ++a;
    while(a<s.length() && s[a] !='o')
        ++a;
    if(a < s.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";}
        return 0;
}
