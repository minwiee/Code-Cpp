#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i = 2; i <= sqrt(n);i++){
			if(n % i == 0){
				int somu = 0;
				while(n%i==0){
					somu++;
					n/=i;
				}
				cout<<i<<" "<<somu<<" ";
			}
		}
		if(n>1) cout<<n<<" "<<"1";// <<endl luon o day la sai vi 
		cout<<endl;			// phai co if moi xuong dong, vdu 16 = 2 4 
	}						//khong xuong dong
	return 0;
}
