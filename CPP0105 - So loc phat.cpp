#include<bits/stdc++.h>
using namespace std;

int check(int n){
	while(n>0){
		int temp = n%10;
		if((temp!=0) && (temp != 6) && (temp !=8)){
			return 0; 
		} 
		n/=10;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(check(n)==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
