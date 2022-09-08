#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long long UCLN(int a,int b){
	while(a!=b){
		if(a>b) a = a - b;
		else b = b - a;
	}
	return a;
}
long long BCNN(int a, int b){
	return (a*b)/UCLN(a,b);
}
int main(){
	int t; cin>>t;
	while(t--){
		long long a,b; cin>>a>>b;
		long long c = (a*b)/__gcd(a,b);long long d = __gcd(a,b);
		cout<<c<<" "<<d<<endl;
	}
	return 0;
}
