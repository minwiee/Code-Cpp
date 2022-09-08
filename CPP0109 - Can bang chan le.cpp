#include<bits/stdc++.h>
using namespace std;

int checkoddeven(int n){
	int odd = 0, even = 0;
	while(n>0){
		int temp = n%10;
		if(temp%2==0) even++;
			else odd++;
		n/=10;
	}
	if(even == odd) return 1;
	else return 0;
}

int main(){
	int n;
	cin>>n;
	int countline = 0;
	for(int i = pow(10,(n-1));i<pow(10,n);i++){
		if(checkoddeven(i) == 1) {
			cout<<i<<" ";
			countline++;
			if(countline == 10){
				countline = 0;
				cout<<endl;				
			}
		}
	}
}
