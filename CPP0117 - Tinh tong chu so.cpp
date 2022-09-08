#include<bits/stdc++.h>
using namespace std;

void tinhtong(int &n){
	int sum = 0;
	while(n>0) {
		int temp = n % 10;
		sum+=temp;
		n/=10;
	}
	n = sum;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		while (n>9) tinhtong(n);
		cout<<n<<endl;
	}
	return 0;
}
/*
#include <iostream> 
using namespace std; 
void tinh(int* a){ 
	int b=0; 
	while(*a!=0){ 
		b+=*a%10; *a/=10; 
	} 
		*a=b; } 
int main(){ 
	int t; cin>>t; 
	while(t--){ 
		int n; cin>>n; 
		while(n>9){ tinh(&n); } cout<<n<<endl; } return 0; }

*/
