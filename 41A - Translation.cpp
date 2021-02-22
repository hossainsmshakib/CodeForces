#include<iostream>
#include <string>
using namespace std;
int main()
{
    string w,t;
    cin>>w>>t;
    reverse(w.begin(),w.end());
    if(w==t)
        {
            cout<<"YES";
        }
    else
    {
        cout<<"NO";}
        return 0;
}
