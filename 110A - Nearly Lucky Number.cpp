#include<iostream>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    int x =0;
    while(a !=0){
        if(a%10 == 4 || a%10 == 7){
            x +=1;
        }
        a /=10;
    }
    if(x == 4 || x==7)
    {
        cout<<"YES"<<endl;
        
    }
    else{
    cout<<"NO"<<endl;}
    return 0;
}
