#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    double sum=0.0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
       cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    sum=sum/n;
    printf("%.12lf\n",sum);
    return 0;
}
