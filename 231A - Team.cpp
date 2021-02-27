#include<iostream>
using namespace std;
int main(){
    int n,p,v,t,number=0;
    cin>>n;
    while(n--){
        cin>>p>>v>>t;
        if(p+v+t>=2){
            number +=1;
        }
    }
    cout<<number<<endl;
    return 0;
}
