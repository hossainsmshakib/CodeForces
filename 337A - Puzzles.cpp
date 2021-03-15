#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st,np,m=0,ans;
    cin>>st>>np;
    int arr[np];
    for(int i=0;i<np;i++){
        cin>>arr[i];
    }
    sort(arr,arr+np);
    m=arr[np-1]-arr[0];
    for(int i=st;i<=np;i++){
        ans=arr[i-1]-arr[i-st];
        ans=abs(ans);
        m=min(m,ans);
    }
    cout<<m;
}
