#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int capacity=0;
    int remain=0;
    for(i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        remain -=a;
        remain +=b;
        capacity =max(capacity,remain);
    }
    cout<<capacity;
    return 0;
}
