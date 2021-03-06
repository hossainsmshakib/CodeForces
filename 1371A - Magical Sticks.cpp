#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int ans=1;
		n--;
		ans +=n/2;
		cout<<ans<<endl;
	}
	return 0;
}
