#include<bits/stdc++.h>
using namespace std;
int tachso(long long n,int a[]){
	
	int i = 0;
	while(n>0){
		long long temp = n % 10;
		a[i] = temp; 
		i++; n/= 10;
	}
	for(int j = i-1;j >= 1; j--){
		//cout<<"a["<<j<<"] = "<<a[j]<<endl;
		if(abs(a[j] - a[j-1]) != 1) return 0;
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		int a[50];
		if(tachso(n,a) == 1) cout<<"YES\n";
			else cout<<"NO\n";
		//cout<<endl;
	}
}
