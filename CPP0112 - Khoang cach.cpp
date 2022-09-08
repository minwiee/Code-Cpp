#include<bits/stdc++.h>
using namespace std;

void length(double x1,double y1, double x2, double y2){
	double len;
	len = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	cout<<setprecision(4)<<fixed<<len<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		double x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		length(x1,y1,x2,y2);
	}
}
