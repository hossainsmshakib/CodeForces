#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n],b[n];
    for(long long i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    long long cnt=0;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            if(a[i]==b[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
