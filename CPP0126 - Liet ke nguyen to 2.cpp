#include<bits/stdc++.h>
using namespace std;

int checkprime(long long n){
	if(n<2) return 0;
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;cin>>t;
	while(t--){
	long long a,b; cin>>a>>b;
	if(a>b) swap(a,b);
	for(long long i = a;i<=b;i++){
		if(checkprime(i)) cout<<i<<" ";
	}
	cout<<endl;
}
	return 0;
}
