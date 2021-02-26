#include<iostream>
using namespace std;
int main(){
    int n, count=0,i;
    char a[50];
    cin>>n;
    cin>>a;
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

