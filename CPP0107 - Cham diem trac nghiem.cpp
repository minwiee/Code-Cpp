#include<bits/stdc++.h>
using namespace std;

void check(int id,char a[]){
//	char de101[15] = {"A","B","B","A","D","C","C","A","B","D","C","C","A","B","D"};
//	char de102[15] = {"A","C","C","A","B","C","D","D","B","B","C","D","D","B","B"};
	char de101[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char de102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int tick=0;
	switch(id){
		case 101:{
			for(int i = 0;i<15;i++){
				if(a[i]==de101[i]) {
					tick+=1;
				}
			}
			break;
		}
		case 102:{
			for(int i = 0;i<15;i++){
				if(a[i]==de102[i]) {
					tick+=1;
				}
			}
			break;
		}
	}
	float mark;
	mark = 10./15*tick;
	cout<<setprecision(2)<<fixed<<mark<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		int id;cin>>id;
		char a[15]; 
		for(int i = 0; i< 15; i++) cin>>a[i];
		check(id,a);	
	}	
}
